#include <stdio.h>
#include <math.h>
int prime[10001];
void sang(){
	int i , j;
	for( i = 2 ; i <= 10000 ; i++) prime[i] = 1;
	prime[0] = prime[1] = 0;
	for( i = 2 ; i <= 100 ; i++){
		if(prime[i]){
			for( j = i*i ; j <= 10000 ; j+=i)
			prime[j] = 0;
		}
	}
}
int main() {
	int t = 0;
	scanf("%d", &t);
	sang();
	while(t--)
	{
		int i ,n;
        scanf("%d", &n);
        for ( i = 2 ; i <= n /2 ; i++){
        	if(prime[i] && prime[n-i]){
        		printf("%d %d ", i , n-i);
        	}
        }
        printf("\n");
    }
}
