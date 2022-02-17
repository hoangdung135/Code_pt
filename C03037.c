#include <stdio.h>
#include <math.h>
long long rev(long long n){
	long long res = 0;
	while(n){
		res = res * 10 + n % 10;
		n/= 10;
		}
		return res;
	}
void solve(long long n){
	int c2 = 0 ,c3= 0, c5= 0, c7= 0;
	long long m = rev(n);
	while(n){
		int r = n % 10;
		if( r == 2)++c2;
		else if( r == 3) ++c3;
		else if( r ==5 ) ++c5;
		else if( r == 7) ++c7;
		n/= 10;
		}
	while(m){
		int r = m % 10;
		if(  r == 2 && c2 != 0){
			printf("2 %d\n", c2);
			c2 = 0;
		}
		else if( r == 3 && c3 != 0) { printf("3 %d\n", c3); c3 = 0;}
		else if( r == 5 && c5 != 0) { printf("5 %d\n", c5); c5 = 0;}
		else if( r == 7 && c7 != 0) { printf("7 %d\n", c7); c7 = 0;}
		m/=10;
		}
	}
int main() {
	long long n;
	scanf("%lld", &n);
	solve(n);
}	
