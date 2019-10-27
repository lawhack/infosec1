#include <stdio.h>

int main(){
	int i=0;
	i=((100%3)^97)*9;
	i=i%19;
	i+=1;
	printf("%d\n",i);
	return 0;
}
