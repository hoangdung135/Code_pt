#include <stdio.h>
#include <math.h>
long long ucl( long long a ,long long b){
	if( a == 0 || b ==0 )
	return a + b;
	while( a != b){
		if( a > b )
			a = a - b;
		else 
		    b = b - a;
		}
		return a;
	}
int main() {
	int t = 0;
	scanf("%d", &t);
	while(t--)
	{
		int a  , b ,c ,d;
        scanf("%d%d%d%d", &a ,&b ,&c ,&d);
        if ( ucl(a ,b) == ucl ( c ,d))
        printf("YES\n");
        else
        printf("NO\n");
    }
}
