//Дан массив размера N. Вывести его элементы в обратном порядке.
#include <stdio.h>
#define LEN 100

int main() {
    int v[LEN];
    int n;
    scanf("%d", &n);
    int i = 0;
    v[n]= n;
    while (i < n) {
        v[i] = v[n]-i;
        printf("%d;", v[i]);
        i = i + 1;
    }
    return 0;
}