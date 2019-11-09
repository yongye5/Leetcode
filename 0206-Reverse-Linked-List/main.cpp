/**
 * @description: https://leetcode-cn.com/problems/reverse-linked-list/
 * @author: zp
 * @date:2019-11-01 16:04:41
 **/

#include <iostream>

using namespace std;
struct ListNode
{ 
    int val;
    ListNode* next;
    ListNode(int x): val(x), next(NULL){}
};

class Solution
{
public:
    /**
     * 迭代
     * Time Complexity: O(n)
     * Space Complexity: O(1)
     */
    ListNode* reverseList(ListNode* head){
        ListNode* cur = head;
        ListNode* pre = NULL;
        ListNode* next = NULL;
        while(cur != NULL){
            next = cur->next;
            cur->next = pre;
            
            pre = cur;
            cur = next;            
        }
        return pre;
    }
};


int main(){

    system("pause");
    return 0;
}