#include <iostream>
#include <cstring>
using namespace std;
/*
    �������λ��7
    such as 700
    �����н����699 ��ȫһ��
    5789898984 �� 5699999999 ���н����ȫһ��
    ��Ϊ���һ����������һ����λΪ7�����Ͳ���Pascal���˰���
    �������ɨһ�飬�����������7���Ͱ��Ժ��ȫ�������滻Ϊ6999... 
*/ 

char a[1001];
int main() {
	int t;
    cin>>t;
    long long sum = 0, ans = 0, k, s;
    while (t--){
        ans = sum = 0;
        s = 1;
        cin>>a;
        k = strlen(a);
        for (int i = 0;i < k;++i)
        
            if (a[i]=='7') {
                a[i]='6';
                for (int j = i + 1;j < k;++j) a[j]='9';
                break;
            }
        for (int i = k - 1;i >= 0;--i)
        /* 
             ���һ�����ĸ�λ��8��9�����ټ���2^0��7
             ���һ������ʮλ��8��9�����ټ���2^1��7
             ���һ�����İ�λ��8��9�����ټ���2^2��7
             ...�Դ�����
             �Ǹ��ҹ��ɣ�����д֤��QWQ 
                */
        {
            if (a[i]>'7') sum+=s;
            s*=9;
        }
        for (int i=0;i<k;++i) {
            ans = ans*9+a[i]-'0';
        }
        cout<<ans-sum<<endl;
    }
} 
