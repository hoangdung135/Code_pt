#include <stdio.h>
#include <math.h>
int main() {
	int t = 0;
	scanf("%d", &t);
	while(t--)
	{
		int n;
        scanf("%d", &n);
        unsigned int i = 2;
        while(n > 1) {
			if(n % i == 0) {
				printf("%u", i);
				if(n != i) {
					printf(" ");
				}
				n /= i;
			} else {
				i++;}
        }
        printf("\n");
    }
}
