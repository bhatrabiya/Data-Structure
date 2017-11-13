#include<stdio.h>
#define size 5

void create(int[size][size]);
void disply(int[size][size]);
void array_add(int[size][size],int[size][size],int[size][size]);
void array_sub(int[size][size],int[size][size],int[size][size]);
void array_mul(int[size][size],int[size][size],int[size][size]);
void transpose(int[size][size],int[size][size]);

void main()
{
  int arr1[size][size],arr2[size][size],arr3[size][size],arr4[size][size],arr5[size][size];

  printf("Enter elements of array1");
   create(arr1);
   
  printf("Enter elements of array2");
  create(arr2);

  printf("First array");
  display(arr1);
  printf("Second array");
  display(arr2);

  array_add(arr1,arr2,arr3);
  printf("After addition");
  display(arr3);

  array_sub(arr1,arr2,arr3);
  printf("After subtraction");
  display(arr3);

  array_mul(arr1,arr2,arr4);
  printf("After multipulcation");
  display(arr4);

  transpose(arr1,arr5);
  printf("Transpose of first matrix");
  display(arr5);
}
    
void create(int arr[size][size){
    int i,j;
    for(i=0;i<size;i++)
      {
	for(j=0;j<size;j++)
	  {
	    printf("Enter the elements");
	    scanf("%d",&arr[i][j]);
	  }
      }
    printf("\n");
  }
  void display(int arr[size][size]){
    int i,j;
    for(i=0;i<size;i++)
      {
	for(j=0;j<size;j++)
	  {
	    printf("%d\t",arr[i][j]);
	    printf("\n");
	  }
      }
    
    void array_add(int arr1[size][size],arr2[size[size],arr3[size][size])
		   {
		     int i,j;
		     for( i = 0;i<size;i++)
		       {
			 for(j=0;j<size;j++)
			   {
			     arr3[i][j] = arr1[i][j]+arr2[i][j];
			   }
		       }

   
    void array_sub(int arr1[size][size],arr2[size[size],arr3[size][size])
		   {
		     int i,j;
		     for( i = 0;i<size;i++)
		       {
			 for(j=0;j<size;j++)
			   {
			     arr3[i][j] = arr1[i][j]-arr2[i][j];
			   }
		       }
   
    void array_mul(int arr1[size][size],arr2[size[size],arr3[size][size])
		   {
		     int i,j,k;
		     for( k = 0;i<size;k++)
		       {
			 for(i=0;i<size;i++)
			   {
			     arr3[k][j] =0;
			     for(j=0;j<size;j++){
			     arr3[k][i]+ = arr1[k][j]+arr2[j][i];
			     }
			   }
		       }
		   }
		   
void transpose(int arr1[size][size],arr2[size][size]){
    int i,j;
    for(i=0;i<size;i++)
      {
	for(j=0;j<size;j++)
	  {
	    arr2[i][j] = arr1[j][i];
	  }
      }
}
		   
