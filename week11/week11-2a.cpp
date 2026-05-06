//week11-2a.cpp SOIT106_ADVANCE_001
#include <stdio.h>
int main()
{
    int N;
    scanf("%d",&N);
    while (N>0){
       //剝皮法,只要還有,繼續剝
       ans=ans*10+N%10;
       //剝下來的皮 N%10
       printf("%d",N%10);
       //剝皮後的結果N/10
       N=N/10;
    }
}
