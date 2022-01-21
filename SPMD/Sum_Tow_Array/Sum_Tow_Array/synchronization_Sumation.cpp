/*
	Sum_Two_Array_Parallel_synchroniztion
	test 100000000 (8*0)
	OutPut :
	number of thread : 1
		Sumation = 899913767 Time Runing = 2.22517
	number of thread : 2
		Sumation = 899913767 Time Runing = 1.23006
	number of thread : 3
		Sumation = 899913767 Time Runing = 0.993272
	number of thread : 4
		Sumation = 899913767 Time Runing = 0.834912 The Best .
*/

/*
#include<iostream>
#include<omp.h>
#include<vector>
int main() {
	int size, thread;
	std::cout << "Enter size of tow array ? ";
	std::cin >> size;
	std::cout << "How Many Thread ? ";
	std::cin >> thread;
	std::vector <int>arr1(size);
	std::vector <int>arr2(size);
	for (int i = 0; i < size;i++)
	{
		arr1[i] = rand() % 10;
		arr2[i] = rand() % 10;
	}
	long LastSumation = 0;
	double t1 = omp_get_wtime();
#pragma omp parallel num_threads(thread)
	{
		int id = omp_get_thread_num();
		int sum = 0;
		for (int i = id; i < size; i += omp_get_num_threads())
			sum += arr1[i] + arr2[i];
#pragma omp critical
		{
			LastSumation += sum;
		}
	}
	double t2 = omp_get_wtime() - t1;
	std::cout << "Sumation = " << LastSumation << " Time Runing = " << t2;
}
//*/