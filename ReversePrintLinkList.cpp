/*
	ƒÊ–Ú¥Ú”°¡¥±Ì£∫ΩË÷˙’ª 
*/
#include <iostream>
#include <vector>
#include <stack>
using namespace std;
struct ListNode {
    int val;
    struct ListNode *next;
    ListNode(int x):
        val(x), next(NULL){}
};
class Solution {
public:
    vector<int> printListFromTailToHead(ListNode* head) {
    	vector<int> ans;
        if(head==NULL) return ans;
        ListNode* cur=head;
        stack<int> s; 
        while(cur!=NULL){
        	s.push(cur->val);
        	cur=cur->next;
		}
		while(!s.empty()){
			ans.push_back(s.top()); s.pop();
		}
		return ans;
    }
};
void create_linklist(int n, ListNode* head){
	ListNode* rear=head;
	int x;
	for(int i=0;i<n;++i){
		cin>>x;
		ListNode* cur=new ListNode(x);
		rear->next=cur;
		rear=cur;
	}
}
int main(int argc, char** argv) {
	int n; cin>>n;
	ListNode* head=new ListNode(-1);
	create_linklist(n, head);
	Solution ss;
	vector<int> vec=ss.printListFromTailToHead(head->next);
	for(int i=0;i<n;++i){
		cout<<vec[i]<<" ";
	}
	return 0;
}
