#include <stdio.h>
#include <math.h>
#include <string.h>
char a[10],b[10];
int n,j,i;
int main()
{ 
	scanf("%s",&a);
	n=strlen(a);
	b[1]=a[0];
	a[0]=a[n-1];
	a[n-1]=b[1];
	i=0;
	while(a[i]=='0')
	i++;
	j=-1;
	for(i;i<=n-1;i++)
	{
		j++;
		b[j]=a[i];
		
	}
	printf("%s",b);
	
}
