#include <iostream>
#include<algorithm>
#include<queue>
using namespace std;
int a[10000005];
int b[10000005];
int cmp(int a, int b) {
    return a > b;
}
int main()
{
    priority_queue <int> nan;
    priority_queue <int, vector<int>, greater<int> > nv;

    int n, k;
    int t;
    cin>>t;
    for(int i = 0;i < t;++i) {
        cin>>n>>k;
        long long int ans = 0;
        for(int j = 0;j < n;++j) {
            int a;
            cin>>a;
            nan.push(a);
        }
        for(int j = 0;j < n;++j) {
            int a;
            cin>>a;
            nv.push(a);
        }
        while(!nv.empty()) {
            long long a = nan.top();
            long long b = nv.top();
            if(a + b >= k) {
                ans++;
                nan.pop();
                nv.pop();
            } else {
                nv.pop();
            }
        }

        cout<<ans<<endl;
    }
    return 0;
}


