#include <stdio.h>
#include <conio.h>

int main(){
    int a, b, n;
    printf("Input a\n");
    scanf_s("%d", &a);
    if (a >= 10 || a <= -10) {
        while (a != 0) {
            n = a % 10;
            b = a / 10;
            while (b != 0) {
                if (n != b % 10)
                    b = b / 10;
                else {
                    printf("yes\n");
                    return 0;
                }
            }
            a = a / 10;
        }
        printf("no");
    }
    else printf("error");
    return 0;
}
