#include <stdio.h>
#include <math.h>
int main() {
    int n , s = 0 , step;
    scanf("%d", &n);
    	for (;n > 0;)
        {
        	step = n %10;
        	s+= step;
        	n = n/10;
        }     	
    printf("%d", s);
    }
	

