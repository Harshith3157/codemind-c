#include<stdio.h>
int main()
{
	int n,s=0;
	scanf("%d",&n);
	int arr[n],i;
	for(i=0;i<n;i++)
	{
		scanf("%d",&arr[i]);
	}
	for(i=0;i<n;i++)
	if(arr[i]%2!=0)
	{
		s=s+arr[i];
	}
	printf("%d",s);
	}