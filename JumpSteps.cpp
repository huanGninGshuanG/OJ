/*
	青蛙一次可以跳一级或者跳两级，问跳n级的不同跳法 
*/
#include <iostream>
using namespace std;
class Solution {
public:
    int jumpFloor(int n) {
        int* d=new int[n+1];
     	d[0]=1; d[1]=1;
		int i=2;
		while(i<=n){
			d[i]=d[i-2]+d[i-1];
			i++;
		}
		int ans=d[n];
		delete d;
		return ans;
    }
};
int main(int argc, char** argv) {
	int n;
	cin>>n;
	Solution ss;
	cout<<ss.jumpFloor(n)<<endl;
	return 0;
}
