#include<cstdio>
#include<cstring>
#include<iostream>
#include<queue>

using namespace std;

int main(){
    queue <int> num;
    queue <char> f;
    char s[60007];
    cin>>s;
    int sum = 0;
    f.push('+'); //����ѹ��һ��"+"����Ȼ�Ļ����Ǿͻ�������һ�Σ�
    int n = strlen(s);
    for(int i = 0;i <= n;++i) { //�ص�С�ڵ��� 
    	if(s[i] == '-' || s[i] == '+' || i == n) {//�������������"+"��"-"��������������һ������
    		num.push(sum);
    		sum = 0;
    		if(i != n) f.push(s[i]);//ǰ����ж���Ϊ�˷�ֹ��"\0"Ҳ���������ѹ��ȥ
		} else {
			sum = sum * 10 + (s[i] - '0'); 
		}
	}
	int ans = 0;
	while(!num.empty() || !f.empty()) {
		if(f.front() == '-') {
			ans -= num.front();
		} 
		if(f.front() == '+') {
			ans += num.front(); 
		} 
		num.pop();
		f.pop();
	}
	cout<<ans<<endl;
    return 0;
}
