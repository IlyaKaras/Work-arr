#include"Function.h"

template<typename T>
void complete_array(T* arr,int32_t size)   // заполнение массива
{
	for (int32_t i = 0; i < size; ++i) {
		std::cout << "Enter the elemnt of array";
		std::cin >> arr[i];
	}
}

template<typename T>
void Max_element(T* arr, int32_t size)  // поиск индекс максимального элемента
{
	int32_t max{};
	for (int32_t i{}; i < size; ++i) {
		
		if (arr[max] < arr[i]) {
			max = i;
		}
	
	}
	std::cout << "The Max element of array have the number " << max;

}

template<typename T>
void Min_element(T* arr, int32_t size)			// поиск индекса минимального элемента
{
	int32_t min{};
	for (int32_t i{}; i < size; ++i) {

		if (arr[min] < arr[i]) {
			min = i;
		}

	}
	std::cout << "The Min element of array have the number " << min;
}

template<typename T>
void remov_neg(T* arr, int32_t size)
{
	for (int32_t i{}; i < size; ++i) {
		if (arr[i] < 0) {
			arr[i] = 0;
		}

	}
	for (int32_t n{}; n < size; ++n) {
		if (arr[n] == 0) {
			T temp{};
			temp = arr[++n];
			arr[++n] = 0;
			arr[n] = temp;
			temp{};
		}
	
	}

}