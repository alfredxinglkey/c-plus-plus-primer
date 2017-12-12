#include <iostream>
#include <string>
#include "Sales_data.h"
int main()
{
	Sales data1, data2;
	double price  = 0;
	//读入data1
	std::cin >> data1.bookNo >> data1.units_sold >>price;
	data1.revenue = data1.units_sold * price; 
	//读入data2	
	std::cin >> data2.bookNo >> data2.units_sold >>price;
	data2.revenue = data2.units_sold * price; 
	//检查data1和data2的isbn是否相同
	//相同求和
	if(data1.bookNo == data2.bookNo) {
		unsigned totalCnt =  data1.units_sold + data2.units_sold;
		double totalRevenue = data1.revenue + data2.revenue;
		std::cout << data1.bookNo << " " << totalCnt
				  << " " << totalRevenue << " ";
		if(totalCnt != 0) {
			std::cout << totalRevenue / totalCnt << std::endl;
		} else {
			std::cout << "没卖出去！" << std::endl;
		}
		return 0;
	} else {
	//不相同报错
		std::err << "输入的isbn号码不一致！" << std::endl;
 		return -1;
	}
}
