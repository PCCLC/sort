#include<iostream>
using namespace std;

void Print(int *nums, int len) {
	for (int i = 0; i < len; i++) {
		cout << nums[i] << " ";
	}
	cout<<endl;
}

void InsertSort(int nums[], int len) {
	for (int i = 1; i < len; i++) {
		int key = nums[i];
		int j = i - 1;
		while (j >= 0 && key < nums[j]) {
			nums[j + 1] = nums[j];
			j--;
		}
		nums[j + 1] = key;
		Print(nums, len);
	}
}

int main() {
	int nums[] = {2, 9, 0, 1, 8, 4, 7, 5, 6, 3};
	int len = sizeof(nums) / sizeof(nums[0]);
	InsertSort(nums, len);
	return 0;
}
