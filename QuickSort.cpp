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

int qsort(int nums[], int low, int high, int len) {
	int pivot = nums[high];
	int i = low;
	for (int j = low; j < high; j++) {
		if (nums[j] < pivot) {
			swap(nums[j], nums[i++]);
		}		
	}
	swap(nums[high], nums[i]);
	Print(nums, len);
	return i;
}

void QuickSort(int nums[], int left, int right, int len) {
	if (left < right) {
		int mid = qsort(nums, left, right, len);
		QuickSort(nums, left, mid - 1, len);
		QuickSort(nums, mid + 1, right, len);
	}
}

int main() {
	int nums[] = {7, 0, 1, 5, 2, 11, 3, 6, 9, 10, 15, 8, 4, 12, 13};
	int len = sizeof(nums) / sizeof(nums[0]);
	QuickSort(nums, 0, len - 1, len);
	return 0;
}
