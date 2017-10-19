#include<stdio.h>
#include<conio.h>

int findLargest(int arr[],int size);

void main()
{
   int arr[20];
   int i,n, max=0;
   clrscr();
   printf("Enter number of elements: ");
   scanf("%d",&n);

   for(i=0; i<n; i++)
   {
      scanf("%d", &arr[i]);
   }
   max = findLargest(arr,n);
   printf("The largest element is %d", max);
   getch();
}

int findLargest(int *arr,int size)
{
   static int i=0, max=-999;
   if(i < size)
   {
      if( max < *(arr+i) )
      {
         max = *(arr+i);
      }
      i++;
      findLargest(arr,size);
   }
  return max;
}
