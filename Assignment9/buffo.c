#include <stdio.h>

int foo(){
    char buff[128];
    char letter='!';
    int i;
    printf("Enter your name:\n");
    fgets(buff,256,stdin);
    printf("Hello, %sThat's a great name", buff);
    for(i=0;i<10;i++){
        printf("%c",letter);
    }
    printf("\n");
    return 0;
}

int main(){
	foo();
	return 0;
}


