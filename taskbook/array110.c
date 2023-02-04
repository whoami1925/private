//Дан целочисленный массив размера N. Продублировать в нем все четные числа.
#include <stdio.h>
#define LEN 100

int main() {
    int v[LEN];
    int n;
    v[0] = 1;
    scanf("%d", &n);
    int i = 1;
    while (i < n) {
        v[i] = v[i-1] + 1;
        if (v[i] % 2 == 0){
        printf("%d %d;", v[i], v[i]);

        }
        i = i + 1;

    }
    return 0;
}