#include <iostream>
using namespace std;
class Solution {
public:
    int Fibonacci(int n) {
		int t[2]; t[0]=1; t[1]=1;
		if(n<2) return t[n-1];
		int i=1;
		while(i<n-1){
			t[0]=t[0]+t[1];
			t[1]=t[1]+t[0];
			i+=2;
		}
		return t[(n-1)%2];
    }
};
int main(int argc, char** argv) {
	int n;
	while(cin>>n){
		Solution ss;
		cout<<ss.Fibonacci(n)<<endl;
	}
	return 0;
}
