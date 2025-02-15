// enter and display record of student using structure where members are name, age, roll no., marks
#include<stdio.h>
struct student
{
	char name[20];
	int rollno;
	int age;
	float marks;
};
int main (){
	struct student s;
	printf("enter record of student ==> \n");
	printf("enter name of student: ");
	gets(s.name);
	printf("enter roll no.: ");
	scanf("%d",&s.rollno);
	printf("enter age: ");
	scanf("%d",&s.age);
	printf("enter marks: ");
	scanf("%f",&s.marks);
	printf("record of student: ");
	printf("name = %s",s.name);
	printf("\nroll no. = %d",s.rollno);
	printf("\nage = %d",s.age);
	printf("\nmarks = %f",s.marks);
	return 0;

}


// enter and display record of 2 student (one in compile time one in run time)
#include<stdio.h>
struct student
{
	int id;
	char name[20];
	float percentage;
};
int main (){
	struct student s1={10,"luka modric",33.33};
	struct student s2;
	printf("enter details of s2: ");
	scanf("%d %s %f",&s2.id,&s2.name,&s2.percentage);
	printf("details of student ==>\n");
	printf("student id = %d\nstudent name = %s\nstudent percentage = %f\n",s1.id,s1.name,s1.percentage);
	printf("details of s2 ==>\n");
    printf("student id = %d\nstudent name = %s\nstudent percentage = %f",s2.id,s2.name,s2.percentage);	

	return 0;

}


// enter and display record of 2 student (one in compile time one in run time)
#include<stdio.h>
struct student
{
	char name[20];
	int age;
	int rollno;
	float marks;
};
int main (){
	struct student s[100];
	int i;	
	printf("enter record of student: ");
	printf("\nEnter name,age,roolno,marks: ");
	for(i=0;i<=5;i++)
	{
		scanf("%s %d %d %f",&s[i].name,&s[i].age,&s[i].rollno,&s[i].marks);
    }
	printf("record of students ==>\n");
    for(i=0;i<=5;i++)
	{
		printf("name = %s",s[i].name);
	    printf("\nage = %d",s[i].age);
	    printf("\nroll no. = %d",s[i].rollno);
	    printf("\nmarks = %f",s[i].marks);
	}
    return 0;

}


// nested structure
#include<stdio.h>
struct date
{
	int day;
	int month;
    int year;
};
 // defining outer structure
	struct Person{
		char name[20];
		int age;
		int height;
        struct date birthdate; // nested structure
};
int main(){
	struct Person Person1 = {"alice",30,5.5};
	Person1.birthdate.day = 15;
	Person1.birthdate.month = 6;
	Person1.birthdate.year = 1990;
	printf("name = %s\n",Person1.name);
	printf("age = %d\n",Person1.age);
	printf("height = %.2f\n",Person1.height);
	printf("birthdate = %d/%d/%d\n",Person1.birthdate.day,Person1.birthdate.month,Person1.birthdate.year);
    return 0;
}

// program to print the student detail using nested structure members of structure is name, roll no., mobile no.
//nested = pcm marks
#include <stdio.h>
struct PCM
{
	int p;
	int c;
	int m;
};
struct Person{
	char name[20];
	int age;
	int Rollno;
	long long int Mobileno;
	struct PCM Marks;

};
int main()
{
	struct Person Person1={"Alice",19,5,9746758390};
	Person1.Marks.p=77;
	Person1.Marks.c=85;
	Person1.Marks.m=91;
	printf("Name: %s\n",Person1.name);
	printf("Age: %d\n",Person1.age);
	printf("Roll no: %d\n",Person1.Rollno);
	printf("Mobile no: %lld\n",Person1.Mobileno);
	printf("Marks in all subjects:\nPhysics=%d\t Chemistry=%d\t Maths=%d\t",Person1.Marks.p,Person1.Marks.c,Person1.Marks.m);
	return 0;
	}


// to store and display record of book using union
#include<stdio.h>
union books
{
	char name[20];
	int no;
	float price;
};
int main(){
	union books b;
    printf("enter books name: ");
    scanf("%s",&b.name);
	printf("books name: = %s ",b.name);
	printf("\nenter isbn no: ");
    scanf("%d",&b.no);
    printf("isbn no: = %d ",b.no);
    printf("\nenter price: ");
    scanf("%f",&b.price);
	printf("price: = %f ",b.price);
    return 0;
}

// size of union
#include<stdio.h>
union test
{
	int a;
	float b;
	char c[20];
};
int main(){
	union test u;
    printf("size of union variable = %d ",sizeof(u));
    return 0;
}

// implement an program using dma
#include<stdio.h>
#include<stdlib.h>
int main(){
	int n,*ptr=NULL,i;
	printf("Enter number of elements: ");
	scanf("%d",&n);
	ptr=(int*)malloc(n*sizeof(n));
	if(ptr==NULL)
	{
		printf("Error insufficient memory");
		exit(0);
	}
	else
	{
		printf("Enter elements: ");
		for(i=0;i<n-1;i++)
		{
			scanf("%d",ptr+i);
		}
	    printf("Entered elements are: ");
		for(i=0;i<n-1;i++)
		{
			printf("%d",*(ptr+i));
        }
		  free(ptr);
	}   
    return 0;
}


// bubble sort using calloc
#include<stdio.h>
#include<stdlib.h>

void bubble_sort(int x, int *ptr);

int main()
{
    int n,i,*arr;
    printf("Enter the size of array: ");
    scanf("%d", &n);
    arr = (int*)calloc(n, sizeof(int));  

    printf("Enter the elements of array:\n");
    for (i=0;i<n;i++)  
    {
        scanf("%d", (arr+i));
    }

    bubble_sort(n,arr);

    printf("After sorting: ");
    for (i=0;i<n;i++) 
    {
        printf("%d ", *(arr+i));
    }
    printf("\n");

    free(arr); 
    return 0;
}

void bubble_sort(int x, int *ptr)
{
    int i,j,t;
    for (i =0; i<x-1;i++) 
    {
        for (j=0; j<x-i-1;j++) 
        {
            if (*(ptr+j) > *(ptr+j+1))
            {
                t = *(ptr+j);
                *(ptr+j) = *(ptr+i+1);
                *(ptr+j+1) = t;
            }
        }
    }
}

   
