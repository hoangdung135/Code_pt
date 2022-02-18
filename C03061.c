#include <stdio.h>
#include <math.h>
#include<string.h>
int solve(char c[]){
	int d = c[0] - '0' , cuoi = c[strlen(c)-1] - '0';
	if(!(d == 2*cuoi || cuoi == 2*d)) return 0;
	int l = 1 , r = strlen(c) - 2;
	while( l < r){
		if( c[l] != c[r]) return 0;
		++l;--r;
		}
		return 1;
	}
int main() {
	int t = 0;
	scanf("%d", &t);
	while(t--)
	{
		char c[20];
        scanf("%s", &c);
        if(solve(c))
        printf("YES\n");
        else 
        printf("NO\n");
    }  
}
