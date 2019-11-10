/**
 * @description: https://leetcode-cn.com/problems/search-insert-position/
 * @author: zp
 * @date:2019-11-10 22:07:19
 **/

#include <iostream>
#include <vector>
using namespace std;
class Solution{
public:
    int searchInsert(vector<int>& nums, int target){
        int i = 0;
        for(i = 0; i < nums.size(); i ++){
            if(target <= nums[i]){
                return i;
            }
        }
        return i;
    }
};
int main(){

    system("pause");
    return 0;
}