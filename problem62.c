#include<stdio.h>
int main()
{
   int n;
   printf("enter the number of elements ");
   scanf("%d",&n);
   int a[n],b[n];
   for(int i=0;i<n;i++)
   {
     printf("enter the array");
     scanf("%d",&a[i]);
     
   }
   for(int i=0;i<n;i++)
   {
     b[i]=a[(n-1)-i];
   }
   for(int i=0;i<n;i++)
   {
    printf("%d\t",b[i]);
   }
    return 0;
}