#include <stdio.h>
#include <math.h>
int pt(long long n){
	while( n != 0){
		int r = n % 10;
		if( r % 2 == 0)
		return 0;
		else return 1;
		n /= 10;
		}
	return 1;
}
int tn(long long n){
	int rev = 0 ,  tmp = n;
	while(n){
		rev = rev * 10 + n % 10;
		n /= 10;
		}
		if( rev == tmp)
		return 1;
		return 0;
	}
int sum(long long n){
	int dem = 0;
	while( n != 0){
		int r = n % 10;
		n /= 10;
		dem+=r;
		}
		if ( dem % 2 == 0)
		return 0;
		return 1;
}
int main() {
	int t = 0;
	scanf("%d", &t);
	while(t--)
	{
		long long n;
        scanf("%lld", &n);
        if( sum(n) && tn(n) && pt(n))
        printf("YES\n");
        else
        printf("NO\n");
    }
}
