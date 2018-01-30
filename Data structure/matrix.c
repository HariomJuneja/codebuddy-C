# program to calculate 2*2 Matrix

#include <stdio.h>
#include <math.h>
#include <stdlib.h>
main()
{
int a[2][2],b[2][2],c[2][2],row1,col1,row2,col2,i,j,k,sum=0;

srand(getpid());
row1=sizeof(a)/sizeof(a[0]);           /* no of rows in matrix a*/  
col1=sizeof(a[0])/sizeof(a[0][0]);     /* no of columns in matrix a
row2=sizeof(b)/sizeof(b[0]);           /* no of rows in matrix b*/
col2=sizeof(b[0])/sizeof(b[0][0]);     /* no of columns in matrix b*/

printf("matrix a:\n");                   

for(i=0;i<row1;i++,printf("\n"))      

for(j=0;j<col1;j++)
{
a[i][j]=rand() % 8 + 1;               /* printing values in matrix a using rand() function which generate random values */
printf("%2d", a[i][j]);
}

printf("matrix b:\n");
for(i=0;i<row2;i++,printf("\n"))
for(j=0;j<col2;j++)
{
b[i][j]=rand() % 8 + 1;
printf("%2d",b[i][j]);                /* printing values in matrix b using rand() function */
}

for(i=0;i<row1;i++)
{
for(j=0;j<col2;j++)
{
for(k=0;k<col1;k++)
{
sum=sum+a[i][k]*b[k][j];              /* performing matrix multiplication */
c[i][j]=sum;
}
}
}

printf("multiplication of a and b :\n");     /* result of matrix multiplication */
for(i=0;i<row1;i++,printf("\n"))
for(j=0;j<<col2;j++)
{
printf("%d",c[i][j]);
}
}
