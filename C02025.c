#include <stdio.h>
#include <math.h>
int min ( int a,int b){
	return a < b ? a :b;
}
int main() {
	int n , m , i , j ;
	scanf("%d%d",&n ,&m);
		for ( i = 1 ; i <= n ; i++){
    	int init = min (i , m);
    	    for ( j = 1 ; j <= m ; j++){
    		    if ( j <= m - i )
    		        printf("%c", 63+init++);
    		    else
    			    printf("%c", 63+init);		
                }
            printf("\n");
       }
}
