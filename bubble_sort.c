#include<stdio.h>

int main()
{
       int array[100], n, r, d, swap;

       printf("Enter number of elements\n");
       scanf("%d", &n);

       printf("Enter %d intigers\n", n);

     for (r = 0; r < n; r++)
       
     scanf("%d", &array[r]);
       
    for (r = 0 ; r < n - 1 ; r++)
      {
    for(d = 0 ; d < n - r -1 ; d++)
      {
	
    if(array[d] > array[d+1])
	{
	  swap = array[d];
	  array[d] = array[d+1];
	  array[d+1] = swap;
	}
    }
  }
  printf("Sorted list in assending order : \n");

  for ( r = 0 ; r < n ; r++)
    
    printf("%d\n", array[r]);
    

    return 0;

  }
    
