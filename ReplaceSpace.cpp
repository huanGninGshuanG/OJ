/*
	��һ���ַ����滻ԭ�ַ����г��ֵĿո�
	���ԭ�ַ������㹻�ĳ��ȣ����ԴӺ���ǰ���������������µĿռ� 
	���ȼ���ո�����õ����ַ����ĳ��ȣ�Ȼ��ʹ������ָ�룺
		һ��ԭ�ַ�����ĩβ��һ��ָ�����ַ�����ĩβ 
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
