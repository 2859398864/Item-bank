/*
x1/x2/x3/x4.....xk    xi是正整数
1/2/1/2    结果 1/4
但加括号后
(1/2)/(1/2) 结果 1 
输入x1....xk 
是否可以通过添加括号使表达式的值为整数
k<= 10000  xi <= 10 ^ 9

无论你怎么加括号下x2都必然在分母位置，
而且其它的数都可以放在分子位置因为我们都可以这样加括号x1/(x2/x3.....xk)。
也就是说，如果一个表达式(加括号后)不是x2的倍数，
则，这个(加完括号的)表达式值肯定不是整数，
而如果一个表达式的值是x2的倍数则，
我们一定能把这个表达式写成成x1 * x3 *.....xk/ x2的形式。
换句话说，我们只要判断x1 * x3 *.....xk/ x2这个值
就可以知道它是不是能写成值为整数的表达式。
可能你会疑惑，请注意所有加括号后值能为整数的，
必定也能改写为x1 * x3 *.....xk/ x2，这是个充分必要条件！
*/
#include <stdio.h>
#define MAXN 10001
int A[MAXN];
int n;
int gcd(int a, int b){
	return b == 0? a : gcd(b, a % b);
}
int judge(int A[]){
	A[2] /= gcd(A[2],A[1]);
	for(int i = 3; i <= n; i++){
		A[2] /= gcd(A[i],A[2]);
	}
	return A[2] == 1;
}
int main(){
	while(scanf("%d",&n) != EOF){
		for(int i = 1; i<= n; i++){
			scanf("%d",A + i);
		}
		if(judge(A)){
			printf("Yes\n");
		}
		else{
			printf("No\n");
		}
	}
	return 0;
}
