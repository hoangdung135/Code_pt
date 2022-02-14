#include<stdio.h>
#include<math.h>
int tn( int n){
	int res = 0 , tmp = n;
	while(n){
		res = res * 10 + n % 10;
		n/=10;
	}
	return tmp == res;
}
int nt( int n){
	int  i;
	for( i = 2 ; i <= sqrt(n); i++){
		if( n % i == 0)
		return 0;
	}
	return n > 1;
}
int main(){
	int t = 0;
	scanf("%d\n", &t);
	while(t--){
		int a ,b, i, k=0;
		scanf("%d%d", &a ,&b);
		for ( i = a ; i <= b ; i++){
			if (nt (i) && tn(i) ){
				k = k+1;
				if (k%10==0) printf("%d\n", i);
				else printf("%d ", i);
			}
		}
		
		printf("\n\n");
    }
}
