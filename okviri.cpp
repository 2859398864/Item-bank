#include<iostream>
#include<cstring>
#include<cstdio>
#include<cstdlib>
using namespace std;
void print1(int n) {
    for (int i = 1; i <= n; ++i) {
    	printf("..%c.", i % 3 == 0 ? '*': '#');
	}
    printf(".\n");
}

void print2(int n) {
    char c;
	for (int i = 1; i <= n; ++i) {
        c = i % 3 == 0 ? '*' : '#';
        printf(".%c.%c", c, c);
    }
    printf(".\n");
}
void print(const char s[], int n) {
    char c;
    putchar('#');
    for (int i = 0; i < n; ++i) {
        c = (i % 3 == 0 || (i % 3 == 1 && i == n - 1)) ? '#' : '*';
        printf(".%c.%c", s[i], c);
    }
    putchar('\n');
}
int main() {
    char s[1000];
    scanf("%s", s);
    int len = strlen(s);
    print1(len);
    print2(len);
    print(s, len);
    print2(len);
    print1(len);
}
