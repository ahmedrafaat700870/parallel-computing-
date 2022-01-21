/*
	Mali_Two_Array_Parallel
	test 100000000 (8*0)
	OutPut :
	number of thread : 1
		sumation tow random arry is = 899913767 Time Runing = 2.80476
	number of thread : 2
		sumation tow random arry is = 899913767 Time Runing = 2.51997
	number of thread : 3
		sumation tow random arry is = 899913767 Time Runing = 1.9581
	number of thread : 4
		sumation tow random arry is = 899913767 Time Runing = 1.9012 The Best .
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
	std::vector<int>sum(thread);
	for (int i = 0; i < sum.size(); i++)
		sum[i] = 1;
	double t1 = omp_get_wtime();
#pragma omp parallel num_threads(thread)
	{
		int id = omp_get_thread_num();
		for (int i = id; i < size; i += omp_get_num_threads())
			sum[id] += arr1[i] * arr2[i];
	}
	long lastSum = 1;
	for (int i = 0;i < sum.size(); i++)
		lastSum += sum[i];
	double t2 = omp_get_wtime() -t1;
	std::cout << "sumation tow random arry is = " << lastSum <<  " Time Runing = " << t2;
}

//*/