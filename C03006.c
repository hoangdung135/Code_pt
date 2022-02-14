#include <stdio.h>
int main() {
    int t = 0 , z ;
    int var = 0;
    scanf("%d", &t);
    for ( z = 1 ; z <= t ; z++) {
        int a[10006][2] = {};
        int n = 0 , i;
        scanf("%d", &n);
        printf("Test %d: ", z);
        int k = 0;
        for( i = 2; i <= n; i++) {
            while (n % i == 0) {
                a[k][0] = i;
                a[k][1]++;
                n /= i;
            }
            if(a[k][1] != 0) k++;
        }
        for( i = 0; i < k; i++) {
            printf("%d(%d) ", a[i][0], a[i][1]);
        }
        printf("\n");
    }
}
