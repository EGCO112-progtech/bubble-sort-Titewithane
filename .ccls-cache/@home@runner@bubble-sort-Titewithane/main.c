#include <stdio.h>
#include <stdlib.h>
#include "sorting.h"

int Isprime(int *a){
  int pri = 1;
  for(int i = 2;i<*a;i++){
    if(*a % i == 0) pri = 0;
  }
  if(*a == 1) pri = 0;
  return pri;
}

int main(int argc, char *argv[]) {
  int *a,N,*prime,count = 0;
  N = argc - 1;
  prime = (int *)malloc(sizeof(int) * N);
  a = (int *)malloc(sizeof(int) * N);
  for(int i = 0;i<N;i++){
    a[i] = atoi(argv[i+1]);
    if(Isprime(&a[i])){
      *(prime+count) = *(a+i);
      count++;
    }
  }
  if(count == 0) printf("No prime\n");
  
  display(prime,count);
  bubbleSort(prime,count); 
   //insertion(a,N);

  // selectionSort(a,N);
  display(prime,count);
  
 return 0;
}

