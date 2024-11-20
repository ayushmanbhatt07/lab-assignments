#include <stdio.h>
#include <string.h>

int main() {
    char original[100], reversed[100];
    char *ptr1, *ptr2;

    printf("Enter a string: ");
    fgets(original, sizeof(original), stdin);
    original[strcspn(original, "\n")] = '\0';

    ptr1 = original + strlen(original) - 1;
    ptr2 = reversed;

    while (ptr1 >= original) {
        *ptr2 = *ptr1;
        ptr1--;
        ptr2++;
    }

    *ptr2 = '\0';

    printf("Reversed string: %s\n", reversed);

    return 0;
}
