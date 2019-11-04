#include <stdio.h>

int foo(int x) {
   return x-0xFACE;

}

int main(){
	int a=0xABADD00D;
	int b=0xC0DEBABE;
	int c=0;
	c=foo(a);
	c=c+foo(a);
	printf("Result: %x\n",c);
	return 0;
}
