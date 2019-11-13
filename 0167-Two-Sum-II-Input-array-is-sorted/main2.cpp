/**
 * @description: https://leetcode-cn.com/problems/two-sum-ii-input-array-is-sorted/submissions/
 * @author: zp
 * @date:2019-11-13 22:41:13
 **/

#include <iostream>
#include <vector>
using namespace std;
class Solution {
public:
    /**
     * 双指针对撞法  时间复杂度 O(n)  空间复杂度O(1)
     *
     */
    vector<int> twoSum(vector<int>& numbers, int target) {
        vector<int> ret;
        int l = 0; 
        int r= numbers.size() - 1;
        while(l < r){
            int val = numbers[l] + numbers[r];
            if(val == target ){
                ret.push_back(l + 1);
                ret.push_back(r + 1);
                return ret;
            }else if(val < target){
                l++;
            }else{
                r--;
            }
        }
        return ret;
    }
};
int main(){

    system("pause");
    return 0;
}