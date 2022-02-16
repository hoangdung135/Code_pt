#include <stdio.h>
#include <math.h>
int main() {
	int t = 0;
	scanf("%d", &t);
	while(t--)
	{
		long long a , b;
        scanf("%lld%lld", &a , &b);
        long long bc = a * b;
        while ( a != b){
        	if( a > b ){
        		a = a - b;
        		}
        	else b = b - a;
        }
    printf("%lld %lld\n", bc / b , b );     	
    }
}
