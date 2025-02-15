//array
#include<stdio.h>
int main(){
	int a[50],n,i;
	printf("enter size of array: ");
	scanf("%d",&n);
	printf("enter elements of array: ");
	for (i=0;i<=n-1;i++)
	{
		scanf("%d",&a[i]);
	}
	printf("array elements are: ");
	for (i=0;i<=n-1;i++)
	{
		printf(",%d",a[i]);
	}
	return 0;
}