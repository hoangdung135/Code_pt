#include <stdio.h>
#include <math.h>
int max ( int a,int b){
	return a > b ? a :b;
}
int main() {
	int n , m , i , j ;
	scanf("%d%d",&n ,&m);
		for ( i = 1 ; i <= n ; i++){
    	int init = max (n , m);
    	    for ( j = 1 ; j <= m ; j++){
    		    if ( j <  i )
    		        printf("%c", 96+init--);
    		    else printf("%c", 96 + init);		
            }
            printf("\n");
       }
}
