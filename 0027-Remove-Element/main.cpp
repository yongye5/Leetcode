/**
 * @description: https://leetcode-cn.com/problems/remove-element/
 * @author: zp
 * @date:2019-11-09 14:54:51
 **/

#include <iostream>
#include <vector>
using namespace std;
class Solution{
public:
/**
 * 时间复杂度 O(n) 
 * 空间复杂度 O(1)
 * 快慢指针， 进行替换
 */
    int removeElement(vector<int>& nums, int val){
        int slow = 0;
        for (size_t i = 0; i < nums.size(); i++)
        {
            if(nums[i] != val){
                nums[slow++] = nums[i];
            }
        }
        return slow;
    }
};
int main(){

    system("pause");
    return 0;
}