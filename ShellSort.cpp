#include<iostream>
using namespace std;

void Print(int nums[], int len) {
	for (int i = 0; i < len; i++) {
		cout<<nums[i]<<" ";
	}
	cout<<endl;
}

void ShellSort(int nums[], int len) {
	int i, j, inc, key;
	for (int inc = len / 2; inc > 0; inc /= 2) {
		for (i = inc; i < len; i++) {
			j = i - inc;
			key = nums[i];
			while (j >= 0 && nums[j] > key) {
				nums[j + inc] = nums[j];
				j -= inc;
			}
			nums[j + inc] = key;
			
		}
		Print(nums, len);
	}
}

int main() {
	int nums[] = {7, 0, 1, 5, 2, 11, 3, 6, 9, 10, 15, 8, 4, 12, 13};
	int len = sizeof(nums) / sizeof(nums[0]);
	ShellSort(nums, len);
	return 0;
}
