#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <windows.h>

int main()
{
    SetConsoleOutputCP(CP_UTF8);

    double sum;    
    double stav;    
    double dox;  

    printf("Введите сумму вклада (руб.): ");
    scanf("%lf", &sum);

    printf("Введите процентную ставку (%%): ");
    scanf("%lf", &stav);

    dox = sum * stav / 100.0;

    printf("\n--- Расчёт дохода по вкладу ---\n");
    printf("Сумма вклада:       %.2f руб.\n", sum);
    printf("Процентная ставка:  %.2f %%\n", stav);
    printf("--------------------------------\n");
    printf("Доход:              %.2f руб.\n", dox);
    printf("Итоговая сумма:     %.2f руб.\n", sum + dox);

    return 0;
}