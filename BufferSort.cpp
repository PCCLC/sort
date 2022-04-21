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

void BufferSort(int nums[], int len) {
	for (int i = 0; i < len; i++) {
		bool flag = true;
		for (int j = 0; j < len - i; j++) {
			if (nums[j + 1] < nums[j]) {
				swap(nums[j + 1], nums[j]);
				flag = false;
			}
		}
		if (flag) {
			break;
		}
		Print(nums, len);
	}
}
int main() {
	int nums[] = {2, 9, 0, 1, 8, 4, 7, 5, 6, 3};
	int len = sizeof(nums) / sizeof(nums[0]);
	BufferSort(nums, len);
	return 0;
}
