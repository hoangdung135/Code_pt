#include <stdio.h>
#include <math.h>
void slove(int n){
	int c = 0, l= 0;
	while(n){
		int r = n% 10;
		if( r % 2 == 1 ) l++;
		else c++;
		n/= 10;
		}
	printf("%d %d\n", l ,c );
}
int main() {
	int t = 0;
	scanf("%d", &t);
	while(t--)
	{
	    int n;
	    scanf("%d", &n);
	    slove(n);
	}
}
