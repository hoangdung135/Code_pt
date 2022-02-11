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
	int n;
	scanf("%d", &n);
	if (strong(n))
	printf("1");
	else printf("0");
}
