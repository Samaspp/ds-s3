//sparse matrix addition
#include <stdio.h>
typedef struct
{
    int row;
    int col;
    int value;
} spm;
void main()
{
 spm s1[10],s2[10],sum[10];
 int x,y,z;
 printf("\nEnter number of rows and columns of s1: ");
 scanf("%d %d",&s1[0].row,&s1[0].col);
 printf("\nEnter number of rows and columns of s2: ");
 scanf("%d %d",&s2[0].row,&s2[0].col);
 
 printf("\nEnter number of non-zero elements in s1: ");
 scanf("%d",&s1[0].value);
 printf("\nEnter number of non-zero elements in s2: ");
 scanf("%d",&s2[0].value);
 printf("\nEnter sparse matrix representation of s1: ");
 for(int i=1;i<=s1[0].value;i++)
 {
  scanf("%d %d %d",&s1[i].row, &s1[i].col, &s1[i].value);
 }
 printf("\nEnter sparse matrix representation of s2: ");
 for(int i=1;i<=s2[0].value;i++)
 {
  scanf("%d %d %d",&s2[i].row,&s2[i].col,&s2[i].value);
 }
 
 printf("Sparse matrix representation s1\n");
 for (int i = 0; i <= s1[0].value; i++)
   printf("%2d %2d %2d\n", s1[i].row, s1[i].col, s1[i].value);
        
 printf("Sparse matrix representation s2\n");
 for (int i = 0; i <= s2[0].value; i++)
   printf("%2d %2d %2d\n", s2[i].row, s2[i].col, s2[i].value);     
 
 if ((s1[0].row != s2[0].row) || (s1[0].col != s2[0].col))
    {
        printf("different matrix size. cant add.");
    }

    else
    {
        int z = 1, x = 1, y = 1;
        for (int i = 0; i < s1[0].row; i++)
            for (int j = 0; j < s1[0].col; j++)
            {
                if (s1[x].row == i && s1[x].col == j && s2[y].row == i && s2[y].col == j)
                {
                    sum[z].row = i;
                    sum[z].col = j;
                    sum[z].value = s1[x].value + s2[y].value;
                    x++;
                    y++;
                    z++;
                }
                else if (s1[x].row == i && s1[x].col == j)
                {
                    sum[z].row = i;
                    sum[z].col = j;
                    sum[z].value = s1[x].value;
                    x++;
                    z++;
                }
                else if (s2[y].row == i && s2[y].col == j)
                {
                    sum[z].row = i;
                    sum[z].col = j;
                    sum[z].value = s2[y].value;
                    y++;
                    z++;
                }
            }
        sum[0].value = --z;
        printf("\nResultant sparse matrix representation after addition:\n");
        printf("%3d%3d%3d\n", s1[0].row, s1[0].col, z);
        for (int i = 0; i <= sum[0].value; i++)
   printf("%3d%3d%3d\n", sum[i].row, sum[i].col, sum[i].value);
        
    }
}    
   
