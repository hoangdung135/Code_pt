#include <stdio.h>
#include <math.h>
int sum(int n){
	int rev = 0;
	while(n){
		rev += n % 10;
		n/= 10;
		}
		return rev;
	}
int smith(int n){
	int sum1 = sum(n);
	int sum2 = 0;
	int i, tmp = n;
	for( i = 2 ; i <= sqrt(n); i++){
		while( n % i == 0){
			sum2 += sum(i);
			n/= i;
			}
			}
		if( n != 1) sum2 += sum(n);
		return sum1 == sum2;
	}
int main() {
    int n;
    scanf("%d", &n);
        if( smith(n))
        printf("YES");
        else printf("NO");
        }
        
