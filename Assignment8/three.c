#include <stdio.h>
  
int main(){
	int i;
	int result=0;
	char buff[60]="Just when I thought I was out, they pull me back in.";
	for(i=0;i<60;i+=1){
		printf("%d,%c,%d\n",i,buff[i],buff[i]);
		result=result^buff[i];
	}
	printf("%d\n",result);
	return 0;
}

