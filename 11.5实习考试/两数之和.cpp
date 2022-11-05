#include<iostream>
#include<string>
using namespace std;

int* twoSum(int* nums,int numsSize,int target,int* returnSize){
	for(int i = 0;i < numsSize;i++){
		for(int j = i + 1;j < numsSize;j++){
			if(nums[i] + nums[j] == target){
				cout << i << " " << j;
			}
		}
	}
}

int main(){
	int numsSize = 2;
	int target = 6;
	int a[numsSize] = {3,3};
	twoSum(a,numsSize,target,NULL);
}