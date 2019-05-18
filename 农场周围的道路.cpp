#include <bits/stdc++.h>
using namespace std;
/*
假设总数q能被分为两部分，相差为k，那么设其中一部分为x，则这两群奶牛可分别表示为

x1=x
x2=x+k
-> x+k + x=q
--> x=(q-k)/2
有为了满足实际条件，x1，x2都要为整数（不可能有半只奶牛吧。。。） 这便是主要思路。。
且为正数 

*/

int num=1;
int n,k;
void dfs(int q) {
    if(q-k<=0) {
    	return;	
	}
    if(((q-k)/2) == ((q-k)/2.0)) {
        num++;
        dfs((q-k)/2);
        dfs(k+(q-k)/2);
    }
}
int main() {
    cin>>n>>k;
    dfs(n);
    cout<<num;
}
