#include <stdio.h>
int main() {
    int num;
    if (scanf("%u", &num) == 1) 
    scanf("%d", &num);
    printf("Hexadecimal: %x\n", num);
    printf("Octal: %o\n", num);
    return 0;
}