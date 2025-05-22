///week11-1.cpp
#include <stdio.h>
///前面 定義 函式
///送出INT整數
int addnum(int a,int b)
{
    printf("在函示addnum()裡,得到參數a:%d b:%d\n",a,b);
    int ans=a+b;
    printf("算出答案%d要return出去\n",ans);
    return ans;
}
int main()
{
    printf("在main()呼叫使用addnum()\n");
   int ans =addnum(2,3);
   printf("在main() 得到答案:%d\n",ans);
}
