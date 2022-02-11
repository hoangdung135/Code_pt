#include <stdio.h>
#include <stdlib.h>
int main() {
	int a ;
	scanf("%d", &a );
	printf("%d %d %d ", (int)a / 365 ,  (int )(( a % 365 ) / 7) , ( a % 365 ) % 7    );
}
