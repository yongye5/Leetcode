#include <iostream>
#include <vector>
using namespace std;
class Solution {
public:
    int dominantIndex(vector<int>& nums) {
        int max = 0, index = 0;
        for (int i = 0; i < nums.size(); i++){
            if(max < nums[i]){
                max = nums[i];
                index = i;
            }
        }
        for (int i = 0; i < nums.size(); i++){
            if(nums[i] == max){
                continue;
            }
            if(nums[i] * 2 > max){
                return -1;
            }
        }
        return index;
    }
};

// 本题有两种思路，第一种是先遍历一遍找到最大数和它的索引，然后再遍历比较
// 第二种是  通过一次遍历找到最大的和第二大的数字，然后比较它们
int main() {
    int r = 10 % 10;


	return 0;
}