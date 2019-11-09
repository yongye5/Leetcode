/**
 * @description: 
 * @author: zp
 * @date:2019-11-09 15:05:55
 **/

#include <iostream>
#include <vector>
using namespace std;
class Solution{
public:
    /**
     * 当要删除的元素很少时，可减少很多次交换
     * 当要移除的元素越少，效率越高
     *
     */
    int removeElement(vector<int>& nums, int val){
        int i = 0;
        int n = nums.size();
        while(i < n){
            if(nums[i] == val){
                nums[i] = nums[n - 1];// 与最后一个交换 
                n--;
            }else{
                i++;
            }
        }
        return n;
    }
};
int main(){

    system("pause");
    return 0;
}