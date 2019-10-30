/**
 * @description: 
 * @author: zp
 * @date:2019-10-30 15:49:50
 **/

#include <iostream>
#include <vector>
using namespace std;
class Solution{
public:
    // 用动态规划的思路
    // Time Complxity: O(n)
    // Space Complexity: O(n)
    int climbStairs(int n){
        vector<int> memo = vector<int>(n + 1, -1);
        memo[1] = 1;
        memo[2] = 2;
        for (size_t i = 3; i <= n; i++)
        {
            memo[i] = memo[i - 1] + memo[i - 2];
        }
        return memo[n];
    }
};
int main(){
    Solution s;
    cout << s.climbStairs(3) << endl;
    cout << s.climbStairs(10) << endl;
    system("pause");
    return 0;
}