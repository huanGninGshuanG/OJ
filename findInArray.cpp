/*
	һ�������ά����(�����ң����ϵ�������)��Ѱ��ĳ����
	�����Ͻǿ�ʼ�ң�
		��targetС���������������һ��
		��target������������ҵ�
		��target�������������������
	��targetС���������������ߴ������²�����򷵻�false 
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
