#include<stdio.h>
int Prime(int n)
{
	int i;
    if(n<2) return 0;
    for( i = 2; i<=sqrt(n); i++)
        if(n%i==0) return 0;
    return 1;
}
main()
{
    int n , i;
    scanf("%d", &n);
    for( i = 1; i <= n; i++)
    {
        if (Prime(i)) printf("%d\n", i);
    }
}
