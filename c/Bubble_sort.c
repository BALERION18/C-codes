//bubble sort
#include<stdio.h>
int main()
{
         int i,n,a[50],t,j;
         printf("Enter the size of array");
         scanf("%d",&n);
         printf("enter the elements of array");
         for(i=0;i<n;i++){
                  scanf("%d",&a[i]);
         }
         for(i=0;i<n-1;i++)
         {
                  for(j=0;j<n-1-i;j++)
                  {
                           t=a[j];
                           a[j]=a[j+1];
                           a[j+1]=t;
                  }
         }
         printf("sorted arrey:");
         for(i=0;i<n;i++)
         {
                  printf("%d",a[i]);
         }
         
return 0;
}