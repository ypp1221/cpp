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
//	*it.empty();//error  解引用运算符低于 .运算符

	it->empty();
	//++*it;//error   ++运算符高于解运算符

	it++->empty();//++运算符高于->
    return 0;
}

