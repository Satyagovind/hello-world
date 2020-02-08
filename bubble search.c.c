#include<stdio.h>
void main()
{
	int a[100],i,j,n,temp;
	printf("enter the no. of array element\n");
	scanf("%d", &n);
	printf("enter the %d array elements \n",n);
	for(i=0;i<n;i++)
	scanf("%d",&a[i]);
	printf("the array elemnts are\n");
	for (i=0;i<n;i++)
	printf("%4d\n",a[i]);
	for(i=0;i<n-1;i++)
	{
		for(j=0;j<n-i-1;j++)
		{
			if(a[j]<a[j+1])
			{
				temp=a[j];
				a[j]=a[j+1];
				a[j+1]=temp;
			}
		}
	}
	printf("array after sorting\n");
	for(i=0;i<n;i++)
	printf("%4d ",a[i]);
}
