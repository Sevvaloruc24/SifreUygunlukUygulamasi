#include <stdio.h>
#include <ctype.h>
#include <string.h>

// �ifrenin uygunlu�unu kontrol eden fonksiyon
int sifreyiKontrolEt(char sifre[]) {
    int uzunluk = strlen(sifre);
    int buyukHarfVar = 0, kucukHarfVar = 0, rakamVar = 0;
    int i;

    // �ifrenin uzunlu�unu kontrol et
    if (uzunluk < 8) {
        printf("Sifre en az 8 karakter uzunlugunda olmalidir.\n");
        return 0; // �ifre k�sa
    }

    // �ifreyi kontrol et
    for (i = 0; i < uzunluk; i++) {
        if (isupper(sifre[i])) {
            buyukHarfVar = 1; // B�y�k harf var
        }
        if (islower(sifre[i])) {
            kucukHarfVar = 1; // K���k harf var
        }
        if (isdigit(sifre[i])) {
            rakamVar = 1; // Rakam var
        }
    }

    // �ifrede gerekli karakterler var m�?
    if (buyukHarfVar && kucukHarfVar && rakamVar) {
        return 1; // �ifre uygun
    } else {
        printf("Sifre en az bir buyuk harf, bir kucuk harf ve bir rakam icermelidir.\n");
        return 0; // �ifre uygun de�il
    }
}

int main() {
    char sifre[100];

    // Kullan�c�dan �ifre al
    printf("Sifreyi giriniz: ");
    scanf("%s", sifre);

    // �ifreyi kontrol et
    if (sifreyiKontrolEt(sifre)) {
        printf("Sifre uygundur.\n");
    } else {
        printf("Sifre uygun degildir.\n");
    }

    return 0;
}


