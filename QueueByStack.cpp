/*
	ʹ������ջʵ�ֶ��У�һ�����ڳ���һ�������� 
		���е�push������
			ֱ��push���Ǹ��������ջ 
		���е�pop������
			������ڳ���ջ�ǿ�ֱ��pop����
			�����ڳ���ջΪ�գ���Ҫ�Ƚ��������ջȫ��pop�����ڳ���ջ�У��ٴӳ���ջ��popһ���� 
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
