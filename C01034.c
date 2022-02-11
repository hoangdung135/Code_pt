#include <stdio.h>
#include <math.h>
int main() {
	int m , n , i;
	scanf("%d%d",&m ,&n);
	int c1= sqrt(m);
	int c2 = sqrt(n);
	if ( c1*c1 != m ) c1++;
	printf("%d\n", c2-c1+1);

	for ( i = c1 ; i <= c2 ; i++ )
	{
		printf("%d\n", i*i);
	}
}
