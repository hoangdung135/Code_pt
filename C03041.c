#include<stdio.h>
#include<math.h>
int main() {
    int t , k; 
	scanf("%d", &t);
    int a, b, c, d;
    for ( k = 0; k < t; k++) {
        scanf("%d%d%d%d", &a, &b, &c, &d);
        if (c - a == d - b) printf("YES\n");
		else printf("NO\n");
    }
    return 0;
}
