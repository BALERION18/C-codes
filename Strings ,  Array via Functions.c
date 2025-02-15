// write a program to add elements of array using function
#include<stdio.h>
int add(int[],int);
int main(){
	int a[50],n,i,s;
	printf("Enter size of array: ");
		scanf("%d",&n);
	printf("Enter elements of array: ");
	for(i=0;i<n-1;i++)
	{
		scanf("%d",&a[i]);
	}
	s=add(a,n);
	printf("sum of elements = %d",s);
	return 0;
}
int add(int x[],int m)
{
	int j, sum=0;
	for(j=0;j<m-1;j++)
	{
		sum=sum+x[j];
	}
	return sum;
}

// write a program to reverse elements of array using function
#include <stdio.h>

void rev(int[], int);  // Function declaration for reverse

int main() {
    int a[50], n, i;
    
    printf("Enter size of array: ");
    scanf("%d", &n);
    
    printf("Enter elements of array: ");
    for(i = 0; i < n; i++) {  // Fix the loop to correctly input all elements
        scanf("%d", &a[i]);
    }
    
    // Call the function to reverse the array
    rev(a, n);
    
    printf("Reversed array: ");
    for(i = 0; i < n; i++) {
        printf("%d ", a[i]);  // Print the reversed array
    }
    
    return 0;
}

// Function to reverse the array
void rev(int a[], int n) {
    int i, temp;
    
    for(i = 0; i < n / 2; i++) {
        temp = a[i];
        a[i] = a[n - i - 1];
        a[n - i - 1] = temp;
    }
}


// write a string and print it
#include<stdio.h>
#include<string.h>
int main(){
	char str[20];
	printf("enter a string: ");
	gets(str);
	printf("entered string is: ");
	puts(str);
	return 0;
}

// write a string and print its length
#include<stdio.h>
#include<string.h>
int main(){
	char str[20];int length;
	printf("enter a string: ");
	gets(str);
	printf("entered string is: ");
	puts(str);
	length = strlen(str);
	printf("length of string is = %d",length); 
	return 0;
}

/*// logic of strlen function
#include<stdio.h>
#include<string.h>
int main(){
	char str1[20];
	int i;
	printf("enter str1: ");
	gets(str1);
	for(i=0;str1[i]!='\0';i++);
    printf("length of string = %d",i);
	return 0;
}*/

// write a string and compare
#include<stdio.h>
#include<string.h>
int main(){
	char str1[20],str2[20];
	int a;
	printf("enter  string 1: ");
	gets(str1);
	printf("enter  string 2: ");
	gets(str2);
    a = strcmp(str1,str2);
    if(a==0)
    {
    	printf("strings are same");
	}
	else
	{
		printf("strings are not same");
	}
	return 0;
}


/*// logic of strcmp function
#include<stdio.h>
#include<string.h>
int main(){
	char str1[20],str2[20];
	int i,temp;
	printf("enter str1: ");
	gets(str1);
	printf("enter str2: ");
	gets(str2);
	for(i=0;str1[i]!='\0';i++)
	{
		if(str1[i]==str2[i])
		{
			temp=1;
		}
		else
		{
			temp==0;
		}
	}
	if(temp==0)
	{
		printf("both strings are same");
	}
	else
	{
		printf("not same");
	}
	return 0;
}*/


// copy string to another string
#include<stdio.h>
#include<string.h>
int main(){
	char str1[20],str2[20];
	int a;
	printf("enter  string 1: ");
	gets(str1);
    strcpy(str2,str1);
	printf("copied string: ");
	puts(str2);
	return 0;
}

/*// logic of strcpy function
#include<stdio.h>
#include<string.h>
int main(){
	char str1[20],str2[20];
	int i,temp;
	printf("enter str1: ");
	gets(str1);
	for(i=0;str1[i]!='\0';i++)
    {
    	str2[i]=str1[i];
	}
	str2[i]='\0';
	printf("copied string: ");
	puts(str2);
	return 0;
}*/


// write 2 string and concatenate it
#include<stdio.h>
#include<string.h>
int main(){
	char str1[20],str2[20];
	int a;
	printf("enter  string 1: ");
	gets(str1);
	printf("enter  string 2: ");
	gets(str2);
    strcat(str1,str2);
    printf("combined string: ");
    puts(str1);
	return 0;
}

/*// write a string and concatenate
#include<stdio.h>
#include<string.h>
int main(){
	char str1[20],str2[20];
	int i,j;
	printf("enter  string 1: ");
	gets(str1);
	printf("enter  string 2: ");
	gets(str2);
    for(i=0;str1[i]!='\0';i++);
	for(j=0;str2[j]!='\0';i++,j++)
    {
    	str1[i]=str2[j];
	}
    printf("combined string: ");
	puts(str1);
	return 0;
}*/

// reverse a string
#include<stdio.h>
#include<string.h>
int main(){
	char str1[20],str2[20];
	int a;
	printf("enter  string 1: ");
	gets(str1);
    strrev(str1);
    printf("reversed string is: ");
    puts(str1);
	return 0;
}

/*// logic of strrev function
#include<stdio.h>
#include<string.h>
int main(){
	char str1[20],str2[20];
	int i,j,ch;
	printf("enter str1: ");
	gets(str1);
	for(j=0;str1[j]!='\0';j++);
    for(i=0,j=j-1;i<j;i++,j--)
    {
    	ch=str1[i];
    	str1[i]=str1[j];
    	str1[j]=ch;
	}
	printf("reversed string: ");
	puts(str1);
	return 0;
}*/

// lower a string
#include<stdio.h>
#include<string.h>
int main(){
	char str1[20],str2[20];
	int a;
	printf("enter  string 1: ");
	gets(str1);
    strlwr(str1);
    printf("lowered string is: ");
    puts(str1);
	return 0;
}

// UPPER a string
#include<stdio.h>
#include<string.h>
int main(){
	char str1[20],str2[20];
	int a;
	printf("enter  string 1: ");
	gets(str1);
    strupr(str1);
    printf("upper string is: ");
    puts(str1);
	return 0;
}

