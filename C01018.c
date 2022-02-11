#include <stdio.h>
#include <math.h>
int main() {
	int t = 0;
	scanf("%d", &t);
	while(t--)
	{
    int n;
    scanf("%d", &n);
    int sqr = sqrt(n);
    if(sqr*sqr == n){
        printf("YES\n");
    }else{
        printf("NO\n");
    }
	}
}
