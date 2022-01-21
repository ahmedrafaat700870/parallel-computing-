/*
	Start Testing (Factorial_Synchroniztion) by 1000000000
		set threads: 1
			The Resualt is : 0 Time Runing is :3.17053
		set threads : 2
			The Resualt is : 0 Time Runing is :2.22267
		set threads : 3
			The Resualt is : 0 Time Runing is :1.77262
		set threads : 4
			The Resualt is : 0 Time Runing is :1.68487 The Time .
*/




/*
#include<iostream>
#include<omp.h>
#include<vector>

int main()
{
	int n, thread ,id,nth;
	long lastSum = 1;
	std::cout << "Enter the Number ? ";
	std::cin >> n;
	std::cout << "How Meny Threads ? ";
	std::cin >> thread;
	
	double t1 = omp_get_wtime();
#pragma omp parallel num_threads(thread) private(id)
	{
		long sum = 1;
		id = omp_get_thread_num();
		nth = omp_get_num_threads();
		for (int i = id+1; i <= n; i+=nth)
		{
			sum *= i;
		}
#pragma omp critical
		{
			lastSum *= sum;
		}
	}
	double t2 = omp_get_wtime() - t1;
	std::cout << "The Resualt is : "<< lastSum << " Time Runing is :" <<t2;
}
//*/