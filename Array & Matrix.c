//reverse elements of an array
#include<stdio.h>
int main(){
	int a[50],t,i,j,n;
	printf("enter size of array: \n");
	scanf("%d",&n);
	printf("enter elements of 'a' array: \n");
	for(i=0;i<n;i++)
	{
		scanf("%d",&a[i]);
	}
	printf("reversed array is: ");
	for(i=0,j=n-1;i<j;i++, j--)
	{
		t=a[i];
		a[i]=a[j];
		a[j]=t;
	}
	
	for(i=0;i<n;i++)
	{
		printf(" %d",a[i]);
	}
	return 0;
}


//finding an element of array using key(s==key)
#include<stdio.h>
int main(){
	int a[50],t,i,j,n;
	printf("enter size of array: \n");
	scanf("%d",&n);
	printf("enter elements of 'a' array: \n");
	for(i=0;i<n;i++)
	{
		scanf("%d",&a[i]);
	}
	printf("reversed array is: ");
	for(i=0,j=n-1;i<j;i++, j--)
	{
		t=a[i];
		a[i]=a[j];
		a[j]=t;
	}
	
	for(i=0;i<n;i++)
	{
		printf(" %d",a[i]);
	}
	return 0;
}


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

// matrix using 2d array
#include <stdio.h>

int main() {
    int i, j, r, c, a[50][50];

    printf("Enter the number of rows and columns: ");
    scanf("%d%d", &r, &c);

    printf("Enter the elements of the matrix:\n");
    for(i = 0; i < r; i++) {
        for(j = 0; j < c; j++) {
            scanf("%d", &a[i][j]);
        }
    }

    printf("Entered matrix is:\n");
    for(i = 0; i < r; i++) {
        for(j = 0; j < c; j++) {
            printf("%d ", a[i][j]);
        }
        printf("\n");
    }

    return 0;
}


// sum of diagonal elements of array matrix
#include <stdio.h>
int main() {
    int i, j, r, c, a[50][50],sum=0;

    printf("Enter the number of rows and columns: ");
    scanf("%d%d", &r, &c);

    printf("Enter the elements of the matrix:\n");
    for(i = 0; i < r; i++) {
        for(j = 0; j < c; j++) {
            scanf("%d", &a[i][j]);
        }
    }
    for(i = 0; i < r; i++) {
        for(j = 0; j < c; j++) 
        {
        	if (i==j)
        	{
        		sum=sum+a[i][j];
			}
		}
        
    }
printf("sum of diagonal elements is = %d",sum);
return 0;
}

//transpose of matrix
#include <stdio.h>
int main() {
    int i, j, row, col, a[50][50], transpose[50][50];
    printf("Enter number of rows: ");
    scanf("%d", &row);
    printf("Enter number of columns: ");
    scanf("%d", &col);
    printf("Enter elements of the matrix:\n");
    for (i = 0; i < row; i++) {
        for (j = 0; j < col; j++) {
            scanf("%d", &a[i][j]);
        }
    }
    for (i = 0; i < row; i++) {
        for (j = 0; j < col; j++) {
            transpose[j][i] = a[i][j];
        }
    }
    printf("Original matrix:\n");
    for (i = 0; i < row; i++) {
        for (j = 0; j < col; j++) {
            printf("%d ", a[i][j]);
        }
        printf("\n");
    }
    printf("Transpose of the matrix:\n");
    for (i = 0; i < col; i++) {
        for (j = 0; j < row; j++) {
            printf("%d ", transpose[i][j]);
        }
        printf("\n");
    }

    return 0;
}

//MATRIX ADDITION
#include <stdio.h>

int main() {
    int rows1, cols1, rows2, cols2;


    printf("Enter the number of rows for the first matrix: ");
    scanf("%d", &rows1);
    printf("Enter the number of columns for the first matrix: ");
    scanf("%d", &cols1);

    printf("Enter the number of rows for the second matrix: ");
    scanf("%d", &rows2);
    printf("Enter the number of columns for the second matrix: ");
    scanf("%d", &cols2);


    if (cols1 != rows2) {
        printf("Matrix multiplication not possible as number of columns of the first matrix must be equal to the number of rows of the second matrix.\n");
        return 1;
    }


    int matrix1[rows1][cols1], matrix2[rows2][cols2], result[rows1][cols2];


    for (int i = 0; i < rows1; i++) {
        for (int j = 0; j < cols2; j++) {
            result[i][j] = 0;
        }
    }


    printf("Enter elements of the first matrix:\n");
    for (int i = 0; i < rows1; i++) {
        for (int j = 0; j < cols1; j++) {
            printf("Enter element [%d][%d]: ", i + 1, j + 1);
            scanf("%d", &matrix1[i][j]);
        }
    }


    printf("Enter elements of the second matrix:\n");
    for (int i = 0; i < rows2; i++) {
        for (int j = 0; j < cols2; j++) {
            printf("Enter element [%d][%d]: ", i + 1, j + 1);
            scanf("%d", &matrix2[i][j]);
        }
    }


    for (int i = 0; i < rows1; i++) {
        for (int j = 0; j < cols2; j++) {
                result[i][j] = matrix1[i][j] + matrix2[i][j];
        }
    }

 
    printf("\nResultant matrix after addition:\n");
    for (int i = 0; i < rows1; i++) {
        for (int j = 0; j < cols2; j++) {
            printf("%d ", result[i][j]);
        }
        printf("\n");
    }

    return 0;
}


//MATRIX MULTIPLICATION
#include <stdio.h>

int main() {
    int rows1, cols1, rows2, cols2;


    printf("Enter the number of rows for the first matrix: ");
    scanf("%d", &rows1);
    printf("Enter the number of columns for the first matrix: ");
    scanf("%d", &cols1);

    printf("Enter the number of rows for the second matrix: ");
    scanf("%d", &rows2);
    printf("Enter the number of columns for the second matrix: ");
    scanf("%d", &cols2);


    if (cols1 != rows2) {
        printf("Matrix multiplication not possible as number of columns of the first matrix must be equal to the number of rows of the second matrix.\n");
        return 1;
    }


    int matrix1[rows1][cols1], matrix2[rows2][cols2], result[rows1][cols2];


    for (int i = 0; i < rows1; i++) {
        for (int j = 0; j < cols2; j++) {
            result[i][j] = 0;
        }
    }


    printf("Enter elements of the first matrix:\n");
    for (int i = 0; i < rows1; i++) {
        for (int j = 0; j < cols1; j++) {
            printf("Enter element [%d][%d]: ", i + 1, j + 1);
            scanf("%d", &matrix1[i][j]);
        }
    }


    printf("Enter elements of the second matrix:\n");
    for (int i = 0; i < rows2; i++) {
        for (int j = 0; j < cols2; j++) {
            printf("Enter element [%d][%d]: ", i + 1, j + 1);
            scanf("%d", &matrix2[i][j]);
        }
    }


    for (int i = 0; i < rows1; i++) {
        for (int j = 0; j < cols2; j++) {
            for (int k = 0; k < cols1; k++) {
                result[i][j] += matrix1[i][k] * matrix2[k][j];
            }
        }
    }

 
    printf("\nResultant matrix after multiplication:\n");
    for (int i = 0; i < rows1; i++) {
        for (int j = 0; j < cols2; j++) {
            printf("%d ", result[i][j]);
        }
        printf("\n");
    }

    return 0;
}