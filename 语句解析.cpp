#include<iostream>
#include<map>
#include<cstdio>
#include<cstring>
using namespace std;
map <char,char> num;
/*

һ��(<255)PASCAL���ԣ�ֻ��a,b,c 3����������
��ֻ�и�ֵ��䣬��ֵֻ����һ��һλ�����ֻ�һ��������
δ��ֵ�ı���ֵΪ0��
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

