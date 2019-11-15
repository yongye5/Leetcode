/**
 * @description: https://leetcode-cn.com/problems/reverse-string/submissions/
 * @author: zp
 * @date:2019-11-15 16:55:51
 **/

#include <iostream>
#include <vector>
using namespace std;
class Solution {
public:
    void reverseString(vector<char>& s) {
        int left = 0;
        int right = s.size() - 1;
        while(left <= right){
            swap(s[left], s[right]);
            left ++;
            right --;
        }
    }
};
int main(){

    system("pause");
    return 0;
}