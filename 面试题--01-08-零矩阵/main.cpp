#include <iostream>
#include <vector>
using namespace std;
class Solution {
public:
    void setZeroes(vector<vector<int>>& matrix) {
        // 先遍历行，后遍历列
        int rows = matrix.size();
        int cols = matrix[0].size();

        vector<vector<int>> rslt;

        for(int i = 0; i < rows; i++){
            int haveZero = false;
            for(int j = 0; j < cols; j++){
                if(matrix[i][j] == 0){
                    haveZero = true;
                    break;
                }
            }
            if(haveZero){
                vector<int> t(cols, 0);
                rslt.push_back(t);
            }else{
                rslt.push_back(matrix[i]);
            }
        }

        for(int j = 0; j < cols; j++){
            int haveZero = false;
            for(int i = 0; i < rows; i++){
                if(matrix[i][j] == 0){
                    haveZero = true;
                    break;
                }
            }
            if(haveZero){
                
                for(int i = 0; i < rows; i++){
                 rslt[i][j] = 0;
      
                }
            }
        }

        matrix = rslt;
    }

};


int main(){



    reutrn 0;
}