#include<stdio.h>
#include<math.h>
int a(int n)
{
	int i;
    if(n<2) return 0;
    for( i=2; i <= sqrt(n); i++)
        if(n%i==0) return 0;
    return 1;
}
main(){
    int n, count = 0, i = 2;
    scanf("%d", &n);
    while(count<n)
    {
        if(a(i))
        {
            printf("%d\n", i);
            count++;
        }
        i++;
    }
}
