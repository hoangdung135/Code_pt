#include <stdio.h>
#include <math.h>
int main() {
	int n ,m , i , j;
    scanf("%d%d", &n, &m);
    for ( i = 1 ; i <= n ; i++){
    	for ( j = 1; j <= i - 1 ; j++){
    		printf("~");
    		}
    	for ( j = 1 ; j <= m ; j++){
    		if ( i == n || i == 1 || j == m || j == 1  )
    		printf("*");
    		else printf(".");
    	}
    	printf("\n");
    }
}
