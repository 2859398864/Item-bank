#include<iostream>
#include<cstring>
#include<cstdlib>
#include<algorithm>
#include<cmath>
#include<map>

/*

��һ������������֮��Ӧ�ð����ֺ���Ļ��з��Ե�

�ڶ����ص���ܻ��пո�

�����������ҵĶ�β��Ժ�������и�bug��Ҳ��֪���ǲ���bug����
����ʹ��getline֮������ַ������һ��ASCLL��Ϊ13���ַ���
�������Щ�����Լ������Ϲ��˿��ǵ�һ�����Ե�û����ԭ��

*/


using namespace std;

string gs[21],ll;
int n, m, ans = 0;
int main() {
    cin>>n>>m;
    getline(cin,ll);//�����ֺ���û�õĶ����Ե�����ֹ�������
    for(int i = 1;i <= n;i++) {
    	getline(cin,gs[i]);//�������ܻ��пո�
    }
    for(int i = 1;i <= m;i++) {
        getline(cin,ll);
        if(ll[ll.size()-1] != 13) {
        	ll = ll + (char)13;//Ӧ�����bug�ķ������ڻ����ϲ��Բ������
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
