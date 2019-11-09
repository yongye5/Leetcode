/**
 * @description: 
 * @author: zp
 * @date:2019-11-09 15:01:51
 **/

#include <iostream>
#include <vector>
using namespace std;
class Solution{
public:
/**
 *
 * 交换
 */
    int removeElement(vector<int>& nums, int val){
        int slow = 0;
        for (size_t i = 0; i < nums.size(); i++)
        {
            if(nums[i] != val){
                swap(nums[i], nums[slow++]);
            }
        }
        return slow;
    }
};
int main(){

    system("pause");
    return 0;
}