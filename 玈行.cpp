#include<iostream>
#include<algorithm>

using namespace std;

int array[100005];

int f[1002];

/*

���ǿ�����f[i]��ʾ�����е��˵�i���ù�ʱ�ķ���������
��ô���ǾͿ���ö�����е��ùݵ�λ�ã�������ڵ����ùݵ�λ�ú�ö�ٵ��ù�
��λ�õľ�����A��B֮�ڣ�
��ôf[i]��Ҫ��f[j]��ö�ٵ��ùݣ����������f[n]���ɡ�
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
    f[1] = 1; //��ʼ���������1���ùݵķ�����ֻ��1�� 
    for(int i = 2;i <= n;++i) {
    	for(int j = 1;j <= i - 1;++j) {//ö�ٴ�1��i-1���ù� 
    		if(array[i] - array[j] >= a && array[i] - array[j] <= b ) {
    			f[i] += f[j];
			}
		}
	}
	cout<<f[n]<<endl;
	return 0;
}
