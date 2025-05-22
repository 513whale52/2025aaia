///week10-2.cpp
#include <stdio.h>
int main()
{
	printf("");
	int n;
	scanf("&d",&n);
	///printf("%d\n",n%10);
	///printf("%d\n",n/10 %10);
	///printf("%d\n",n/100 %10);
	while(n>0){
		printf("­é¥Ö­é¥Ö%d%d", n,n%10);
		n=n/10;
	}
}
