#include<iostream>

using namespace std;


int array[200005];

int main() {
	int n, t;
	cin>>n>>t;
	int ans = 0;
	cin>>array[0];
	for(int i = 1;i < n;++i) {
		cin>>array[i];
		if(array[i] - array[i-1] < t) { //如果前一次与这次时间间隔不大于t天，加上相隔的时间
			ans += array[i] - array[i-1];
		} else {
			ans += t;//如果大于t天，因为快乐只能持续t天，所以答案加一
		}
	}
	cout<<ans+t<<endl;//因为最后一天的快乐肯定能持续t天，所以直接输出ans+t就好
	
	return 0;
}
