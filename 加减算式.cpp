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
    f.push('+'); //首先压入一个"+"，不然的话我们就会少运算一次！
    int n = strlen(s);
    for(int i = 0;i <= n;++i) { //重点小于等于 
    	if(s[i] == '-' || s[i] == '+' || i == n) {//如果我们遇到了"+"和"-"，或者这是最后的一个数字
    		num.push(sum);
    		sum = 0;
    		if(i != n) f.push(s[i]);//前面的判断是为了防止把"\0"也当做运算符压进去
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
