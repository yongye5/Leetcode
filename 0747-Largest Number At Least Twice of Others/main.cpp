#include <iostream>
#include <vector>
using namespace std;
class Solution {
public:
    int dominantIndex(vector<int>& nums) {
        int max = 0, index = 0;
        for (int i = 0; i < nums.size(); i++){
            if(max < nums[i]){
                max = nums[i];
                index = i;
            }
        }
        for (int i = 0; i < nums.size(); i++){
            if(nums[i] == max){
                continue;
            }
            if(nums[i] * 2 > max){
                return -1;
            }
        }
        return index;
    }
};

// ����������˼·����һ�����ȱ���һ���ҵ������������������Ȼ���ٱ����Ƚ�
// �ڶ�����  ͨ��һ�α����ҵ����ĺ͵ڶ�������֣�Ȼ��Ƚ�����
int main() {
    int r = 10 % 10;


	return 0;
}