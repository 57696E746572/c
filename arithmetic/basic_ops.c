#include <stdio.h>

int main() {
    int a = 15;
    int b = 5;
    int x = 10;
    int result1 = a + b;
    int result2 = a - b;
    int result3 = a * x;
    int result4 = a / b;
    int result5 = a % b;
    printf("%d + %d = %d\n", a, b, result1);
    printf("%d - %d = %d\n", a, b, result2);
    printf("%d * %d = %d\n", a, x, result3);
    printf("%d / %d = %d\n", a, b, result4);
    printf("%d %% %d = %d\n", a, b, result5);
  
    return 0;
}
