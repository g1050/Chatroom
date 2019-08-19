#include <iostream>
#include <cstdio>
#include <string>
#include <algorithm>
#include <cstring>
#define N 1000100
#define M 100100

using namespace std;
int ans = 0;
void get_next(char * S,int *next,int len_t)
{
    int i = 0,j = -1;
    next[0] = -1;
    while(i < len_t){
        while(j != -1 &&  S[i] != S[j])  j = next[j];
        if(S[++i] == S[++j]) next[i] = next[j];
        else next[i] = j;
    }

   /* for(int i = 0;i<len_t;i++){ */
   /*      cout << i << " " << next[i] << endl; */
   /*  } */

}
int Index_KMP(char * S,int len_s,char * T,int len_t,int pos)
{
    int i = pos;//i表示主串开始检索的位置
    int j = 0;//标记子串的位置
    int next[M];
    get_next(T,next,len_t); //得到前缀表
    
    
    while(i < len_s){
        while(j != -1  && S[i] != T[j]) j = next[j];
        i++,
        j++;
        if(j >= len_t){
            ans++;
            j = next[j];
        }
    }
    return ans;
}
int main()
{
    int t;
    char S[N];//主串
    char T[M]; //待匹配串
    scanf("%d",&t);
    while(t--)
    {
        getchar();
        scanf("%s",T);
        getchar();
        scanf("%s",S);
        ans = 0;
        int ans = Index_KMP(S,strlen(S),T,strlen(T),0);
        printf("%d\n",ans);
    }
    return 0;
}
