//Дан целочисленный массив размера N. Утроить в нем вхождения всех нечетных чисел.
#include <stdio.h>
#define LEN 100

int main() {
    int v[LEN];
    int n, x;
    v[0] = 1;
    scanf("%d", &n);
    int i = 1;
    while (i <= n) {
        v[i] = v[i-1] + 1;
        if (v[i] % 2 == 0){
            if (v[i] > v[i-1])
                x = v[i-1];
            printf("%d;", x*3);
        }
        i = i + 1;

    }
    return 0;
}