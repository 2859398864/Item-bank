#include <bits/stdc++.h>
using namespace std;
/*
��������q�ܱ���Ϊ�����֣����Ϊk����ô������һ����Ϊx��������Ⱥ��ţ�ɷֱ��ʾΪ

x1=x
x2=x+k
-> x+k + x=q
--> x=(q-k)/2
��Ϊ������ʵ��������x1��x2��ҪΪ�������������а�ֻ��ţ�ɡ������� �������Ҫ˼·����
��Ϊ���� 

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
