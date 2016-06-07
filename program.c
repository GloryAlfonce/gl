
#include <stdio.h>

int main(void)
{
	int n=0,i;
	char a[100];
	gets(a);
	for(i=0;i<strlen(a);i++)
	{
		if(a[i]==' ')
		{
			n++;
		}
	}
	printf("%d ",n+1);
	return 0;
}
