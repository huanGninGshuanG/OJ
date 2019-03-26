/*
	使用2*1的矩形覆盖2*n的矩形 
*/
#include <iostream>
using namespace std;
class Solution {
public:
    int rectCover(int n) {
		int* d=new int[n+1];
		d[0]=0; d[1]=1; d[2]=2;
		for(int i=3;i<=n;++i){
			d[i]=d[i-1]+d[i-2];
		}
		int ans=d[n];
		delete d;
		return ans;
    }
};
int main(int argc, char** argv) {
	int n; cin>>n;
	Solution ss;
	cout<<ss.rectCover(n)<<endl;
	return 0;
}
