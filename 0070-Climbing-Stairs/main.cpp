#include <iostream>
#include <vector>
using namespace std;
class Solution{
private:
vector<int> vec;
    int calcWays(int n){
        if(n == 1 ){
            return 1;
        }
        if(n == 2){
            return 2;
        }
        if(vec[n] == -1){
            vec[n] = calcWays(n - 1) + calcWays(n - 2);
        }
        return vec[n];
    }
public:
    int climbStairs(int n){
        vec = vector<int>(n + 1, -1);
        return calcWays(n);
    }
    // 打印记录的vec值
    void print(){
        for(int i = 0; i < vec.size(); i++){
            cout << vec[i] << " ";
        }
    } 
};
// 运用记忆化搜索的方法
int main(){
    Solution s;
    int value = s.climbStairs(10);
    cout << "value = " << value << endl;
    s.print();
    system("pause");
    return 0;
}
