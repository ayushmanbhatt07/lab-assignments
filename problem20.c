#include<stdio.h>
int main()
{
    char ch; 
    int a,b;
printf("enter the two nos ");
scanf("%d%d",&a,&b);
printf("enter the operator ");
scanf("%c",&ch);
    switch (ch)
    {
    case '+':
    {
int sum=a+b;
printf("the sum is %d\n\n",sum);
break;


    } 
    case '-':
    {
        int diff=a-b;
        printf("the difference is %d\n",diff);
        break;
    }
    case '*':
    {
        int mult=a*b;
        printf("the product is %d\n",mult);
        break;
    }
    case '/':
    {
        float div=a/b;
        printf("the division is %f\n",div);
        break;
    }
    default:
    {
        printf("the operator is invalid");
        break;
    }
    }
    return 0;
}