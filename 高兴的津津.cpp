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
		if(array[i] - array[i-1] < t) { //���ǰһ�������ʱ����������t�죬���������ʱ��
			ans += array[i] - array[i-1];
		} else {
			ans += t;//�������t�죬��Ϊ����ֻ�ܳ���t�죬���Դ𰸼�һ
		}
	}
	cout<<ans+t<<endl;//��Ϊ���һ��Ŀ��ֿ϶��ܳ���t�죬����ֱ�����ans+t�ͺ�
	
	return 0;
}
