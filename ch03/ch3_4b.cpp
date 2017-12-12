#include <iostream>
#include <string>
using namespace std;
int main()
{
	string str1, str2;
	cin >> str1 >> str2;
	if(str1.size() == str2.size()) {
		cout << "两个字符串等长！" << endl;
	} else {
		cout << "两个字符串中较长的是： " << ((str1.size() > str2.size()) ? str1 : str2) << endl;
	}
	return 0;
}
