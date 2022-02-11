#include <stdio.h>
#include <math.h>
int main() {
	int n , i , j;
    scanf("%d", &n);
    for ( i = 1 ; i <= n ; i++){
    	for ( j = 1; j <= 2*n - i ; j++){
    		if ( j <= n - i)
    		printf("~");
    		else {
			if (i == 1  || i == n || j == n - i + 1 || j == 2*n  - i ) printf("*");
			else printf(".");
			}
    	}
    	printf("\n");
    }
}
