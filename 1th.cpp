#include "iostream"
#include "string"
#include "vector"
using namespace std;
int main(){
    
	vector<vector<string>> file;

	string s("Hello World!");
	decltype(s.size()) length = 0;
	for(auto i: s){
		if(ispunct(i)){
			++length;
		}
	}
	cout<<length<<endl;
	
    return 0;
}

