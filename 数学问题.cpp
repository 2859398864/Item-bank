/*You are given a positive integer n, 
please count how many positive integers k satisfy k^k¡Ün.
There are no more than 50 test cases. 

Each case only contains a positivse integer n in a line. 

1¡Ün¡Ü1018 
 
 
For each test case, 
output an integer indicates the number of 
positive integers k satisfy k^k ¡Ün in a line.

input 
1
4
output
1
2
*/
#include <iostream>
#include<cstdio>
#include<cmath>
using namespace std;
long long pow(long long a) {
    long long ans = 1;
    long long  b = a;
    while (b) {
        if (b & 1) ans *= a;
        a *= a;
        b >>= 1;
    }
    return ans;
}

int main()
{
    long long n;
    while(~scanf("%lld", &n)) {
        for (int i = 15; i > 0; i--) {
            if (pow(i) <= n) {
                cout << i<< endl;
                break;
            }
        }

    }
    return 0;
}
