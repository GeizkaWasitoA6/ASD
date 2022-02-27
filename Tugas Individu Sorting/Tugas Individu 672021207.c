#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

//Bubble Sort//
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

//Insertting Sort//
/*int main(){
int L[20],temp,i,j,n;
    printf("Masukan banyak data : ");
    scanf("%d",&n);
    printf("pengurutan berdasarkan Insertion sort \nMasukkan data %d : \n",n);
    for(i=0;i<n;i++){
        scanf("%d",&L[i]);}

    printf("\nsebelum disorting: ");

    for(i=0;i<n;i++){
            printf("%d ",L[i]);
            }

    for(i=1;i<n;i++){
        temp=L[i];
        j=i-1;
        while((temp<L[j])&&(j>=0)){
            L[j+1]=L[j];
            j=j-1;
        }
        L[j+1]=temp;
    }

    printf("\nsetelah disorting: ");
    for(i=0;i<n;i++){
            printf("%d ",L[i]);
    }
    printf("\n");
}*/

//Selection Sort//
int main(){   
	int L[20],temp,i,j,n;
    printf("masukan berapa banyak data : ");
    scanf("%d",&n);
    printf("pengurutan berdasarkan Selection sort \nmasukkan %d elements: \n",n);
    for(i=0;i<n;i++){
        scanf("%d",&L[i]);}

    printf("\nsebelum sorting: ");

    for(i=0;i<n;i++){printf("%d ",L[i]);
}

    for(i=0;i<(n-1);i++){
        for(j= i+1;j<n;j++){
            if(L[i]>L[j]){
                temp=L[i];
                L[i]=L[j];
                L[j]=temp;
            }
        }
    }
    printf("\nsetelah sorting: ");
    for(i=0;i<n;i++){printf("%d ",L[i]);
}
    printf("\n");
}
