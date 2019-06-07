#include<iostream>

using namespace std;

/*

���������10^6���������ǿռ�ֻ��4000K��
ֻ�ܴ���10^5��Ҳ����m�����ֵ��������
�����Ͳ��ܰ���������¼����Ȼ�������ˡ��Ǹ���ô���أ�

������ĿֻҪ�����������С��m��������
���뵽ά��һ������ܴ���m�����Ĵ���ѡ�ÿ����һ����xi��
�ͽ�xi������С��������������������m����ɾ������ѵĸ���
����������ά����ǰ��С��m�����ˡ�
��󣬽��������������������������ɡ�

*/

int n, m;
int size = 0;
short int heap[10000006];
void swap(int &a, int &b) {
	int t = a;
	a = b;
	b = t;
}
void push(int e) {
	heap[++size] = e;
	int son = size, father = son / 2;
	while(heap[son] > heap[father] && father >= 1) {
		swap(heap[son], heap[father]);
		son = father, father = son / 2;
		
	}
}
void pop() {
	swap(heap[1], heap[size]);
	heap[size--] = 0;
	int father = 1, son = 2;
	while(son <= size) {
		if(son < size && heap[son] < heap[son+1]) {
			son++;
		}
		if(heap[father] < heap[son]) {
			swap(heap[father], heap[son]);
			father = son , son = father * 2;
			
		} else {
			break;
		}
	}
}
int top() {
	return heap[1];
}


int array[10000006];
int main() {
	cin>>n>>m;
	for(int i = 0;i < m;++i) {
		int num;
		cin>>num;
		push(num);
	}
	for(int i = m;i < n;++i) {
		int num;
		cin>>num;
		if(num < top()) {
			pop();
			push(num);
		}
	}
	int k = 0;
	while(size) {
		array[k++] = top();
		pop();
	}
	for(int i = k - 1;i >= 0;--i ) {
		cout<<array[i]<<endl;
	}
	return 0;
}
