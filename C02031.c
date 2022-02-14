#include <stdio.h>
#include <math.h>
int min( int a , int b){
	return a < b ? a : b;
}
int main() {
	int n  , i , j ;
	scanf("%d",&n );
    for ( i = n; i >= 1 ; i--){
    	int init = i;
    	for ( j = 1 ; j <= i ; j++){
    		printf("%c", 63+init);
    		init += 1;
        }
        printf("\n");
    }
}
