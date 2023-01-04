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

#include <iostream>
#include <string>
#include <bits/stdc++.h>
#include <map>

class AlgorithmIdeas {
public:
    bool equalFrequency(string word) {
        std::unordered_map<char, int> myMap;
        // std::unordered_map<char, int> myRepeats;
        int freqcountercounter = 0;
        int freq = 0;
        string chars = "";
        string firsts = "";
        string originalrepeats = "";
        for(auto i : word){
            if (chars.find(i) != std::string::npos){
                freq++;
                chars+=i;
                // chars += i;
            }
            if (chars.find(i) == std::string::npos){
                originalrepeats += i;
                chars += i;
            }
            // ++myRepeats[i];
            if (myMap.count(i)){
                ++myMap[i];
                freqcountercounter++;
            }
        }
        map<string ,string> :: iterator it;
        string reduced;
        // string repeats;
        for(auto it = myMap.cbegin(); it != myMap.cend(); ++it){
            reduced += it->first;
        }
        if (freq == 1 || freq == 0) {
            return true;
        }
        if (word.length()%2 != 0 && reduced.length()-originalrepeats.length() == 1) {
            return true;
        }
        if (word.length()%2 != 0 && freq%originalrepeats.length()==1) {
            return true;
        }
        if (word.length()%2 == 0 && freq%originalrepeats.length() == 1) {
            return false;
        }
        // word.length()%freqcountercounter%2 !=0
        if (reduced.length()%originalrepeats.length()%2 == 0 && word.length()%2 == 1) {
            return false;
        }
        if (freqcountercounter == 0) {
            return true;
        }
        if (word.length()%2==1 && chars.length()%freq == 0) {

        }
        if (word.length()%freq !=0) {
            if (freqcountercounter==1){
                return true;
            }
            if (freqcountercounter%word.length()==1){
                return true;
            }
            if (freqcountercounter%freq>2){
                return false;
            }
            if (freqcountercounter-1 == freq && freq>0) {
                return true;
            }
        }
        if (word.length()%2==1 word.length()%freq ==0) {

        }
//     return false;
//     }
// };
        for(auto it = myRepeats.cbegin(); it != myRepeats.cend(); ++it){
            repeats += it->first;
        }
        std::cout<<chars;
        if (freqcountercounter == 1) {
            return true;
        }
        if ((firsts != 0) && (freqcountercounter%firsts == 1)) {
            return true;
        }
        if (freqcountercounter+freq>=word.length()){
            return false;
        }
        if (chars.length() != 0 && firsts%chars.length() == 1) {
            return true;
        }
        if (freqcountercounter>reduced.length()){
            return false;
        }
        if (freq==1) {
            return true;
        }
        if (freq !=0 && (freqcountercounter%freq==1 || (freqcountercounter%2 == 0 && word.length()%freqcountercounter%2!=0))) {
            return true;
        }
        if (freq !=0 && freq==freqcountercounter && ((word.length()-1)%freq==0)) {
            if (chars.length()-freq > 1) {
                return false;
            }
            return true;
        }
        if (word.length()==reduced.length()) {
            return true;
        }
        if(chars.length()%2==0, freq%2==0) {
            return false;
        }
        if (freqcountercounter%reduced.length() == 0){
            return true;
        }
        if (chars.length()==0){
            return true;
        }
        if (freq%chars.length()!= 1) {
            return false;
        }
        if (word.length()-1==reduced.length()){
            return true;
        }
        if (chars.length()%freq==1) {
            return true;
        }
        if (freqcountercounter%2==0 && word.length()%2!=0){
            return true;
        }
        // if ((word.length()-reduced.length())%freqcountercounter
        if ((((freqcountercounter%2 != 0) == true)) && (((word.length() - reduced.length())%2==1) == true) || ((word.length()-1) == reduced.length())){
            if (freqcountercounter == word.length()-reduced.length()) {
                return true;
            }
        }
        return false;
    }
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