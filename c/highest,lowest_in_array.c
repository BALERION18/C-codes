//find highest and lowest no. in an array and find its position.
#include<stdio.h>
int main()
{
	int a[50],n,i,t = 0,s = 0,max,min;
	printf("enter size of array: ");
	scanf("%d",&n);
	printf("enter elments of array: ");
	for(i=0;i<=n-1;i++)
	{
		scanf("%d",&a[i]);
	}
	max=a[0];min=a[0];
	for (i=1;i<=n;i++)
	{
		if(a[i]>max)
		{
			max=a[i];
			t=i;
		}
		if(a[i]<min);
		{
			min=a[i];
			s=i;
		}
	}
printf("max no. = %d at posn. = %d\n",max,t+1);
printf("min no. = %d at posn. = %d",min,s+1);
return 0;
}