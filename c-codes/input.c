#include <stdio.h>

int main(){
    int age;
    char name[10];

    printf("What is your age?: ");
    scanf("%d", &age);
    printf("\nAnd what is your name?: ");
    fflush(stdin);
    fgets(name, 10, stdin);
    printf("Your age is %d, and your name is %s \n", age, name);
    
    return 0;
}