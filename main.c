#include <stdio.h>
#define D 2.54
#define P 2.32166

int task1();
int task2();
int task3();
int main()
{
    int a = 3;
    int *p = &a;
    *p = 12;
    printf("%d", a);
    return 0;
}

int task1() {
    int num1, num2;
    puts("введите число");
    scanf("%d", &num1);
    printf("Введено число %d\n", num1);
    puts("введите второе число");
    scanf("%d", &num2);
    printf("Введено число %d\n", num2);
    printf("Сумма: %d\nРазность: %d\nПроизведение: %d\nЧастное: %.3f\nОстаток от деления: %d\n", num1+num2, num1-num2, num1*num2, num1*1.0/num2, num1%num2);

    return 0;
}

int task2() {
    int dym;
    float result_d, result_p;
    printf("Введите количество дюймов: ");
    scanf("%d", &dym);
    result_d = D * dym;
    result_p = P * dym;
    printf ("%d английских дюймов - это %.1f см\n%d испанских дюймов - это %.1f см\n", dym, result_d, dym, result_p);

    return 0;
}

int task3() {
    int a, b;
    printf("Введите a: ");
    scanf("%d", &a);
    printf("Введите b: ");
    scanf("%d", &b);
    printf("_____________________________________\n|%11s|%11s|%11s|\n-------------------------------------\n|%-d * %-4d|%-5d+%-5d|%-4d - %-4d|\n-------------------------------------\n|%11d|%11d|%11d|\n","a*b", "a+b", "a-b", a, b, a, b, a, b, a+b, a*b, a-b);

    return 0;
}
