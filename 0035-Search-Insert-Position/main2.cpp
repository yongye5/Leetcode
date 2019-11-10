/**
 * @description: https://leetcode-cn.com/problems/search-insert-position/
 * @author: zp
 * @date:2019-11-10 22:16:56
 **/

#include <iostream>
#include <vector>
using namespace std;
class Solution{
public:
    int searchInsert(vector<int>& nums, int target){
        int l = 0;// 左边界
        int r = nums.size() - 1;
        while(l <= r){

            int mid = l + (r - l) / 2;
            if(target == nums[mid] ){
                return mid;
            }else if(target < nums[mid]){
                r = mid - 1;
            }else{
                l = mid + 1;
            }
        }
        return l;
    }
};
int main(){
    vector<int> v1 = {1, 2, 4, 5, 6,7};
    int position = Solution().searchInsert(v1, 3);
    cout << "position = " << position << endl;
    system("pause");
    return 0;
}