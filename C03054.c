#include <stdio.h>
#include <math.h>
#include<string.h>
void solve(char c[]){
	int ok = 0, i;
	for( i = 0 ; i <strlen(c); i++){
		if( c[i] == '1') ok = 1;
		else if( !(c[i] =='0' || c[i] =='8' || c[i] =='9')){
			ok = 0;
			break;
		}
	}
	if( !ok){
		printf("INVALID\n");
		return;
		}
	ok = 0 ;
	for( i = 0 ; i < strlen(c); i++){
		if(c[i] == '1'){
			printf("1");
			ok = 1;
		}
		else if ( ok != 0){
		printf("0");
		}
	}
	printf("\n");
}
int main() {
	int t = 0;
	scanf("%d", &t);
	while(t--)
	{
		char c[20];
        scanf("%s", &c);
        solve(c);
    }
}
