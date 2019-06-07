#include<iostream>
#include<algorithm>

using namespace std;

int array[100005];

int f[1002];

/*

我们可以用f[i]表示当旅行到了第i个旅馆时的方案总数。
那么我们就可以枚举所有的旅馆的位置，如果现在到的旅馆的位置和枚举的旅馆
的位置的距离在A和B之内，
那么f[i]就要加f[j]（枚举的旅馆）。最终输出f[n]即可。
*/
int main() {
	
	int a, b, n;
	cin>>a>>b>>n;
	for(int i = 1;i <= n;++i) {
		cin>>array[i];
	}
	array[n+1]=0; 
    array[n+2]=990; 
    array[n+3]=1010; 
    array[n+4]=1970;
    array[n+5]=2030;
    array[n+6]=2940;
    array[n+7]=3060;
    array[n+8]=3930;
    array[n+9]=4060;
    array[n+10]=4970;
    array[n+11]=5030;
    array[n+12]=5990;
    array[n+13]=6010;
    array[n+14]=7000; 
    n += 14;
    sort(array,array+n);
    f[1] = 1; //初始化：到达第1个旅馆的方案数只有1个 
    for(int i = 2;i <= n;++i) {
    	for(int j = 1;j <= i - 1;++j) {//枚举从1到i-1的旅馆 
    		if(array[i] - array[j] >= a && array[i] - array[j] <= b ) {
    			f[i] += f[j];
			}
		}
	}
	cout<<f[n]<<endl;
	return 0;
}
