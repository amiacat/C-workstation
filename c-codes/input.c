#include <stdio.h>

int main(){
    char* name[10];

    printf("Type your name: ");

    fgets(name, 10, stdin);
    printf("\nYour name is %s", name);
    
    return 0;
}