#include <stdio.h>

int main(){
        int n;
        printf("Type an integer: ");
        scanf("%d",&n);
	if((n%2)==0){
		printf("Your number was even.\n");
	}
	else{
		printf("Your number was odd.\n");
	}
	return 0;
}
