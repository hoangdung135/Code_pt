#include <stdio.h>
#include <math.h>
int check(int n){
	int i;
	for( i = 2 ; i <= sqrt(n); i++){
		if( n % i == 0){
			return 0;
			}		
	}
	return n > 1;
}
int pt(int n){
	while(n){
		int r = n % 10;
		if( r != 2 && r != 3 && r != 5 && r != 7)
		return 0;
		n /= 10;
		}
	return 1;
}
int main() {
	int t = 0;
	scanf("%d", &t);
	while(t--)
	{
		int a , b , i , dem = 0;
        scanf("%d%d", &a , &b);
        for( i = a ; i <= b ; i++){
        	if( check(i) && pt(i))
        	++dem;
        	}
        printf("%d\n", dem);
    }
}
