#include<iostream>
#include<cmath>
#include<cstring>


using namespace std;

/*

���ǿ��Խ��̵ƺͺ������ʱ���Ϊһ�飬
�ٰѵ�ǰ���ĵ�ʱ��ȥ�����һ��ĺͣ�����Եõ�����ʱ��
���·�ں���̵Ʊ任�˶��ٴΡ�
�����ǵ����������������ڵ�ǰ·����Ҫ�ȴ��ĺ��+�̵Ƶ�ʱ�䣩��
����̵Ƶ��������жϣ�������������̵���ôһ��˵����ǰ��·�ڵ�ʱ���Ǻ�ƣ�
��Ҫ�ȴ��������Ҫ�ȴ���ʱ��Ϊ��ǰ·�ڵ��̵�ʱ��
���̵�ʱ��+���ʱ��-�ڵ�ǰ·����Ҫ�ȴ��ĺ��+�̵Ƶ�ʱ�䣨�����Ǹ�������
�������·�ڵ�ʱ�����̵ƣ�����ֱ��ͨ����

*/
struct node {
	int g;
	int r;
	
}p[100005];

int dis[100005];


int main() {
	
	int n, m;
	cin>>n>>m;
	for(int i = 0;i < n - 1;++i) {
		cin>>dis[i];
	}
	for(int i = 0;i < n;++i) {
		cin>>p[i].r ;
	}
	for(int i = 0;i < n;++i) {
		cin>>p[i].g ;
	}
	int t = m;
	int ans[100005];
	for(int i = 0;i < n;++i) {
		if(i >= 1) {
			t += dis[i-1];
		} 
		int k = p[i].g + p[i].r ;
		if(t % k <= p[i].g) {
			ans[i] = t;
		} else {
			t += k - t % k;
			ans[i] = t;
			
		}
	}
	for(int i = 0;i < n;++i) {
		cout<<ans[i]<<endl;
	}
	return 0;
}
