#include <iostream>
#include <string>
using namespace std;
int main()
{
	string name;
	cin >> name;
	for(auto c : name) {
		cout << c << endl;
	}
	return 0;
}
