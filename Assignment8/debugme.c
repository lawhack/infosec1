#include<stdio.h>

// Code adapted from https://beginnersbook.com/2015/02/quicksort-program-in-c/

void quicksort(int number[25],int first,int last){
   int i, j, pivot, temp;

   if(first<last){
      pivot=first;
      i=first;
      j=last;

      while(i<j){
         while(number[i]<=number[pivot]&&i<last)
            i++;
         while(number[j]>number[pivot])
            j--;
         if(i<j){
            temp=number[i];
            number[i]=number[j];
            number[j]=temp;
         }
      }

      temp=number[pivot];
      number[pivot]=number[j];
      number[j]=temp;
      quicksort(number,first,j-1);
      quicksort(number,j+1,last);

   }
}

int main(){
   int i, count, number[25];

   count=23;
   for(i=0;i<count;i++){
      number[i]=(((i*3)%19)*((i*13)%7))%23;
   }

   printf("Order of unsorted elements: ");
   for(i=0;i<count;i++)
      printf(" %d",number[i]);
   printf("\n");

   quicksort(number,0,count-1);

   printf("Order of Sorted elements: ");
   for(i=0;i<count;i++)
      printf(" %d",number[i]);

   printf("\n");
   return 0;
}

