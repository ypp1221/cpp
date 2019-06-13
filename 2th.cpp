#include "iostream"


#include "vector"
#include "string"
using namespace std;
int main(int argc, char** argv){
	
	vector<string> s;
	s.push_back("va");
	s.push_back("2th");
	vector<string>::iterator it = s.begin();
    
	cout<<*it<<endl;
//	(*it)++;    string类型是无法执行++运算符的，int型的可以
    return 0;
}

