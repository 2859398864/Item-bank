#include<iostream>

using namespace std;

/*

本题最多有10^6个数，可是空间只有4000K，
只能存下10^5（也就是m的最大值）个数，
这样就不能把所有数记录下来然后排序了。那该怎么办呢？

由于题目只要求我们输出最小的m个数，不
难想到维护一个最多能存下m个数的大根堆。每读入一个数xi，
就将xi放入堆中。如果堆中数的数量大于m，就删掉大根堆的根。
这样做就能维护当前最小的m个数了。
最后，将堆里的所有数排序，依次输出即可。

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
