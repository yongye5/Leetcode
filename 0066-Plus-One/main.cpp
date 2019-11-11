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
        vector<int> v1;
        int carry = 1;
        vector<int>::reverse_iterator  iter;
        for(iter = digits.rbegin(); iter != digits.rend(); iter ++){
            int sum = *iter + carry ;
            carry = sum / 10;
            v1.insert(v1.begin(), sum % 10);
        }
        if(carry == 1){
            v1.insert(v1.begin(), 1);
        }
        return v1;
    }
};
int main(){

    system("pause");
    return 0;
}