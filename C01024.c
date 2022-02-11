#include <stdio.h>
#include <math.h>
int main() {
	int t = 0;
	scanf("%d", &t);
	while(t--)
	{
		int n , sodau , socuoi ;
        scanf("%d", &n);
        socuoi = n%10;
    	for (;n > 0;)
        {
        	sodau = n %10;
        	n = n/10;
        }     	
    if ( sodau == socuoi )
    printf ("YES\n");
    else 
    printf("NO\n");
    }
}
