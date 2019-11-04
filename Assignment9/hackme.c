#include <stdio.h>

int foo(){
    char buff[128];
    char fill='_';
    char i;
    char n=55;
    printf("What is your favorite color? \n");
    fgets(buff,256,stdin);
    for(i=0;i<n;i++){
        printf("%c",fill);
    }
    printf("\n");
    printf("          YOUR FAVORITE COLOR IS %s", buff);
    printf("\n");
    for(i=0;i<n;i++){
        printf("%c",fill);
    }
    printf("\n");
    return 0;
}

int main(){
	foo();
	return 0;
}


