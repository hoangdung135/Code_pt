#include<stdio.h>
int gcd(int a, int b)
{
    while(b>0){
    int t = a%b;
    a = b; b = t;
    }
    return a;
}
main(){
    int a, b, i, j;
    scanf("%d%d", &a, &b);
    for(i=a; i<b;i++)
    {
        for(j=i+1;j<=b;j++)
        {
            if (gcd(i,j)==1) printf("(%d,%d)\n", i, j);
        }
    }
}
