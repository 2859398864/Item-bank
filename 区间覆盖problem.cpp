/*

���⣺����һ��M����һЩ����[Li��Ri]����Ҫѡ��������������ȫ����ס[0��M]���䡣
Ҫ���������١�������ܸ������0.
˼·��̰�ĵ�˼�롣�������䰴Ri�Ӵ�С����
Ȼ������һ�������[Li��Ri]���͸�����С���䡣ֱ����ȫ���ǡ�
ע��[Li��Ri]ֻ������LiС�ڵ�����Ri���ڵ�ǰ������������������������ѡ��

*/
#include <stdio.h>
#include <string.h>
#include <algorithm>
#include<iostream>
using namespace std;
struct node{
    int start;
    int end;
} q[100005], out[100005];
 
int cmp (node a, node b) {//������ܸ��ǵ�����
    return a.end > b.end;
}
int t;
int qn, outn;
int start, m;
int main() {
    cin>>t;
    while (t --) {
		qn = 0; 
		outn = 0; 
		
		start = 0;
		cin>>m;
		
		while ((cin>>q[qn].start>>q[qn].end) && q[qn].start + q[qn].end) {
		    qn ++;
		}
		sort(q, q + qn, cmp);
		while (start < m) {
		    int i;
	  		for (i = 0; i < qn; i ++) {
				if (q[i].start <= start && q[i].end > start) {
		    		start = q[i].end; //��������
		   	 		out[outn ++] = q[i];
		    		break;
				}
	    	}
	    	if (i == qn) break;//���û��һ���������������䣬ֱ�ӽ�����
		}
		if (start < m) {
			cout<<0<<endl;
		} else {
	   	 	cout<<outn<<endl;
	   	 	for (int i = 0; i < outn; i ++) {
	    		cout<<out[i].start<<" "<<out[i].end<<endl;
			}		
		}
		if (t) cout<<endl;
    }
    return 0;
}
