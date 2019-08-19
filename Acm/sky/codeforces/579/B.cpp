#include <iostream>
#include <algorithm>
using namespace std;
typedef long long LL;
int main()
{
    LL t;
    cin >> t;
    while(t--){
        LL n;
        LL flag = 0;
        cin >> n;
        LL a[4*n+10];

        for(int i = 1;i<=4*n;i++){
            cin >> a[i];
        }
        sort(&a[1],&a[1]+4*n);
        for(int i = 1;i<=4*n;i+=2){
            if(a[i+1] != a[i]){
                flag = 1;
                break;
            }
        }

        if(flag){
            printf("NO\n");
            continue;
        }
        int sum = a[1]*a[4*n-1];
        for(int i = 1;i<=4*n/2;i += 2){
            if(a[i] * a[4*n-i] == sum) continue;
            else{
                flag = 1;
                break;
            }
        }
        if(flag) printf("NO\n");
        else printf("YES\n");
    }
    return 0;
}

