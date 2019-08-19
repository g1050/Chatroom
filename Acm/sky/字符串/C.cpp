#include <iostream>
#include <cstdio>
#include <cstring>
#include <string.h>
#define N 100100
using namespace std;
void get_next(char * S,int *next,int len_t)
{
    int i = 0,j = -1;
    next[0] = -1;
    while(i < len_t){
        while(j != -1 &&  S[i] != S[j])  j = next[j];
        next[++i] = ++j;
    }

}
int main()
{
    int t;
    scanf("%d",&t);
    while(t--)
    {
        int next[N];
        char s[N];
        getchar();
        scanf("%s",s);
        int len = strlen(s);
        get_next(s,next,len);
        
        int ans = 0;
        int sum = len - next[len];//求出循环节长度
        if(next[len] == 0) ans = len;
        else 
            if(len%sum == 0) ans = 0;
            else ans = sum - len%sum;

        printf("%d\n",ans);
    }
    return 0;
}

