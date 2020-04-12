#include <iostream>
#include <vector>
using namespace std;
class Solution {
public:
    // 1 暴力解法---但超时
    int pivotIndex(vector<int>& nums) {
                
        // 依次遍历每个元素，并且每遍历一次元素，都要计算左右两边的元素之和
        // 第0个元素的左边为0，最后一个元素的右侧为0
        for (size_t i = 0; i < nums.size(); i++)
        {
            int left = 0, right = 0;
            for (size_t j = 0; j < i; j++)
            {
                left += nums[j];
            }
            for (size_t j = i+ 1; j < nums.size(); j++)
            {
                right += nums[j];
            }
            if (left == right) {
                return i;
            }
        }
        return -1;

        
    }
    // 2 暴力解法的改进--证明是可行的，而且并未超时，通过测试 
    // 在计算索引右侧的元素的和时，并不用每一次循环都要循环计算一次，可以先计算所有的和
    // 然后每前进一个元素，就相应的减去一个元素，这样会节省不少时间
    int pivotIndex2(vector<int>& nums) {
        int right = 0;
        for (size_t i = 0; i < nums.size(); i++)
        {
            right += nums[i];
        }
        for (size_t i = 0; i < nums.size(); i++)
        {
            int left = 0;
            for (size_t j = 0; j < i; j++)
            {
                left += nums[j];
            }
            right -= nums[i];
            if (left == right) {
                return i;
            }
        }
        return -1;
    
    }
};


int main() {
    int r = 10 % 10;


	return 0;
}