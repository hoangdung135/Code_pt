#include<stdio.h>
#include<math.h>
int nt( int n){
	int i;
	for( i = 2 ; i <= sqrt(n); i++){
		if( n % i ==0 )
		return 0;
	}
	return n > 1;
}
int solve( int n){
	if ( n == 0 || n == 1) return 1;
	long long fn2 = 0 , fn1 = 1;
	int i;
	for ( i = 3 ; i <= 20 ; i++){
		long long fn = fn1 + fn2;
		if( fn == n)
		return 1;
		fn2 = fn1;
		fn1 = fn;
	}
	return 0;
}
int sum( int n){
	int are = 0;
	while( n){
		are += n % 10;
		n /= 10;
	}
	return solve(are);
}
main()
{
    int a , b ,i ;
    scanf("%d%d", &a , &b);
    if( a <= b){
    for ( i = a ; i <= b ;i++){
    	if( sum(i) && nt(i))
    	printf("%d ", i);
    }
    }
    else if ( a >= b){
    	for ( i = b ; i <= a ;i++){
    	if( sum(i) && nt(i))
    	printf("%d ", i);
    }
    }
}
