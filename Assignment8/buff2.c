#include <stdio.h>

int main(){
    char buff[600];
    printf("Enter some string:\n");
    gets(buff);
    printf("You entered: %s", buff);
    return 0;
}
