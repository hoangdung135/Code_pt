#include <stdio.h>
#include <math.h>
int main() {
	int t = 0;
	scanf("%d", &t);
	while(t--)
	{
		int n , i ;
        scanf("%d", &n);
        if ( n < 2 )
        printf("NO\n");
        else
        {
        	int mx = 1;
        	for (i = 2 ; i <= sqrt(n);i++ )
            {
            	if( n % i == 0)
            	{mx = 0;
            	break ;
            }
            }
        if ( mx == 1)
        printf("YES\n");
        else 
        printf("NO\n");}
    }
}
        	
    	
