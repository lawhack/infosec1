#include <stdio.h>
#include <stdbool.h>

bool fun(int a){
	int i;
	int f=0;
	for(i=2;i<a;i++){
		if((a%i)==0){
			f+=1;
		}
	}
	if(f==0){
		return true;
	}	
	return false;
}

int main(){
	int i;
	int result=0;
	for(i=0;i<100;i+=1){
		if(fun(i)){
			result+=i;
		}
	}
	printf("%d\n",result);
	return 0;
}
