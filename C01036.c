#include <stdio.h>
#include <math.h>
int main() {
		int n  , step;
		long long s = 1;
        scanf("%d", &n);
    	for (;n > 0;)
        {
        	step = n % 10;
        	s *= step;
        	n = n/10;
        }     	
    printf("%lld", s);
    }

