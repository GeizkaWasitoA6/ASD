#include <stdio.h>
#include <stdlib.h>

/////Exchange & Bubble sort challange/////

//Bubble sort//
/*void bubbleSort(int ang[], int n){
  int i, j, tmp;
  for(i = 0; i < n; i++){
    for(j=0; j < n-i-1; j ++){
      if(ang[j] > ang[j+1]){
        tmp = ang[j];
        ang[j] = ang[j+1];
        ang[j+1] = tmp;
      }
    }
  }
}
int main() {
  int angka[100], n, i, j;
  printf("Masukkan banyak data: ");
  scanf("%d", &n);
  printf("Masukkan data: \n");
  for(i = 0; i < n; i++){
    scanf("%d", &angka[i]);
  }
  bubbleSort(angka, n);
  printf("Hasil setelah disorting:\n");
  for(i = 0; i < n; i++){
    printf("%d ", angka[i]);
  }
  printf("\n");
}*/
//Exchange/Quick sort//
/*void quickSort( int[], int, int);
int partition( int[], int, int);

int total;
void main(){
     int total;
     int a[100];
     int i;
     printf("masukkan banyak data = ");scanf("%d",&total);
     for(i=0;i<total;i++){
       printf("Data ke- %d = ",i+1);scanf("%d",&a[i]);
     }
    
     printf("\n\n Sebelum disorting:  ");
     for(i = 0; i < total; ++i){
          printf(" %d ", a[i]);
     }
     quickSort( a, 0, total-1);
     printf("\n\n Sesudah disorting: ");
     for(i = 0; i < total; ++i){
          printf(" %d ", a[i]);
     }
     printf("\n");
     }

void quickSort( int a[], int l, int r){
    int j;
    if( l < r ){
       j = partition( a, l, r);
       quickSort( a, l, j-1);
       quickSort( a, j+1, r);
    }

}

int partition( int a[], int l, int r) {
     int pivot, i, j, t;
     pivot = a[l];
     i = l; j = r+1;

     while( 1){
        do ++i; while( a[i] <= pivot && i <= r );
        do --j; while( a[j] > pivot );
        if( i >= j ) break;
        t = a[i]; a[i] = a[j]; a[j] = t;
     }
     t = a[l]; a[l] = a[j]; a[j] = t;
     return j;
}*/
