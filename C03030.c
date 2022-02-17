#include <stdio.h>

int Pow10(int n) {
    int res = 1 , i;
    for( i = 0; i < n; i++) res *= 10;
    return res;
}

int check(int n) {
    int var = 0;
    while (n != 0) {
        var = n % 10;
        n /= 10;
        if(var < (n % 10)) return 0;
    }
    return 1;
}
int main() {
    int t = 0;
    scanf("%d", &t);
    while (t--) {
        int a = 0 , i;
        scanf("%d", &a);
        int start = Pow10(a - 1);
        int end = Pow10(a);
        for( i = start; i < end; i++) {
            if(check(i)) printf("%d ", i);
        }
        printf("\n");
    }
    return 0;
}
