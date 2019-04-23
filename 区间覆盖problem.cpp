/*

题意：给定一个M，和一些区间[Li，Ri]。。要选出几个区间能完全覆盖住[0，M]区间。
要求数量最少。如果不能覆盖输出0.
思路：贪心的思想。。把区间按Ri从大到小排序。
然后遇到一个满足的[Li，Ri]，就更新缩小区间。直到完全覆盖。
注意[Li，Ri]只有满足Li小于等于且Ri大于当前覆盖区间左端这个条件。才能选中

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
 
int cmp (node a, node b) {//按最大能覆盖到排序
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
		    		start = q[i].end; //更新区间
		   	 		out[outn ++] = q[i];
		    		break;
				}
	    	}
	    	if (i == qn) break;//如果没有一个满足条件的区间，直接结束。
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
