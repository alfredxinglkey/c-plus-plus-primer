#include <iostream>
int main()
{
	int sum = 0, val = 50;
	while(val <= 100) {
		sum += val;
		++val;
	}
	std::cout << "50到100的整数之和为：" << sum << std::endl;
return 0;
}
