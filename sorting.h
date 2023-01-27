// selection sort function module in C

void display(int a[], int n) {

  int i;

  for (i = 0; i < n; i++)
    printf("%5d", a[i]);
  printf("\n");
}

void selectionSort(int data[], int length) {
  int i, j, m, mi;

  display(data, length);
}

void insertion(int a[], int n) {}

void swap(int *a, int *b) {
  int temp;
  temp = *a;
  *a = *b;
  *b = temp;
}

int Isprime(int *a){
  int pri = 1;
  for(int i = 2;i<100;i++){
    if(*a % i == 0){
      if(i != *a){
        pri = 0;
      }
    }
  }
  if(*a == 1) pri = 0;
  return pri;
}

void bubbleSort(int a[], int n) {

  int i, j;
  int sorted;
  // how may pair to compare?
  for (i = 0; i < n - 1; i++) {
    printf("ROUND %d\n",i);
    sorted = 0;
    for (j = 0; j < n - 1 - i; j++) {
      if (a[j] > a[j+1]) {
        swap(&a[j], &a[j + 1]);
        sorted = 1;
      }
      display(a,n);
    }
    if(!sorted) break;  
  }
}
