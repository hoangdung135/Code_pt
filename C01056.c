#include <stdio.h>
#include <math.h>

int main() {
	int t = 0;
	scanf("%d", &t);
	while(t--)
	{
		long long n;
        scanf("%lld", &n);
		long long checktangdan = 1;
        long long themang = n;
        long long chusocuoi = themang % 10;
        themang /= 10;
        while ( themang != 0 ){
        	int chusokecuoi = themang % 10;
        	themang /= 10;
        	if ( chusocuoi < chusokecuoi ){
        		checktangdan = 0;
        		break;
        	}
        	else chusocuoi = chusokecuoi;
    	}
		if (checktangdan) printf("YES\n");
		else printf("NO\n");  
    }
}

