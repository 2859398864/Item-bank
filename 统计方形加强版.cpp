#include<iostream>
#include<algorithm>
using namespace std;

/*


������=��������+��������
��������о��εĸ���x������������εĸ���y����x-y��Ϊ�����εĸ�����
���о��εĸ���xΪ 

 2    2
C    C     
 n+1  m+1

�����εĸ���yΪ

�� i=1 �� min(n,m)  (n-i+1)(m-i+1)  �ĺ� 
 
*/
int main() {
	long long n, m;
	cin>>n>>m;
	long long x = n * (n + 1) / 2 * m * (m + 1) / 2;
	long long y = 0;
	int minn = min(n,m);
	for(int i = 1;i <= minn;++i) {
		y += (n - i + 1) * (m - i + 1);
	}
	cout<<y<<" "<<x-y<<endl;
	return 0;
}
