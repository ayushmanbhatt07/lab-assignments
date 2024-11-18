#include <stdio.h>
int main()
{
    char ch;
    printf("enter the character\n");
    scanf("%c", &ch);
    int d = ch;//get ASCII value of character
    ((d >= 97) && (d <= 122)) ? printf("the character is in small case %c ", ch) : printf("the character is not in samller case %c", ch);/*Checking whether the character is in smaller case or not */

    return 0;
}