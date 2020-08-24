

#include <iostream>
#include <vector>
using namespace std;
class Solution {
public:
    /*
      原地旋转
    */
    void rotate(vector<vector<int>>& matrix) {
        int n = matrix.size();
        for (size_t i = 0; i < n / 2; i++)
        {
            for (size_t j = 0; j < (n + 1) / 2; j++)
            {
                int tmp = matrix[i][j];
                matrix[i][j] = matrix[n - j - 1][i];
                matrix[n - j - 1][i] = matrix[n - i - 1][n - j - 1];
                matrix[n - i - 1][n - j - 1] = matrix[j][n - i - 1];
                matrix[j][n - i - 1] = tmp;
            }
        }
    }
    /*
        用翻转代替旋转
    */
    void rotate2(vector<vector<int>>& matrix) {
        int n = matrix.size();
        // 水平翻转
        for (size_t i = 0; i < n / 2; i++)
        {
            for (size_t j = 0; j < n; j++)
            {
                swap(matrix[i][j], matrix[n - i - 1][j]);
            }
        }
        // 主对角线翻转
        for (size_t i = 0; i < n; i++)
        {
            for (size_t j = 0; j < i; j++)
            {
                swap(matrix[i][j], matrix[j][i]);
            }
        }
    }
    // 使用辅助数组
    void rotate3(vector<vector<int>>& matrix) {
        int n = matrix.size();
        auto new_matrix = matrix;
        for (int i = 0; i < n; i++) {
            for (int j = 0; j < matrix[i].size(); j++) {
                new_matrix[j][n - i - 1] = matrix[i][j];
            }
        }
        matrix = new_matrix;
    }
};
int main()
{
    vector<vector<int>> matrix{ {1,2,3,4},{5,6,7,8}, {9,10,11,12},{13,14,15,16} };
    int n = matrix.size();
    for (size_t i = 0; i < n; i++)
    {
        for (size_t j = 0; j < n; j++)
        {
            cout << matrix[i][j] << "\t";
        }
        cout << endl;
    }
    cout << "********************************************" << endl;
    Solution s;
    s.rotate3(matrix);
    for (size_t i = 0; i < n; i++)
    {
        for (size_t j = 0; j < n; j++)
        {
            cout << matrix[i][j] << "\t";
        }
        cout << endl;
    }
    return 0;
}

// 运行程序: Ctrl + F5 或调试 >“开始执行(不调试)”菜单
// 调试程序: F5 或调试 >“开始调试”菜单

// 入门使用技巧: 
//   1. 使用解决方案资源管理器窗口添加/管理文件
//   2. 使用团队资源管理器窗口连接到源代码管理
//   3. 使用输出窗口查看生成输出和其他消息
//   4. 使用错误列表窗口查看错误
//   5. 转到“项目”>“添加新项”以创建新的代码文件，或转到“项目”>“添加现有项”以将现有代码文件添加到项目
//   6. 将来，若要再次打开此项目，请转到“文件”>“打开”>“项目”并选择 .sln 文件
