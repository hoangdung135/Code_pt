#include<stdio.h>
void solve( int n){
	long long fibo[n];
	fibo[0] = 0;
	fibo[1] = 1;
	int i;
	for( i = 2 ; i <= n ;i++){
		fibo[i] = fibo[i-1] + fibo[i -2];
		}
	for ( i = 0 ; i < n ;i++){
		printf("%lld ", fibo[i]);
		}
	}
main()
{
    int n , i;
    scanf("%d", &n);
    solve(n);
}
