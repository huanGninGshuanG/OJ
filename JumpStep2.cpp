#include <iostream>
using namespace std;
class Solution {
public:
    int jumpFloorII(int n) {
		int* d=new int[n+1];
		d[0]=1; d[1]=1;
		for(int i=2; i<=n;++i){
			d[i]=0;
			for(int j=0;j<i;++j){
				d[i]+=d[j];
			}
		}
		int ans=d[n];
		delete d;
		return ans; 
    }
};
int main(int argc, char** argv) {
	int n; cin>>n;
	Solution ss;
	cout<<ss.jumpFloorII(n)<<endl;
	return 0;
}
