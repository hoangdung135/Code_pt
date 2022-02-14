#include <stdio.h>
#include <math.h>
int giaithua( int n){
	int gt = 1 , i;
	for (i = 2; i<= n ; i++ ){
		gt*=i;
		}
	return gt;
}
int strong(int n ){
	int sum = 0 , step = n;
	while(n > 0){
		sum += giaithua(n % 10);
		n/=10;
		}
		if ( sum == step ) return 1;
		return 0;
	}
int main() {
	int n , i;
	scanf("%d", &n);
	for ( i = 1 ; i <= n ; i++){
		if (strong(i))
		printf("%d ", i);
		}
}
	

