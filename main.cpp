#include "D:\program\gitwork\Work-arr\Search\Search\Function.h"

int main(){
std::cout<<"Enter the size of array";


int32_t size{};
std::cin >> size;

int32_t* arr_int = new int32_t [size];
double* arr_double = new double[size];    //������ 3 ������� ������� ����
std::string* arr_string = new std::string[size];

if (size <= 0) {		//�������� ������� �������
	std::cout << "The wrong size of array";
}

else {

	 complete_array(arr_int,size);			//����� ������� ���������� �������
	 complete_array(arr_double, size);
	 complete_array(arr_string, size);
}

return 0;
}

