#define n 4
#include<stdbool.h>
#include<stdio.h>
void PrintSolution(int nQueen[n][n])
{
 for(int i=0;i<n;i++)
 {
  for(int j=0;j<n;j++)
   {
     printf("%d", nQueen[i][j]);
    }
   printf("\n");
  }
}


bool isSafe(int nQueen[n][n],int row,int col)
{
int i,j;
for(i=0;i<col;i++)
{
 if(nQueen[row][i])
   return false;
}
for (i=row,j=col;i>=0&&j>=0;i--,j--)
{
   if (nQueen[i][j])
     return false;
}
for (i=row,j=col;j>=0&&i<n;i++,j--)
{
   if (nQueen[i][j])
    return false;
}
return true;
}


bool solveNqueen(int nQueen[n][n],int col)
{
  if(col>=n)
    return true;
for(int i=0;i<n;i++)
{
  if(isSafe(nQueen,i,col))
{ 
  nQueen[i][col]=1;
  if(solveNqueen(nQueen,col+1))
{
   return true;
}
  nQueen[i][col]=0;
 }
}
return false;
}


 bool solveNQ()
{
 
 int nQueen[n][n];
 
   printf("enter the values");
   for(int i=0;i<n;i++)
   {
     for(int j=0;j<n;j++)
      {
        scanf("%d",&nQueen[i][j]);
      }
  }


if(solveNqueen(nQueen,0)==false)
{
   printf("solution does not exist");
   return false;
}
   PrintSolution(nQueen);
   return true;
}


int main()
{
solveNQ();
return 0;
}
