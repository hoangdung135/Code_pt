#include <stdio.h>
#include <math.h>
int main() {
		int n , sodau , step ;
        scanf("%d", &n);
        int socuoi = n % 10;
        while(n > 0) {
			sodau = n % 10;
			n /= 10;
			}
        printf("%d %d", sodau , socuoi);
    }

