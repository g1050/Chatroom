#include <iostream>
#include <vector>
#include <map>
#include <string>
#include <set>
#include <algorithm>
using namespace std;
int main()
{
    int t;
    cin >> t;
    while(t--){
        int n;
        cin >> n;
        int a[n];
        for(int i = 0;i < n;i++){
            cin >> a[i];
        }
        int p = min_element(a,a+n)-a;
        
        
    }
    return 0;
}

