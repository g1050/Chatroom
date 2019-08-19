#include <iostream>
#include <cstring>
#include <stdio.h>
#define N 250100
using namespace std;
char Ma[N*2];
int Mp[N*2];
void Manacher(char s[],int len)
{
    int l = 0;
    Ma[l++] = '$';
    Ma[l++] = '#';
    for(int i = 0;i<len;i++){
        Ma[l++] = s[i];
        Ma[l++] = '#';
    }
    Ma[l] = 0;
    int mx = 0,id = 0;
    for(int i = 0;i<l;i++){
        Mp[i] = mx > i ? min(Mp[2*id-i],mx - i) : i;
        while(Ma[i+Mp[i]] == Ma[i-Mp[i]]) Mp[i]++;
        if(i + Mp[i] > mx){
            mx = i + Mp[i];
            id = i;
        }
    }
}
int main()
{
    char a[N];
    int flag = 0;
    while(~scanf("%s",a))
    {
        if(flag) getchar();
        else flag = 1;
        int ans = 0;
        int len = strlen(a);
        Manacher(a,len);
        for(int i = 0;i<2*len+2;i++){
            ans = max(ans,Mp[i]-1);

        }

        printf("%d\n",ans);

    }
    return 0;
}

