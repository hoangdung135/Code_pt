#include<stdio.h>
int tong(int n){
    int t = 0;
    while(n>0){
        t=t+n%10;
        n=n/10;
    }
        return t;
    }
main(){
    int t, n;
    scanf("%d", &t);
    while (t--){
        scanf("%d", &n);
        if (tong(n)%10==0) printf("YES\n");
        else printf("NO\n");
    }
}
