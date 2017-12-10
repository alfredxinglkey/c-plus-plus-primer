#include <iostream>
void print_range(int low, int high)
{
	if(low > high){
		print_range(high, low);	
		return;
	}	
	for(int i = low; i <= high; i++) {
		std::cout<<i<<std::endl;
	}
	return;
}
int main()
{
	int v1 = 0, v2 = 0;
	std::cout<<"请输入两个整数："<<std::endl;
	std::cin>>v1>>v2;
	print_range(v1,v2);	
	return 0;
}
