/**
 * @description: https://leetcode-cn.com/problems/reverse-linked-list/
 * @author: zp
 * @date:2019-11-01 16:26:55
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
     * 递归
     * Time Complexity: O(n)
     * Space Complexity: O(n)
     */
    ListNode* reverseList(ListNode* head){
        if(head == NULL || head->next == NULL){
            return head;
        }

        ListNode* p = reverseList(head->next);
        head->next->next = head;
        head->next = NULL;
        return p;
    }
};
int main(){

    system("pause");
    return 0;
}