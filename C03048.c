#include <stdio.h>
#include <math.h>
long long check(long long n){
	int c = 0 , l =0;
	while(n!= 0){
		int rec = n % 10;
		if(rec % 2 == 0){
			c++;
			n/=10;}
		else {
			l++;
			n/=10;}
		}
		if( c > l ) return 1;
		return 0;
	}
int main() {
	int t = 0;
	scanf("%d", &t);
	while(t--)
	{
		long long n;
        scanf("%lld", &n);
        if( n % 2 == 0 && check(n))
        printf("YES\n");
        else
        printf("NO\n");
    }
}
