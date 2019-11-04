#include <stdio.h>

int bar(){
	printf("This code never gets executed.\n");
	return 0;
}

int foo(){
    char buff[128];
    printf("Enter your name:\n");
    fgets(buff,256,stdin);
    return 0;
}

int main(){
	foo();
	return 0;
}


