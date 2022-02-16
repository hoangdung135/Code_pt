#include <stdio.h>
#include <math.h>
int check( long long n){
	while(n){
		long long r = n % 10;
		if( r % 2 == 1)
		return 1;
		n /= 10;
	}
	return 0;
}
int main() {
	int t = 0;
	scanf("%d", &t);
	while(t--)
	{
		long long n;
        scanf("%lld", &n);
        if ( check(n))
        printf("NO\n");
        else
        printf("YES\n");
    }
}
