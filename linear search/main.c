

#include <stdio.h>

// linearSearch YÖNTEMİYLE ARANILAN ELEMANIN DİZİDE OLUP OLMADIĞININ ARANMASI

int linearSearch(int dizi[], int boyut, int aranan) {
    int k;
    for ( k=0; k<boyut; k++) {
        if (dizi[k] == aranan) {
            return 1;
        }
    }
    return 0;
}

int main() {
    
    int boyut;
    printf("Lutfen dizinin boyutunu giriniz: ");
    scanf("%d", &boyut);
    printf("\n");

    int dizi[boyut];
    int a;
    for ( a=0; a<boyut; a++) {
        printf("Lutfen dizinin %d. elemanini giriniz: ", a+1);
        scanf("%d", &dizi[a]);
    }

    printf("\n**********************\n\n");
    int sonuc = 0;
    int aranan;

    while (!sonuc) {
        printf("Lutfen aramak istediginiz elemani giriniz: ");
        scanf("%d", &aranan);
        printf("\n**********************\n\n");
        sonuc = linearSearch(dizi, boyut, aranan);
        if (sonuc) {
            printf("%d BU DIZININ ICINDE VAR!\n", aranan);
        } else {
            printf("%d BU DIZININ ICINDE YOK! Lutfen tekrar deneyin.\n", aranan);
            printf("\n**********************\n\n");
            
        }
    }

    

    return 0;
}
