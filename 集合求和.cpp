#include<iostream>
#include<algorithm>
#include<cstring>
#include<cmath>
using namespace std;
/*

给定一个集合s（集合元素数量<=30），求出此集合所有子集元素之和。
可以很容易的发现每个元素在集合中都各出现了2^(n-1)次。如此，我们得到一个公式：
设元素个数为n，所有元素之和为sum，自己之和为ans，则：

ans = sum * 2^(n-1)。
*/
int main() {
	int a[1000];
	int i = 0;
	long long sum = 0;
	while(cin>>a[i]) {
		sum += a[i];
		i++;
	}
	sum *= pow(2,i-1);
	cout<<sum<<endl;
	return 0;
}
