#include <iostream>
#include <cstring>
#define N 1000100
using namespace std;
void GetNext(char* p,int next[])  
{  
    int pLen = strlen(p);  
    next[0] = -1;  
    int k = -1;  
    int j = 0;  
    while (j < pLen)  
    {  
        //p[k]表示前缀，p[j]表示后缀  
        if (k == -1 || p[j] == p[k])   
        {  
            ++k;  
            ++j;  
            next[j] = k;  
        }  
        else   
        {  
            k = next[k];  
        }  
    }  
}
int main()
{
    int n;
    int cnt = 1;
    while(scanf("%d",&n) && n)
    {
        char a[N];
        int next[N];
        scanf("%s",a);
        GetNext(a,next);
        printf("Test case #%d\n",cnt++);
        for(int i = 1;i<=n;i++)
        {
            int sum = i - next[i];
            if(i%sum == 0 && i/sum > 1){
                printf("%d %d\n",i,i/sum);
            }
        }
        printf("\n");
    }
    return 0;
}

