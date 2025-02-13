#include <stdio.h>
int main(){
    char name[100];
    int age;
    char hobby[100];
    printf("Enter your name: ");
    scanf("%s", &name);
    printf("Enter your age: ");
    scanf("%d", &age);
    printf("Enter your favourite hobby: ");
    scanf("%s", &hobby);
    printf("\nName: %s\n", name);
    printf("Age: %d\n", age);
    printf("Favourite hobby: %s\n", hobby);
    return 0;

}