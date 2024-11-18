#include<stdio.h>
void arr()
{
    int a[10];
    int b;
for(int i=0;i<10;i++)
{
printf("enter 10 elements in array");
    scanf("%d",&a[i]);
}
b=a[0];
   for(int i=0;i<10;i++)
   {
    if(a[i]>b)
    b=a[i];
   }
   printf("highest number is %d ",b);
}
int main()
{
arr();
    return 0;
}