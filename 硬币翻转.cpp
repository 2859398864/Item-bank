#include<iostream>
using namespace std;
/*
数学方法：第i次翻转就是翻转除了第i个硬币以外的所有硬币。

要让所有硬币翻过来，要做的就是每个硬币翻奇数次。

总共六个硬币，每次翻五个。

那么情况就只有每个硬币翻一次、三次、五次。

但是每次只能翻五个，不能多不能少，所以就要求总共翻的次数是5的整倍数。

所以就是每个硬币翻五次。总共翻了5x6=30次

每次翻5个

30/5=6次

答：最少翻六次

*/
bool a[maxn];
int n;
int main()
{
    cin>>n;
    cout<<n<<endl;//因为相当于只翻一枚，所以翻n次即可
    for(int i=1;i<=n;i++){//i表示这是第几次翻
        for(int j=1;j<=n;j++){//表示当前翻得是第几枚硬币
            if(j!=i){
                if(a[j])a[j]=0;
                else a[j]=1;
            }
            cout<<a[j];
        }
        cout<<endl;
    }
    return 0;
}
