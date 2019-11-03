/**
 * @description: https://leetcode-cn.com/problems/convert-sorted-array-to-binary-search-tree/
 * @author: zp
 * @date:2019-11-03 14:38:21
 **/

#include <iostream>
#include <vector>
using namespace std;
struct TreeNode{
    int val;
    TreeNode *left;
    TreeNode* right;
    TreeNode(int x):val(x), left(NULL), right(NULL){}
};

class Solution{
public:
    TreeNode* sort(vector<int>& nums, int l, int r){
        if(l > r){
            return NULL;
        }
        //int mid = (l + r) >>> 1;
        int mid = l + (r - l) / 2;
        TreeNode *root = new TreeNode(nums[mid]);
        root->left = sort(nums, l, mid - 1);
        root->right = sort(nums, mid + 1, r);
        return root;
    }
    /**
     * 递归
     *
     */
    TreeNode* sortedArrayToBST(vector<int>& nums){
        return sort(nums, 0, nums.size() - 1);
    }
};
int main(){

    system("pause");
    return 0;
}