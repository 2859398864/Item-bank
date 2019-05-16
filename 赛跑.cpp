#include<iostream>
using namespace std;
struct node{
	int v;
	int t;
}pn[1000], pm[1000];
int main() {
	int n, m;
	cin>>n>>m;
	for(int i = 0;i < n;++i) {
		if(i == 0) {
			cin>>pn[i].v>>pn[i].t ;
		} else {
			cin>>pn[i].v>>pn[i].t ;
			pn[i].t += pn[i-1].t ;
		}
	}
	for(int i = 0;i < m;++i) {
		if(i == 0) {
			cin>>pm[i].v>>pm[i].t ;
		} else {
			cin>>pm[i].v>>pm[i].t ;
			pm[i].t += pm[i-1].t ;
		}
	}
	int sumn = 0, summ = 0;
	int ans = 0;
	int j = 0, k = 0;
	int f1 = 0, f2 = 0;
	for(int i = 1;i <= pn[n-1].t ;++i) {
		if(i <= pn[j].t ) {
			sumn += pn[j].v;
		} else {
			j++;
			sumn += pn[j].v;
		}
		if(i <= pm[k].t ) {
			summ += pm[k].v;
		} else {
			k++;
			summ += pm[k].v;
		}
		if(sumn < summ) {
			if(sumn < summ && f2 == 1) {
				ans++;
				f2 = 0;
			}
			f1 = 1;
		} else if(sumn > summ) {
			if(sumn > summ && f1 == 1) {
				ans++;
				f1 = 0;
			}
			f2 = 1;
		}
	}
	cout<<ans<<endl;
	return 0;
}
