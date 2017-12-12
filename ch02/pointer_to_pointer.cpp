#include <iostream>
int main()
{
	int ival = 1024;
	int *pi = &ival;
	int **ppi = &pi;
	std::cout << "直接取值：" << ival << "\n"
			  << "通过pi取值：" << *pi << "\n"
			  << "通过ppi取值：" << **ppi << std::endl;
	return 0;
}
