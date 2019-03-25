/*
	用一个字符串替换原字符串中出现的空格
	如果原字符串有足够的长度，可以从后往前遍历，不用申请新的空间 
	首先计算空格个数得到新字符串的长度，然后使用两个指针：
		一个原字符串的末尾，一个指向新字符串的末尾 
*/
#include <iostream>
#include <cstring>
using namespace std;
void print_array(char* str){
	int len=strlen(str);
	for(int i=0;i<len;++i){
		cout<<str[i];
	}
}
class Solution {
public:
	void replaceSpace(char *str,int length) {
		int num=find_space(str,length);
		if(num==0) return;
		int nlen=length+num*2;
		int i=length-1, j=nlen-1;
		while(i>=0){
			if(str[i]==' '){
				str[j--]='0'; str[j--]='2'; str[j--]='%';
				i--;
			}
			else{
				str[j--]=str[i--];
			}
		}
	}
	int find_space(char* str, int length){
		int num=0;
		for(int i=0;i<length;++i){
			if(str[i]==' ') num++;
		}
		return num;
	}
};
int main(int argc, char** argv) {
	int n; cin>>n;
	char* str=new char[n];
	getchar();
	for(int i=0;i<n;++i){
		str[i]=getchar();
	}
	Solution ss;
	ss.replaceSpace(str, n);
	print_array(str);
	return 0;
}
