#include<iostream>
using namespace std;
int n,i,j,arr[10][10],visited[10];
int DFS(int v)
{
  cout<<v;
  visited[v]=1;
  for(i=0;i<n;i++)
  {  
    if((arr[v][i]==1)&&(visited[i]==0))
    DFS(i);
   }
return 0;
 }
  int main()
{
  cout<<"enter the number of nodes";
  cin>>n;
  cout<<"enter the elements";
  for(i=0;i<n;i++)
  {
     for(j=0;j<n;j++)
      {
        cin>>arr[i][j];
      }
  } 
for(i=0;i<n;i++)
visited[i]=0;
  for(i=0;i<n;i++)
   {
    if(visited[i]==0)
     {
       DFS(i);
     }
   }
 return 0;
}
