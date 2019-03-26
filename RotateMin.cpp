/*
	输入一个非减排序数组的旋转，输出这个旋转数组的最小元素 
*/
#include <iostream>
#include <vector>
using namespace std;
class Solution {
public:
    int minNumberInRotateArray(vector<int> rotateArray) {
        if(rotateArray.size()==0) return 0;
		if(rotateArray.size()==1) return rotateArray[0];
		int ans=rotateArray[0];
		for(int i=1;i<rotateArray.size();++i){
			if(rotateArray[i]<rotateArray[i-1]){
				ans=rotateArray[i]; break;
			}
		} 
		return ans;
    }
};
int main(int argc, char** argv) {
	int n,x; cin>>n;
	vector<int> vec;
	for(int i=0;i<n;++i){
		cin>>x;
		vec.push_back(x);
	}
	Solution ss;
	cout<<ss.minNumberInRotateArray(vec);
	return 0;
}
