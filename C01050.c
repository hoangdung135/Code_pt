#include <stdio.h>
#include <math.h>
int main() {
	int d ,r , i ,j ;
	scanf("%d%d", &d , &r);
	for ( i = 1 ; i <= r ;i++ ){
		for ( j = 1 ; j <= d ; j++){
			if ( i == 1 || i == r || j == 1 || j == d )
			printf("*");
			else 
			printf(" ");
			}
			printf("\n");
		}
}
