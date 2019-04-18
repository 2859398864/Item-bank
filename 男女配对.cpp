/*
One day n girls and n boys come to Xi¡¯an to look for a mate. 
Each girl has a value a[i], each boy has a value b[i]. 
Girl i and boy j will fall in love only if a[i] + b[j] ¡Ý k.
Please help them make pairs as many as possible .

First line an integer T (1 ¡Ü T ¡Ü 10). Indicates the number of test cases.
Then T test cases follows. Each test case begins with 
two integer N, K (1 ¡Ü N ¡Ü 200000,0 ¡Ü K ¡Ü 109). 
The next line has N integers 
indicate a[1] to a[N] (0 ¡Ü a[i] ¡Ü 109). 
The next line has N integers indicate b[1] to b[N] (0 ¡Ü b[i] ¡Ü 109)

For each test case, print the answer in a single line.

input
1
3 4
1 2 3
1 2 3

output

3



*/
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


