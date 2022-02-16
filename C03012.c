#include<stdio.h>
int solve( int n){
	if ( n == 0 || n == 1) return 1;
	long long fn2 = 0 , fn1 = 1;
	int i;
	for ( i = 3 ; i <= 93 ; i++){
		long long fn = fn1 + fn2;
		if( fn == n)
		return 1;
		fn2 = fn1;
		fn1 = fn;
	}
	return 0;
}
main()
{
    long long n ;
    scanf("%lld", &n);
    if( solve(n) )
    printf("1");
    else printf("0");
}
