#include <iostream>
#include <string>
using namespace std;
int main()
{
	string str1, str2;
	cin >> str1 >> str2;
	if(str1 == str2) {
		cout << "两个字符串相等！" << endl;
	} else {
		cout << "较大的字符串是： " << ((str1 > str2) ? str1 : str2) << endl;
	}
	return 0;
}
