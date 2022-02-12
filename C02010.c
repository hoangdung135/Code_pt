#include <stdio.h>
#include <math.h>
int min( int a , int b){
	return a < b ? a : b;
}
int main() {
	int n , m , i , j ;
	scanf("%d%d",&n ,&m);
    for ( i = 1; i <= n ; i++){
    	printf("%d", i);
    	for ( j = 1 ; j < m ; j++){
    		if ( j <= m-i)
    		printf("%d", i + j);
    		else{
    			int init = min ( i - 1 , m -1);
    			while ( j < m ){
    				printf("%d", init--);
    				j++;
    			}
            }
        }
        printf("\n");
    }
}
