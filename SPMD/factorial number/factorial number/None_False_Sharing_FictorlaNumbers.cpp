/*
	Start Testing (Factorial_No_False_Sharing) by 1000000000 
		set threads: 1 
			The Resualt is : 0 Time Runing is :17.6018
		set threads : 2
			The Resualt is : 0 Time Runing is :12.1754
		set threads : 3
			The Resualt is : 0 Time Runing is :9.37711
		set threads : 4
			The Resualt is : 0 Time Runing is :7.83374
*/




/*
#include<iostream>
#include<omp.h>
#include<vector>

int main()
{
	int n, thread ,id,nth;
	long sumation = 1;
	std::cout << "Enter the Number ? ";
	std::cin >> n;
	std::cout << "How Meny Threads ? ";
	std::cin >> thread;
	std::vector<std::vector<int>>sum(thread,std::vector<int>(8));
	for (int i = 0; i < thread; i++)
	{
		sum[i][0] = 1;
	}
	double t1 = omp_get_wtime();
#pragma omp parallel num_threads(thread) private(id) 
	
	{
		id = omp_get_thread_num();
		nth = omp_get_num_threads();
		for (int i = id+1; i <= n; i+=nth)
		{
			sum[id][0] *= i;
		}
	}
	for (int i = 0; i < thread; i++)
	{
		sumation *= sum[i][0];
	}
	double t2 = omp_get_wtime() - t1;
	std::cout << "The Resualt is : "<< sumation << " Time Runing is :" <<t2;
}
*/