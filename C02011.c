#include <stdio.h>
#include <math.h>

int main() {
	int n , m , i , j ;
	scanf("%d%d",&n ,&m);
    for ( i = 1; i <= n ; i++){
    	int init = i;
    	for ( j = 1 ; j <= m ; j++){
    		if ( j <= m-i)
    		    printf("%d", init++);
    		else
    			printf("%d", init--);		
            }
        printf("\n");
    }
}
