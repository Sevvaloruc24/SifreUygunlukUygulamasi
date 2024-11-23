#include <stdio.h>
#include <ctype.h>
#include <string.h>

// Þifrenin uygunluðunu kontrol eden fonksiyon
int sifreyiKontrolEt(char sifre[]) {
    int uzunluk = strlen(sifre);
    int buyukHarfVar = 0, kucukHarfVar = 0, rakamVar = 0;
    int i;

    // Þifrenin uzunluðunu kontrol et
    if (uzunluk < 8) {
        printf("Sifre en az 8 karakter uzunlugunda olmalidir.\n");
        return 0; // Þifre kýsa
    }

    // Þifreyi kontrol et
    for (i = 0; i < uzunluk; i++) {
        if (isupper(sifre[i])) {
            buyukHarfVar = 1; // Büyük harf var
        }
        if (islower(sifre[i])) {
            kucukHarfVar = 1; // Küçük harf var
        }
        if (isdigit(sifre[i])) {
            rakamVar = 1; // Rakam var
        }
    }

    // Þifrede gerekli karakterler var mý?
    if (buyukHarfVar && kucukHarfVar && rakamVar) {
        return 1; // Þifre uygun
    } else {
        printf("Sifre en az bir buyuk harf, bir kucuk harf ve bir rakam icermelidir.\n");
        return 0; // Þifre uygun deðil
    }
}

int main() {
    char sifre[100];

    // Kullanýcýdan þifre al
    printf("Sifreyi giriniz: ");
    scanf("%s", sifre);

    // Þifreyi kontrol et
    if (sifreyiKontrolEt(sifre)) {
        printf("Sifre uygundur.\n");
    } else {
        printf("Sifre uygun degildir.\n");
    }

    return 0;
}


