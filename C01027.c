#include <stdio.h>
#include <math.h>
int main() {
	int t = 0;
	scanf("%d", &t);
	while(t--)
	{
		int a ,b ;
		scanf("%d%d", &a, &b);
		if ( a ==0 || b == 0)
		printf("%d\n",a);
		else
		while ( a != b )
		{
			if (a > b){
            a -= b; 
        }else{
            b -= a;
        }
        }
        printf("%d\n", a);
    }
}
