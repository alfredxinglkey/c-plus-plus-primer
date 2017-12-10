#include <iostream>
int main()
{
	int sum = 0, val = 0;
	while(std::cin>>val) {
		sum += val;
	}
	std::cout << "输入的整数之和为：" << sum << std::endl;
	return 0;
}
