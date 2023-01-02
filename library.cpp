#include <iostream>
#include <vector>

using namespace std;

struct ListNode {
    int val;
    ListNode *next;
    ListNode() : val(0), next(nullptr) {}
    ListNode(int x) : val(x), next(nullptr) {}
    ListNode(int x, ListNode *next) : val(x), next(next) {}
};

class ListNodes {
public:
    ListNode* addTwoNumbers(ListNode* l1, ListNode* l2) {
        ListNode* hold=new ListNode();
        ListNode* temp=hold;
        int carry = 0;
        int sum;
        if (l1==NULL) {
            return l2;
        }
        if (l2==NULL) {
            return l1;
        }
        do {
            sum=0;
            sum+=carry;
            if (l1!=NULL && l2 != NULL) {
                sum+=l1->val;
                l1=l1->next;
                sum+=l2->val;
                l2=l2->next;
            }
            else if(l1!=NULL){
                sum+=l1->val;
                l1=l1->next;
            }
            else if(l2!=NULL){
                sum+=l2->val;
                l2=l2->next;
            }
            carry=sum/10;
            ListNode* newnode=new ListNode(sum%10);
            temp->next=newnode;
            temp=temp->next;
        } while(l1!=NULL || l2!=NULL || carry>0);
        return hold->next;
    }
};

class Vectors {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
        vector<int> vectorSolution;
        for (int i=0; i<nums.size(); i++) {
            for (int j=i+1; j<nums.size(); j++) {
                if (nums[i]+nums[j] == target) {
                    vectorSolution.push_back(i);
                    vectorSolution.push_back(j);
                }
            }
        }
        std::cout<<"Hooray!";
        return vectorSolution;
    }
};

using namespace std;

int main() {
    std::vector<int> nums { 1,2,3 };
    int target = 4;
    Vectors A;
    A.twoSum(nums, target);
}