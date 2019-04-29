#include<iostream>
#include<map>
#include<cstdio>
#include<cstring>
using namespace std;
map <char,char> num;
/*

一串(<255)PASCAL语言，只有a,b,c 3个变量，而
且只有赋值语句，赋值只能是一个一位的数字或一个变量，
未赋值的变量值为0。
*/
int main(){
	char st[300];
    cin>>st;
    int len = strlen(st);
    num['a'] = num['b'] = num['c'] = '0';
        for(int i = 0;i < len;i += 5)
          if(st[i+3]>='0' && st[i+3]<='9') {
          	 num[st[i]]=st[i+3];
		  } else {
		  	num[st[i]]=num[st[i+3]];
		  }
        printf("%c %c %c",num['a'],num['b'],num['c']);
        return 0;
}

