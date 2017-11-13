#include<stdio.h>

int main()
{

       int r, b, s, temp, a[20];

       printf("Enter total elements: ");
       scanf("%d", &s);

       printf("Enter %d elements: ", s);
 
       for(r = 0; r < s; r++)
	 scanf("%d", &a[r]);

       for(r = 1; r < s; r++)
         {
	   temp = a[r];
	   b = r - 1;

	   while((temp<a[b])&&(b>=0))
	     {
	       a[b+1] = a[b];
	       b = b-1;
	     }
	   a[r+1] = temp;
	 }
	   printf("After sorting :");

	   for(r = 0; r < s; r++)
	     printf("%d",a[r]);

	   return 0;
}
	       
	   
