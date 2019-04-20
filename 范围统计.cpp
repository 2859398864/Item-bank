// 给出 n 个整数和 m 次询问，对于每次询问 (a, b), 输出闭区间 [a, b] 内的整数的个数
/*
input
6 1
1 2 2 4 7 8
1 3

output
3
*/
#include <iostream>
#include <algorithm>     
using namespace std;
int v[1000];
int main() {
    int n, m, a, b;
    cin >> n >> m;
    for(int i = 0; i < n; ++i)
        cin >> v[i];
    sort(v, v+n);
    for(int i = 0; i < m; ++i) {
        cin >> a >> b;
        cout << upper_bound(v, v + n,  b) - lower_bound(v, v + n, a)<< endl;
    }
}
