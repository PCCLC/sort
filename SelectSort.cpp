#include<iostream>
using namespace std;

void Print(int *nums, int len) {
	for (int i = 0; i < len; i++) {
		cout << nums[i] << " ";
	}
	cout<<endl;
}

void swap(int &a, int &b) {
	int tmp = a;
	a = b;
	b = tmp;
}

void SelectSort(int nums[], int len) {
	for (int i = 0; i < len; i++) {
		int min = i;
		for (int j = i + 1; j < len; j++) {
			if (nums[min] > nums[j]) {
				min = j;
			}
		}
		if (min != i) {
			swap(nums[min], nums[i]);
		}
		Print(nums, len);
	}
}

int main() {
	int nums[] = {2, 9, 0, 1, 8, 4, 7, 5, 6, 3};
	int len = sizeof(nums) / sizeof(nums[0]);
	SelectSort(nums, len);
	return 0;
}
