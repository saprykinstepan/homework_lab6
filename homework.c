#include <stdio.h>
#include <locale.h>

int main() {
    setlocale(LC_CTYPE, "RUS");
    int rubl, kop;

    printf("������� ���������� ������: ");
    scanf("%d", &kop);

    rubl = kop / 100;
    kop = kop % 100;

    {
    if (rubl % 10 == 1)
        printf("%d ����� � ", rubl);
    else if (rubl % 10 >= 2 && rubl % 10 <= 4)
        printf("%d ����� � ", rubl);
    else
        printf("%d ������ � ", rubl);
    }
    {
    if (kop % 10 == 1)
        printf("%d �������", kop);
    else if (kop % 10 >= 2 && kop % 10 <= 4)
        printf("%d �������", kop);
    else
        printf("%d ������", kop);
    }

    printf("\n");

    return 0;
}