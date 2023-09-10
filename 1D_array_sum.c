#include<stdio.h>
main()
{
	int a[10],sum=0,n,i;
	printf("enter no of elements..:");
	scanf("%d",&n);
	for(i=0;i<n;i++)
	{
		printf("enter element at a[%d]..:",i);
		scanf("%d",&a[i]);
	}
	printf("given elements are..:");
	for(i=0;i<n;i++)
	{
		printf("\n%5d",a[i]);
	}
	for(i=0;i<n;i++)
	{
		sum+=a[i];
    }
	printf("\nsum of given array elements is..:%d",sum);
}
