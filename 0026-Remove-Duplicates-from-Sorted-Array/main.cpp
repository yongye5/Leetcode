/**
 * @description: https://leetcode-cn.com/problems/remove-duplicates-from-sorted-array/submissions/
 * @author: zp
 * @date:2019-11-09 15:48:18
 **/

#include <iostream>
#include <vector>
using namespace std;
class Solution {
public:
    int removeDuplicates(vector<int>& nums) {
        if(nums.size() == 0){
            return 0;
        }
        int slow = 0;
        for(int i = 0; i < nums.size(); i++){
            if(nums[i] != nums[slow]){
                nums[++slow] = nums[i];
            }
        }
        return slow +1;
    }
};
int main(){

    system("pause");
    return 0;
}