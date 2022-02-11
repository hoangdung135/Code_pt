#include <stdio.h>
#include <math.h>
int main() {
		int n , dem = 0;
        scanf("%d", &n);
        while(n >= 10) {
			n/= 10;
			dem++;
			}
        printf("%d", dem+1);
    }

