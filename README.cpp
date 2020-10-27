#include <stdio.h>
#include <clocale>
#include <conio.h>

int main(){
    setlocale(0, "rus");
    int a, b, n;
    printf("Введите a\n");
    scanf_s("%d", &a);
    if (a >= 10 || a <= -10) {
        while (a != 0) {
            n = a % 10;
            b = a / 10;
            while (b != 0) {
                if (n != b % 10)
                    b = b / 10;
                else {
                    printf("Есть\n");
                    return 0;
                }
            }
            a = a / 10;
        }
        printf("нету");
    }
    else printf("Ошибка ввода");
    return 0;
}
