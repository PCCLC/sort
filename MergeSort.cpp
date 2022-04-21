#include<iostream>
using namespace std;

void Print(int nums[], int len) {
	for (int i = 0; i < len; i++) {
		cout<<nums[i]<<" ";
	}
	cout<<endl;
}

void merge(int nums[], int temp[], int left, int mid, int right) {
	int i = left;
	int j = mid + 1;
	int t = left;
	while (i <= mid && j <= right) {
		if (nums[i] < nums[j]) {
			temp[t++] = nums[i++];
		}
		else {
			temp[t++] = nums[j++];
		}
	}
	
	while (i <= mid) {
		temp[t++] = nums[i++];
	}
	
	while (j <= right) {
		temp[t++] = nums[j++];
	}
	
	while (left <= right) {
		nums[left] = temp[left];
		left++;
	}
}

void msort(int nums[], int temp[], int left, int right) {
	if (left < right) {
		int mid = (right - left) / 2 + left;
		msort(nums, temp, left, mid);
		msort(nums, temp, mid + 1, right);
		merge(nums, temp, left, mid, right);
	}
}

void MergeSort(int nums[], int len) {
	int *temp = new int[len];
	if (temp) {
		msort(nums, temp, 0, len - 1);
		delete []temp;
	} else {
		cout<<"·ÖÅäÊ§°Ü"<<endl;
	}
} 

int main() {
	int nums[] = {7, 0, 1, 5, 2, 11, 3, 6, 9, 10, 15, 8, 4, 12, 13};
	int len = sizeof(nums) / sizeof(nums[0]);
	MergeSort(nums, len);
	Print(nums, len);
	return 0;
}
