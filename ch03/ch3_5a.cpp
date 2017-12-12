#include <iostream>
#include <string>
using namespace std;
int main()
{
	string word, result;
	while(cin >> word) {
		result += word;	
	}
	cout << result << endl;
	return 0;
}
