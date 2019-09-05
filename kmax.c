#include <stdio.h>


int main()
{
int n,k;
printf("Enter the no. of element:");
scanf("%d",&n);
int a[n];
printf("Enter k");

scanf("%d",&k);
printf("Enter the element:");
for(int i=0;i<n;i++)
{

scanf("%d",&a[i]);
}

for(int i=0;i<n-1;i++)
{
for(int j=i+1;j<n;j++)
{
if(a[i]>a[j])
{
int temp=a[i];
a[i]=a[j];
a[j]=temp;
}
}

}

int i=n-1;
printf("k largest elements:");
for(int j=1;j<=k;j++)
{
printf("%d\n",a[i]);
i--;
}
return 0;
}

