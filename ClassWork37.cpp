﻿#include <iostream>
//Linear Search

template <typename T>
void print_arr(T arr[], const int length) {
	for (int i = 0; i < length; i++) {
		std::cout << arr[i] << ", ";
	}
	std::cout << "\b\b }" << std::endl;
}
//Линейный поиск ПЕРВОГО вхождения элемента key в массив arr с длиной length, начиная с позиции begin(по умолчанию 0)
template <typename T>
int search_index(T arr[], const int length, T key, int begin = 0) {
	for (int i = begin; i < length; i++) 
		if (arr[i] == key)
			return i;
		return -1;
	
}
// Линейный поиск ПОСЛЕДНЕГО вхождения элемента key в массив arr с длиной Length
template <typename T>
int search_last_index(T arr[], const int length, T key) {
	for (int i = length - 1; i >= 0; i--)
		if (arr[i] == key)
			return i;
	return -1;
}
	// Линейный поиск ПОСЛЕДНЕГО вхождения элемента key в массив arr с длиной Length начиная с позиции begin
template <typename T>
int search_last_index(T arr[], const int length, T key, int begin) {
	for (int i = begin; i >= 0; i--)
		if (arr[i] == key)
			return i;
	return -1;
}

int main() {
	setlocale(LC_ALL, "ru");
	int n;
	const int size = 11;
	int arr[size]{ 10,20,15,30,20,45,10,15,50,10,36 };
	std::cout << "Массив: \n{ ";
	print_arr(arr, size);

	std::cout << "Введите число для поиска -> ";
	std::cin >> n;
	
	int index1 = search_index(arr, size, n, 4);
	if (index1 != -1)
		std::cout << "Позиция первого вхождения числа в массив: " << index1 << std::endl;
	else
		std::cout << "Числа нет в массиве!\n";

	


	int index2 = search_last_index(arr, size, n, 4);
	if (index2 != -1)
		std::cout << "Позиция последнего вхождения числа в массив: " << index2 << std::endl;
	else
		std::cout << "Числа нет в массиве!\n";
















	return 0;
}