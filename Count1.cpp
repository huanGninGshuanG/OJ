/*
	计算一个二进制中1的个数(包含负数) 
*/
#include <iostream>
using namespace std;
class Solution {
public:
    int NumberOf1(int n) {
     	int ans=0;
        while(n){
        	ans++;
        	n=n&(n-1);
		}
		return ans;
    }
};
int main(int argc, char** argv) {
	int n; cin>>n;
	Solution ss;
	cout<<ss.NumberOf1(n)<<endl;
	return 0;
}
