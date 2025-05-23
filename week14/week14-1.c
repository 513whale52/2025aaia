///week14-1.cpp
#include <stdio.h>
int main()
{
    printf("");
    int a, b;
    scanf("%d%d", &a, &b);
    int ans;
    for(int i=1;i<=a;i++){
            if(a%i==0 && b%i==0) ans=i;
    }
    printf("%d\n",ans);
    printf("%d/%dµ¥©ó%d/%d\n",a,b,a/ans,b/ans);
}
