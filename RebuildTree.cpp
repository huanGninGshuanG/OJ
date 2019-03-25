/*
	根据一个树的前序遍历和中序遍历重建二叉树 
*/
#include <iostream>
#include <vector>
using namespace std;
typedef struct TreeNode{
	int val;
	TreeNode* left;
	TreeNode* right;
	TreeNode(int x):val(x), left(NULL), right(NULL){}
}TreeNode;
class Solution {
public:
    TreeNode* reConstructBinaryTree(vector<int> pre,vector<int> vin) {
		return rebuild(pre, vin, 0, pre.size()-1, 0, vin.size()-1);
    }
    TreeNode* rebuild(vector<int> pre, vector<int> vin, int pl, int pr, int il, int ir){
    	if(pl>pr) return NULL;
    	int root=pre[pl];
    	TreeNode* r=new TreeNode(root);
    	int pos;
    	for(int i=il;i<=ir;++i){
    		if(vin[i]==root){
    			pos=i; break;
			}
		}
		int lsize=pos-il;
		r->left=rebuild(pre, vin, pl+1, pl+lsize, il, il+lsize-1);
		r->right=rebuild(pre, vin, pl+lsize+1, pr, pos+1, ir);
		return r;
	}
};
int main(int argc, char** argv) {
	return 0;
}
