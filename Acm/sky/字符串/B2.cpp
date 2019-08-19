#include<bits/stdc++.h>
#define maxn 100005
using namespace std;
char a[maxn],b[maxn]; 
int len1,len2;
 
//求b匹配a的起始坐标 
int kmp1(int *next){
	int i=0,j=0;
	while(j<len1&&i<len2){
		while(j>=0&&a[j]!=b[i]) j=next[j];
		i++,j++;
	}
	if(j==len1) return i-j;
	return -1;
}
 
//求b可以匹配a几次 
int kmp2(int *next){
	int i=0,j=0,ans=0;
	while(i<len2){
		while(j>=0&&a[j]!=b[i]) j=next[j];
		
		if(j==len1){
			ans++;
			j=next[j];
		}
		i++,j++;		
	}
	return ans;//匹配次数 
}
 
 
int main(){
	
    int next[maxn];
	while(~scanf("%s",a)){
		scanf("%s",b);
		memset(next,-1,sizeof(next));
		len1=strlen(a);
		len2=strlen(b);

		for(int i=0,j=-1;i<len1;i++){
			while(j>=0&&a[i]!=a[j]) j=next[j];
			if(a[i+1]==a[j+1]) next[i+1]=next[++j];
			else next[i+1]=++j;
		}
		/* for(int i=0;i<len1;i++){ */
		/* 	cout<<next[i]<<" "; */
		/* } */
                cout << kmp2(next) << endl;;
	}
        return 0;
} 
