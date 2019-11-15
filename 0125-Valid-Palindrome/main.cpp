/**
 * @description: https://leetcode-cn.com/problems/valid-palindrome/
 * @author: zp
 * @date:2019-11-14 09:41:10
 **/

#include <iostream>

using namespace std;
class Solution {
public:
    bool isPalindrome(string s) {
        int left = 0;
        int right = s.size() - 1;
        while(left <= right ){
            if(isalnum(s[left]) == 0){
                left++;
            }else
            if(isalnum(s[right]) == 0){
                right--;
            }else
            if(toupper(s[left]) != toupper(s[right])){
                return false;
            }else {
            left++;
            right--;}
        }
        return true;
    }
};
int main(){
    string s("******");
    Solution().isPalindrome(s);
    system("pause");
    return 0;
}