#include <stdio.h>

int main(){
   char buff[255]="My voice is my passport. Verify me.";
   int i,x;
   int d=0x3C;
   int s=0xA5;

   for(i=0;i<255;i++){
      x=buff[i]*2+s*3;
      d=(d^x)%256;
      s=(s+x)%512;
   }

   printf("0x%x\n",d);
   return 0;
}


