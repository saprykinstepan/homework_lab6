#include <stdio.h>
#include <locale.h>

int main() {
    setlocale(LC_CTYPE, "RUS");
    int rubl, kop;

    printf("¬ведите количество копеек: ");
    scanf("%d", &kop);

    rubl = kop / 100;
    kop = kop % 100;

    {
    if (rubl % 10 == 1)
        printf("%d рубль и ", rubl);
    else if (rubl % 10 >= 2 && rubl % 10 <= 4)
        printf("%d рубл€ и ", rubl);
    else
        printf("%d рублей и ", rubl);
    }
    {
    if (kop % 10 == 1)
        printf("%d копейка", kop);
    else if (kop % 10 >= 2 && kop % 10 <= 4)
        printf("%d копейки", kop);
    else
        printf("%d копеек", kop);
    }

    printf("\n");

    return 0;
}