#include <stdio.h>

int main(){
	int buff[50];
	int i;
	for(i=0;i<50;i=i+1){
		buff[i]=i+1;
	}
	for(i=0;i<50;i=i+1){
		printf("%d\n",buff[i]);
	}
	return 0;
}
