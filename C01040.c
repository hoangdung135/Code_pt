#include <stdio.h>
#include <math.h>
int hh(int n){
	int sum = 1 , i;
	for( i = 2; i <= sqrt(n); i++ )
	{
		if ( n % i == 0){
			if( i != n/i){
				sum += i + n/i;}
			else sum += i;
			}
	}
    if( sum == n )
    return 1;
    return 0 ;
}
int main() {
		int n;
        scanf("%d", &n);
        if ( hh(n) )
        printf("1");
        else 
        printf("0");
    }

