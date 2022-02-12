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
    		    if ( j <= m - i + 1)
    		        printf("%c", 64+init+j-1);
    		    else{
    		    	if ( m < i ) printf("%c", 64 + init--);
    		    	else 
    			    printf("%c",  --init+ 64);		
                }
            }
            printf("\n");
       }
}
