#include <stdio.h>
int main()
{
int i,j,n,t,min,k;
printf("Enter the no. of element:");
scanf("%d",&n);
int a[n];
printf("Enter k");

scanf("%d",&k);
printf("Enter the element:");
for(i=0;i<n;i++)
{

scanf("%d",&a[i]);
}

for(i=0;i<=k-1;i++)
{
min=i;
for(j=i+1;j<=n-1;j++)
{
if(a[j]<a[min])
min=j;
}
t=a[i];
a[i]=a[min];
a[min]=t;
}
printf("The kth minimum is:%d\n",a[k-1]);
return(0);
}
