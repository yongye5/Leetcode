/**
 * @description: 
 * @author: zp
 * @date:2019-11-15 17:00:49
 **/

#include <iostream>
#include <vector>
using namespace std;
class Solution {
public:
    void reverseRecursion(vector<char>& s, int l, int r){
        if(l >= r){
            return;
        }
        swap(s[l], s[r]);
        reverseRecursion(s, ++l, --r);
    }
    void reverseString(vector<char>& s) {
        reverseRecursion(s, 0, s.size() - 1);
    }
};
int main(){

    system("pause");
    return 0;
}