/**
 * @description: https://leetcode-cn.com/problems/move-zeroes/submissions/
 * @author: zp
 * @date:2019-11-08 09:29:35
 **/

#include <iostream>
#include <vector>
using namespace std;
class Solution {
public:
    void moveZeroes(vector<int>& nums) {
        int slow = 0;   // 
        for(int i = 0; i < nums.size(); i++){
            if(nums[i] == 0){                
                continue;
            }else{
                swap(nums[slow], nums[i]);
                slow ++;
            }
        }
    }
};
int main(){
    int arr[] = {0, 1, 0, 3, 12};
    vector<int> vec = {0, 1, 0, 3, 12};
    Solution().moveZeroes(vec);
    for(int i = 0; i < vec.size(); i++){
        cout << vec[i] << " ";
    }
    system("pause");
    return 0;
}