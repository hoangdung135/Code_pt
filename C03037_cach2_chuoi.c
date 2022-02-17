#include <stdio.h>
#include <math.h>
#include<string.h>
void solve(char c[]){
	int c2 = 0 ,c3= 0, c5= 0, c7= 0 , i;
	for( i = 0; i <= strlen(c); i++){
		if( c[i] == '2')++c2;
		else if( c[i] == '3') ++c3;
		else if( c[i] == '5' ) ++c5;
		else if( c[i] == '7') ++c7;
		}
    for ( i = 0 ; i <strlen(c); i++){
		if( c[i] == '2'  && c2 != 0){
			printf("2 %d\n", c2);c2 = 0;}
		else if( c[i] == '3' && c3 != 0) { printf("3 %d\n", c3); c3 = 0;}
		else if( c[i] == '5' && c5 != 0) { printf("5 %d\n", c5); c5 = 0;}
		else if( c[i] == '7' && c7 != 0) { printf("7 %d\n", c7); c7 = 0;}
		}
}
int main() {
	char c[100];
	scanf("%s", &c);
	solve(c);
}	
