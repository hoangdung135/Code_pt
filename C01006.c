#include <stdio.h>
#include<stdlib.h>>
int main() {
	int a ,b ;
	scanf("%d%d", &a, &b );
	if ( b == 0 )
	printf("0"  );
	else if ( b!= 0 )
	printf("%d %d %ld %.2f %d", a + b , a - b , ( long int ) a * b , ( float )a / b , a % b  );
}
