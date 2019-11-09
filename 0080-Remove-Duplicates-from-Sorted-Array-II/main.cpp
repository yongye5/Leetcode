/**
 * @description: https://leetcode-cn.com/problems/remove-duplicates-from-sorted-array-ii/submissions/
 * @author: zp
 * @date:2019-11-09 16:47:39
 **/

#include <iostream>
#include <vector>
using namespace std;
class Solution {
public:
    /**
     * 快慢指针方法
     * 题目中允许排序数组中每个元素最多出现两次，所以前两个元素一定满足要求
     * 接下来，快指针每向前走一步，与当前慢指针指向的前两个元素比较
     * 
     * 意思就是  快指针用来遍历数组，慢指针用来确定满足要求的元素 
     */
    int removeDuplicates(vector<int>& nums) {
        int i = 0;
        for(int j = 0; j < nums.size(); j ++){
            if(i < 2 || nums[j] > nums[i - 2]){
                nums[i] = nums[j];
                i ++;
            }
        }
        return i;
    }
};
int main(){
    vector<int> vec = {1, 1, 1, 2, 2, 2, 2, 2, 4};
    int n = Solution().removeDuplicates(vec);
    for(int i = 0; i < n; i ++){
        cout << vec[i] << " ";
    }
    cout << endl;
    system("pause");
    return 0;
}