#include <stdio.h>
#include <math.h>
int main() {
		int a ,b , i ;
		long long tong = 0;
        scanf("%d%d", &a, &b);
        if ( a <= b )
        {
    	    for (i = a;i <= b; i++ )
            {
         	    tong += i;
            }     	
            printf("%lld", tong);
        }
        else if ( a >= b )
        {
        	for (i = b;i <= a; i++ )
            {
         	    tong += i;
            }     	
            printf("%lld", tong);
        }
    }
