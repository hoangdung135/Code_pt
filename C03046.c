#include <stdio.h>
#include <math.h>
int sum(int n){
	int rev , su= 0;
	while(n!= 0){
		rev = n % 10;
		su += rev;
		n/=10;
		}
	if ( su % 10 == 0) return 1;
	return 0;
}
int tn(int n){
	int rev = 0 ,  tmp = n;
	while(n){
		rev = rev * 10 + n % 10;
		n /= 10;
		}
		if( rev == tmp)
		return 1;
		return 0;
}
int pri(int n){
	int red ;
	while(n != 0){
		red = n % 10;
		if( red == 4 )  return 0;
		n/= 10;
		}
	return 1;
}
int main() {
	int t = 0;
	scanf("%d", &t);
	while(t--)
	{
		int n , i;
        scanf("%d", &n);
        for ( i = pow(10,n-1);i < pow(10,n); i++){
        	if( sum(i) && tn(i) && pri(i))
        	printf("%d ", i);
        	}
        	printf("\n");
    }
}
