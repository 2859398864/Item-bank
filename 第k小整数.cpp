#include <iostream>
#include <cstring>
#include<set>
using namespace std;
int main() {
	set <int> arr;
	int n, k;
	cin>>n>>k;
	while(n--) {
		int a;
		cin>>a;
		arr.insert(a);
	}
	set<int>::iterator it; //����ǰ�������
	if(k > arr.size()) {
		cout<<"NO RESULT"<<endl;
		return 0;
	}
 	k--;
	for(it = arr.begin(); k; it++, k--) ;
	cout << *it;
	
}
