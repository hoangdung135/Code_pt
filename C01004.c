#include <stdio.h>
#include<stdlib.h>>
int main() {
	int t = 0 ;
	scanf("%d", &t);
	while ( t--) 
	{
	float N;
	scanf("%f", &N);
	printf("%.15lf\n", (double) 1 / N );
	}
}
