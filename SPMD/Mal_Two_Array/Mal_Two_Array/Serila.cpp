/*
	Serial Multidimension_Two_Array
	test 100000000 (8*0)
	OutPut :
	number of thread : 1
		sumation tow random arry is = 899913767 Time Runing = 1.53404
*/


/*
#include <iostream>
#include <omp.h>
#include <vector>
#include <stdlib.h>
int main() {
	int size;
	long sum = 1;
	std::cout << "Size of Tow Array ? ";
	std::cin >> size;
	std::vector<int>arr1(size);
	std::vector<int>arr2(size);
	for (int i = 0; i < size; i++) {
		arr1[i] = rand() % 10;
		arr2[i] = rand() % 10;
	}
	double t1 = omp_get_wtime();
	for(int i = 0 ; i<size ; i++ )
		sum += arr1[i] * arr2[i];
	double t2 = omp_get_wtime() -t1;
	std::cout << "sumation tow random arry is = " << sum <<  " Time Runing = " << t2;
}
//*/