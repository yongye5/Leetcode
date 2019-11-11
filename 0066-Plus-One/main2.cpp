/**
 * @description: https://leetcode-cn.com/problems/plus-one/submissions/
 * @author: zp
 * @date:2019-11-11 10:37:51
 **/

#include <iostream>
#include <vector>
using namespace std;
class Solution {
public:
    vector<int> plusOne(vector<int>& digits) {
        vector<int>::reverse_iterator  iter;
        for(iter = digits.rbegin(); iter != digits.rend(); iter ++){
            (*iter) ++;
            *iter = (*iter) % 10;
            if(*iter != 0){
                return digits;
            }
        }
        vector<int> v1(digits.size() + 1, 0);
        v1[0] = 1;
        return v1;
    }
};
int main(){
    vector<int> v = {1, 2, 3, 4};
    Solution().plusOne(v);
    system("pause");
    return 0;
}