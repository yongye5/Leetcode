/**
 * @description: 
 * @author: zp
 * @date:2019-11-09 17:13:46
 **/

#include <iostream>
#include <vector>
using namespace std;
class Solution {
public:
    /**
     * 移动赋值 记录次数
     *
     */
    int removeDuplicates(vector<int>& nums) {
        if(nums.size() == 0){
            return 0;
        }
        int j = 1;
        int count = 0;
        for(int i = 1; i < nums.size(); i++){
            if(nums[i] == nums[i - 1]){
                count ++;
                if(count < 2){
                    nums[j++] = nums[i];
                }
            }else{
                count = 0;
                nums[j ++] = nums[i];
            }
        }
        return j;
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