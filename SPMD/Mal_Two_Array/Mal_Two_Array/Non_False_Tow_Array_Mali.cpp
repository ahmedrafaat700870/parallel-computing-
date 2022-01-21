/*
	Mali_Two_Array_Parallel_Non_False_Shared_Memory
	test 100000000 (8*0)
	OutPut :
	number of thread : 1
		sumation tow random arry is = 899913767 Time Runing = 3.54104
	number of thread : 2
		sumation tow random arry is = 899913767 Time Runing = 2.19356
	number of thread : 3
		sumation tow random arry is = 899913767 Time Runing = 1.67141
	number of thread : 4
		sumation tow random arry is = 899913767 Time Runing = 1.42892 The Best .
*/


/*

#include <iostream>
#include <omp.h>
#include <vector>
#include <stdlib.h>
int main() {
	int size , thread;
	std::cout << "Size of Tow Array ? ";
	std::cin >> size;
	std::cout << "How Meny Thread ? ";
	std::cin >> thread;
	std::vector<int>arr1(size);
	std::vector<int>arr2(size);
	for (int i = 0; i < size; i++) {
		arr1[i] = rand() % 10;
		arr2[i] = rand() % 10;
	}
	std::vector<std::vector<int>>sum(thread,std::vector<int>(8));
	for (int i = 0; i < thread; i++)
		sum[i][0] = 1;
		double t1 = omp_get_wtime();
#pragma omp parallel num_threads(thread)
	{
		int id = omp_get_thread_num();
		for (int i = id; i < size; i += omp_get_num_threads())
			sum[id][0] += arr1[i] * arr2[i];
	}
	int lastSum = 1;
	for (int i = 0;i < thread; i++)
		lastSum += sum[i][0];
	double t2 = omp_get_wtime() -t1;
	std::cout << "sumation tow random arry is = " << lastSum <<  " Time Runing = " << t2;
}

//*/