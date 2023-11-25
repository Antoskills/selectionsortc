//selection sort
#include <stdio.h>
int main()
{
  //value insert
  int ar[20],n,i,j,temp;
  printf("Enter the number of elements:");
  scanf( "%d",&n);
  printf( "Enter the elements:");
  for(i=0;i<n;i++)
    scanf("%d",&ar[i]);
  
  //logic
  for(i=0;i<n-1;i++)
    {
      int min=i;
      for(j=i+1;j<n;j++)
        {
          if(ar[j]<ar[min])
            min=j;
          if(min>=j)
          {
            temp=ar[i];
            ar[i]=ar[min];
            ar[min]=temp;
          }
        }
    }
  //sidplay
  printf("Sorted array is: \n");  
  for(i=0;i<n;i++)
    printf("%d \t",ar[i]);
  return 0;

  return 0;
}