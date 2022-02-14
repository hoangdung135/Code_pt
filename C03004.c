#include<stdio.h>
int max(int a, int b)
{
    while(b>0)
    {
        int t = a%b;
        a=b;
        b=t;
    }
    return a;
}
main()
{
    int a, b;
    scanf("%d%d", &a, &b);
    int x = max(a,b);
    printf("%d\n%lld", x, (long long) a*b/x);
}
