/*
	一个有序二维数组(从左到右，从上到下有序)中寻找某个数
	从右上角开始找：
		若target小于这个数，往左移一格
		若target等于这个数则找到
		若target大于这个数，则往下找
	若target小于最左侧的数，或者大于最下侧的数则返回false 
*/
#include <iostream>
#include <vector>
using namespace std; 
class Solution {
public:
    bool Find(int target, vector<vector<int> > array) {
        if(array.size()==0) return false;
        int rows=array.size(), cols=array[0].size();
        int i=0, j=cols-1;
        bool isfind=false;
		while(j>=0&&i<=rows-1){
			//cout<<i<<" "<<j<<endl;
			if(array[i][j]>target) j--;
			else if(target>array[i][j]) i++;
			else{
				isfind=true; break;
			}
		} 
		return isfind;
    }
};
int main(int argc, char** argv) {
	int r,c,x,target; cin>>r>>c>>target;
	vector<vector<int> > array;
	for(int i=0;i<r;++i){
		vector<int> row;
		for(int j=0;j<c;++j){
			cin>>x;
			row.push_back(x);
		}
		array.push_back(row);
	}
	Solution ss;
	cout<<ss.Find(target, array)<<endl;
	return 0;
}
