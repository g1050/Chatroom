#include <iostream>
#include <set>
#include <algorithm>
using namespace std;
int main()
{
    set<int > s;
    int n;
    cin >> n;
    int a[n];
    for(int i = 0;i<n;i++){
        cin >> a[i];
    }
    sort(a,a+n);

    for(int i = 0;i<n;i++){
        if(a[i] - 1 == 0 && s.count(a[i]) == 0) s.insert(a[i]);
        else if(a[i] - 1 == 0 && s.count(a[i] != 0)) s.insert(a[i]+1);
        else{
            if(s.count(a[i]-1) == 0) s.insert(a[i]-1);
            else if(s.count(a[i]) == 0) s.insert(a[i]);
            else s.insert(a[i]+1);
        }
    }

    cout << s.size() << endl;
    return 0;
}

