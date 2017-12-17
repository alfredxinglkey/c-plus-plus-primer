#include <iostream>
#include <string>
using namespace std;
int main()
{
	string s("Hello, world!!!!");
	decltype(s.size()) punct_cnt = 0;
	for(auto c : s) {
		if(ispunct(c)) {
			++punct_cnt;
		}
	}
	cout << s << "中有" << punct_cnt << "个标点符号" << endl;
	return 0;
}
