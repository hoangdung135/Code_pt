#include<stdio.h> 
#include<math.h>>
int main(){ 
	int t; 
	scanf("%d", &t); 
	while (t--){ 
		int n,i, count = 0; 
		scanf("%d", &n); 
		for( i = 1; i <= sqrt(n); i++) { 
			if(n % i == 0) { 
				if (i % 2 == 0) count++; 
				if ((n / i) % 2 == 0 && (n / i) != i) count++; 
			} 
		} 
		printf ("%d\n", count); 
	} 
	return 0;
}
