/**
 * @description: https://leetcode-cn.com/problems/first-unique-character-in-a-string/
 * @author: zp
 * @date:2019-11-16 13:06:03
 **/

#include <iostream>
#include <string>
#include <vector>
using namespace std;
class Solution {
public:
    int firstUniqChar(string s) {
        vector<int> v(26);
        for(int i = 0; i < s.size(); i ++){
            v[s[i] - 'a'] ++;
        }
        for(int i = 0; i < s.size(); i ++){
            if(v[s[i] - 'a'] == 1){
                return i;
            }
        }
        return -1;
    }
};
int main(){
    string s("abcdefg");
    Solution().firstUniqChar(s);
    system("pause");
    return 0;
}