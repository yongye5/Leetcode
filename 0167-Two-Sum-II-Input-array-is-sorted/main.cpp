/**
 * @description: https://leetcode-cn.com/problems/two-sum-ii-input-array-is-sorted/submissions/
 * @author: zp
 * @date:2019-11-13 22:22:04
 **/

#include <iostream>
#include <vector>
using namespace std;
class Solution {
public:
    /**
     * 二分查找法  复杂度为 O(nlogn)
     *
     */
    vector<int> twoSum(vector<int>& numbers, int target) {
        vector<int> res;
        for(int i = 0; i < numbers.size() - 1; i++){
            int val = target - numbers[i];
            int l = i + 1;
            int r = numbers.size() - 1;
            while(l <= r){
                int mid = l + (r - l) / 2;
                if(numbers[mid] == val){
                    res.push_back(i + 1);
                    res.push_back(mid + 1);
                    return res;
                }else if(val < numbers[mid]){
                    r = mid - 1;
                }else{
                    l = mid + 1;
                }
            }
        }
        return res;
    }
};
int main(){
    vector<int> v = {2, 7, 13, 15};
    vector<int> ret = Solution().twoSum(v, 9);
    for(int i = 0; i < ret.size(); i ++){
        cout << ret[i] << " ";
    }
    system("pause");
    return 0;
}