#include<stdio.h>
#include<conio.h>

typedef struct mahasiswa {char NIM[9]; char NAMA[30]; float IPK;};
void main()

{
    struct mahasiswa mhs;
    clrscr();
    printf("NIM: ");
    scanf("%s",&mhs.NIM);
    printf("NAMA: ");
    scanf("%s",&mhs.NAMA);
    printf("IPK: ");
    scanf("%f",&mhs.IPK);
    printf("Data anda \n");
    printf("NIM: %s\n",mhs.NIM);
    printf("NAMA: %s\n",mhs.NAMA);
    printf("IPK: %f\n",mhs.IPK);
    getch();
}