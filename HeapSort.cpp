#include<iostream>
using namespace std;

void Print(int nums[], int len) {
	for (int i = 0; i < len; i++) {
		cout<<nums[i]<<" ";
	}
	cout<<endl;
}

void swap(int &a, int &b) {
	int tmp = a;
	a = b;
	b = tmp;
}


void heapify(int nums[], int len, int i) {
	int largest = i;
	int lson = 2 * i + 1;
	int rson = 2 * i + 2;
	
	if (lson < len && nums[largest] < nums[lson]) {
		largest = lson;
	}
	
	if (rson < len && nums[largest] < nums[rson]) {
		largest = rson;
	}
	
	if (largest != i) {
		swap(nums[largest], nums[i]);
		heapify(nums, len, largest);
	}
}

void HeapSort(int nums[], int len) {
	int i;
	for (i = len / 2; i >= 0; i--) {
		heapify(nums, len, i);
	}
	
	for (i = len - 1; i > 0; i--) {
		swap(nums[i], nums[0]);
		heapify(nums, i, 0);
	}
}

int main() {
	int nums[] = {7, 0, 1, 5, 2, 11, 3, 6, 9, 10, 15, 8, 4, 12, 13};
	int len = sizeof(nums) / sizeof(nums[0]);
	HeapSort(nums, len);
	Print(nums, len);
	return 0;
}
