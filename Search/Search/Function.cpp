#include"Function.h"

template<typename T>
void complete_array(T* arr,int32_t size)
{
	for (int32_t i = 0; i < size; ++i) {
		std::cout << "Enter the elemnt of array";
		std::cin >> arr[i];
	}
}