//binary search
#include<stdio.h>
int main()
{
         int i,n,key,a[50],pos=0,high,low,mid;
         printf("Enter the size of array");
         scanf("%d",&n);
         printf("enter the elements of array");
         for(i=0;i<n;i++){
                  scanf("%d",&a[i]);
         }
         printf("enter the elements for searching");
         scanf("%d",&key);
         low=0;
         high=n-1;
         while(low<=high)
         {
                  mid=(low+high)/2;
                  if(a[mid]==key)
                  {
                           pos=mid+1;
                           break;
                  }
                  else if(key<a[mid])
                  {
                           high=mid-1;
                  }
                  else{
                  	 low=mid+1;
                  }
         }
         printf("the element present at %d",pos);
return 0;         
}