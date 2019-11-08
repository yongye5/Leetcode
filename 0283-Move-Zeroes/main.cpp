/**
 * @description: https://leetcode-cn.com/problems/move-zeroes/submissions/
 * @author: zp
 * @date:2019-11-07 22:36:49
 **/

#include <iostream>
#include <vector>
using namespace std;
class Solution {
public:
    void moveZeroes(vector<int>& nums) {
        int slow = 0;
        for(int i = 0; i < nums.size(); i++){
            if(nums[i] == 0){                
                continue;
            }else{
                nums[slow] = nums[i];
                slow ++;
            }
        }
        for(int i = slow; i < nums.size(); i ++){
            nums[i] = 0;
        }
    }
};
int main(){

    system("pause");
    return 0;
}