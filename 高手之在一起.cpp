#include<iostream>
#include<cstring>
#include<cstdlib>
#include<algorithm>
#include<cmath>
#include<map>

/*

第一，读入完数字之后应该吧数字后面的换行符吃掉

第二，地点可能会有空格

第三，经过我的多次测试后发现落谷有个bug（也不知道是不是bug），
就是使用getline之后会在字符后面加一个ASCLL码为13的字符，
这就是有些人在自己机子上过了可是第一个测试点没过的原因

*/


using namespace std;

string gs[21],ll;
int n, m, ans = 0;
int main() {
    cin>>n>>m;
    getline(cin,ll);//把数字后面没用的东西吃掉，防止读入出错
    for(int i = 1;i <= n;i++) {
    	getline(cin,gs[i]);//地名可能会有空格
    }
    for(int i = 1;i <= m;i++) {
        getline(cin,ll);
        if(ll[ll.size()-1] != 13) {
        	ll = ll + (char)13;//应对这个bug的方法，在机子上测试不用这句
		}
		
        for(int j = 1;j <= n;j++) {
        	if(ll == gs[j]) {
            	ans++;
            	break;
            }
        }  
    }
    cout<<ans;
    return 0;
}
