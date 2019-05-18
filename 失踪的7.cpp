#include <iostream>
#include <cstring>
using namespace std;
/*
    如果有数位是7
    such as 700
    其运行结果和699 完全一致
    5789898984 和 5699999999 运行结果完全一致
    因为如果一个数字中有一个数位为7，它就不是Pascal数了啊）
    把这个数扫一遍，所以如果发现7，就把以后的全部内容替换为6999... 
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
             如果一个数的个位是8或9，就少减了2^0个7
             如果一个数的十位是8或9，就少减了2^1个7
             如果一个数的百位是8或9，就少减了2^2个7
             ...以此类推
             是个找规律，不想写证明QWQ 
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
