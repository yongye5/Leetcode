#include <iostream>
#include <vector>
using namespace std;
class Solution {
public:
    // 1 �����ⷨ---����ʱ
    int pivotIndex(vector<int>& nums) {
                
        // ���α���ÿ��Ԫ�أ�����ÿ����һ��Ԫ�أ���Ҫ�����������ߵ�Ԫ��֮��
        // ��0��Ԫ�ص����Ϊ0�����һ��Ԫ�ص��Ҳ�Ϊ0
        for (size_t i = 0; i < nums.size(); i++)
        {
            int left = 0, right = 0;
            for (size_t j = 0; j < i; j++)
            {
                left += nums[j];
            }
            for (size_t j = i+ 1; j < nums.size(); j++)
            {
                right += nums[j];
            }
            if (left == right) {
                return i;
            }
        }
        return -1;

        
    }
    // 2 �����ⷨ�ĸĽ�--֤���ǿ��еģ����Ҳ�δ��ʱ��ͨ������ 
    // �ڼ��������Ҳ��Ԫ�صĺ�ʱ��������ÿһ��ѭ����Ҫѭ������һ�Σ������ȼ������еĺ�
    // Ȼ��ÿǰ��һ��Ԫ�أ�����Ӧ�ļ�ȥһ��Ԫ�أ��������ʡ����ʱ��
    int pivotIndex2(vector<int>& nums) {
        int right = 0;
        for (size_t i = 0; i < nums.size(); i++)
        {
            right += nums[i];
        }
        for (size_t i = 0; i < nums.size(); i++)
        {
            int left = 0;
            for (size_t j = 0; j < i; j++)
            {
                left += nums[j];
            }
            right -= nums[i];
            if (left == right) {
                return i;
            }
        }
        return -1;
    
    }
};


int main() {
    int r = 10 % 10;


	return 0;
}