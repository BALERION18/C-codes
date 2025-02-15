// type 1
#include <stdio.h>
int sum1(int,int);
int main(){
    int a,b,c;
    printf("Enter value of a,b: ");
    scanf("%d %d",&a,&b);
    c=sum1(a,b);
    printf("sum = %d",c);
    return 0;
}int sum(int x,int y)
{
	int z;
	z=x+y;
	return z;
 } 

 // type 2
 #include <stdio.h>
int sum2(int,int);
int main(){
    int a,b;
    printf("Enter value of a,b: ");
    scanf("%d %d",&a,&b);
    sum2(a,b);
    return 0;
}int sum(int x,int y)
{
	int z;
	z=x+y;
	printf("sum of no.'s = %d",z);
 } 

// type 3
 #include <stdio.h>
int sum3();
int main(){
    int c;
    c=sum3();
    printf("sum = %d",c);
    return 0;
}int sum3()
{
	int x,y,z;
	printf("enter value of x,y: ");
	scanf("%d %d",&x,&y,&z);
	z=x+y;
	return z;
 } 

 //type 4
  #include <stdio.h>
int sum4();
int main(){
    sum4();
    return 0;
}int sum4()
{
	int x,y,z;
	printf("enter value of x,y: ");
	scanf("%d %d",&x,&y,&z);
	z=x+y;
	printf("sum = %d",z);
 } 


// call by value function(swapping)
 #include <stdio.h>
int swapA(int,int);
int main(){
    int a,b;
    printf("enter value of a,b: ");
    scanf("%d %d",&a,&b);
    printf("value of a = %d and b = %d before swapping\n",a,b);
    swapA(a,b);
    printf("value of a = %d and b = %d after swapping\n",a,b);
    return 0;
}int swap(int x, int y)
{
	int t;
	printf("value of x = %d and y = %d before swapping\n",x,y);
	t=x;
	x=y;
	y=t;
	printf("value of x = %d and y = %d after swapping\n",x,y);
 }

 // POINTERS
  #include <stdio.h>
int swapA(int,int);
int main(){
    int a=5,*P;
    P=&a;
    printf("%d\n",a);
    printf("%d\n",*P); // (*)--> dereferencing operator{us adress pr konsi value pdi hai}
    printf("%d\n",&a); //&a --> GIVES ADRESS
    printf("%d\n",P);
    printf("%d\n",&P);
}

//  call by reference(swapping)
 #include <stdio.h>
int swapB(int*,int*);
int main(){
    int a,b;
    printf("enter value of a,b: ");
    scanf("%d %d",&a,&b);
    printf("value of a = %d and b = %d before swapping\n",a,b);
    swapB(&a,&b);
    printf("value of a = %d and b = %d after swapping\n",a,b);
    return 0;
}int swapB(int *x, int *y)
{
	int t;
	printf("value of x = %d and y = %d before swapping\n",*x,*y);
	t=*x;
	*x=*y;
	*y=t;
	printf("value of x = %d and y = %d after swapping\n",*x,*y);
 }


 // factorial of a number using (RECURSION)
#include<stdio.h>
int sum(int);
int main(){
	int f,n;
	printf("enter no.: ");
	scanf("%d",&n);
	f=sum(n);
	printf("sum of %d is = %d",n,f);
	return 0;
}
int sum(int x)
{
	if(x==0)
	{
		return 0;
	}
	else
	{
		return x+sum(x-1);
	}
}

// program to find fibonacci series of a number using recursion
#include<stdio.h>
int fibo(int);
int main(){
	int n;
	printf("enter no.: ");
	scanf("%d",&n);
	for(int i=1;i<=n;i++)
	{
		printf("%d",fibo(i));
	}
    return 0;
}
int fibo(int x)
{
	if(x==1)
	{
		return 0;
	}
	else if (x==2)
	{
		return 1;
	}
	else
	{
		return fibo(x-1)+fibo(x-2);
	}
}


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


//sum of an array
#include<stdio.h>
int main(){
	int a[50],n,i,sum=0;
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
		sum=sum+a[i];
	}
	printf("sum = %d",sum);
	return 0;
}


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


//copy elements of array into another array.
#include<stdio.h>
int main()
{
	int a[50],b[50],i,n;
	printf("enter size of array: ");
	scanf("%d",&n);
	printf("enter elments of array: ");
	for(i=0;i<=n-1;i++)
	{
		scanf("%d",&a[i]);
	}
    for(i=0;i<=n;i++)
    {
    	b[i]=a[i];
	}
printf("elements of b array: ");
for(i=0;i<=n-1;i++)
{
	printf("%d",b[i]);
}
return 0;
}


//add corressponding no. of 2 array.
#include<stdio.h>
int main()
{
	int a[50],b[50],i,n,sum[50];
	printf("enter size of array : ");
	scanf("%d",&n);
	printf("enter elments of array a: ");
	for(i=0;i<=n-1;i++)
	{
		scanf("%d",&a[i]);
	}
    printf("enter elments of array b: ");
	for(i=0;i<=n-1;i++)
	{
		scanf("%d",&b[i]);
	}
	for(i=0;i<=n-1;i++)
    {
    	sum[i]=a[i]+b[i];
	}
printf("sum of array's': ");
for(i=0;i<=n-1;i++)
{
	printf(" %d",sum[i]);
}
return 0;
}
	
