//Array 71.Дан массив размера N. Поменять порядок его элементов на обратный.
#include <stdio.h>
#define LEN 1000

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