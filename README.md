# homework_lab6
## Условие задачи
<img width="817" height="79" alt="image" src="https://github.com/user-attachments/assets/32335829-d08e-43c7-9a0b-704cdbab13ea" />

## Код
    #include <stdio.h>
    #include <locale.h>
    
    int main() {
        setlocale(LC_CTYPE, "RUS");
        int rubl, kop;
    
        printf("Введите количество копеек: ");
        scanf("%d", &kop);
    
        rubl = kop / 100;
        kop = kop % 100;
    
        {
        if (rubl % 10 == 1)
            printf("%d рубль и ", rubl);
        else if (rubl % 10 >= 2 && rubl % 10 <= 4)
            printf("%d рубля и ", rubl);
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
## Результат работы программы
Введите количество копеек: 2146
21 рубль и 46 копеек
