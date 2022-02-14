#include<stdio.h>
#include<math.h>
int hh( long long n){
	long long i , sum = 1;
	for ( i =2 ; i <= sqrt(n); i++){
		if( n % i ==0){
			if( i != n/ i)
				sum += i + n/i;
			else   
			    sum += i;	
    	}
	}
	if ( sum == n )
	return 1;
	return 0;
}
int main(){
	long long n, i;
	scanf("%lld", &n);
	for ( i = 2 ; i <= n ; i++){
		if(hh(i)){
			printf("%lld ", i);
		}
	}
}
