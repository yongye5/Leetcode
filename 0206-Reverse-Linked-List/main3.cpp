/**
 * @description: 
 * @author: zp
 * @date:2019-11-01 16:49:29
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
     * 头插法
     * Time Complexity: O(n)
     * Space Complexity: O(1)
     */
    ListNode* reverseList(ListNode* head){
        ListNode* dummyNode = new ListNode(-1);
        ListNode* cur = head;
        while(cur != NULL){
            ListNode* next = dummyNode->next;
            dummyNode->next = cur;            
            cur = cur->next;
            dummyNode->next->next = next;
        }
        return dummyNode->next;
    }
};
int main(){

    system("pause");
    return 0;
}