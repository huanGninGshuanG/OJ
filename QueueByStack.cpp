/*
	使用两个栈实现队列，一个用于出，一个用于入 
		队列的push操作：
			直接push进那个用于入的栈 
		队列的pop操作：
			如果用于出的栈非空直接pop即可
			若用于出的栈为空，需要先将用于入的栈全部pop到用于出的栈中，再从出的栈中pop一个数 
*/
#include <iostream>
#include <stack>
using namespace std;
class Solution
{
public:
    void push(int node) {
        stack1.push(node);
    }
    int pop() {
    	int ans;
    	if(!stack2.empty()){
    		ans=stack2.top(); stack2.pop();
		} 
		else{
			while(!stack1.empty()){
				stack2.push(stack1.top()); stack1.pop();
			}		
			ans=stack2.top(); stack2.pop();
		}
		return ans;
    }

private:
    stack<int> stack1;//in 
    stack<int> stack2;//out
};
int main(int argc, char** argv) {
	return 0;
}
