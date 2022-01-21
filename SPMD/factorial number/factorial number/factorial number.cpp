/*
	Padding_Parallel_Factoiral.
	Start Tasting for 1000000000 
		Set threads : 1 
		the resualt is : 0 the time runing is 17.1866
		Set threads : 2
		the resualt is : 0 the time runing is 12.7717
		Set threads : 3
		the resualt is : 0 the time runing is 13.279
		Set threads : 4
		the resualt is : 0 the time runing is 11.5969 Best Time .
*/



/*
#include <iostream>
#include<omp.h>
#include<vector>
int main() {
	int num ,  id;
	long sumation = 1;
	int thread;
	std::cout << "Enter The Number ?";
	std::cin >> num;
	std::cout << "Enter the thread number ?";
	std::cin >> thread;
	std::vector<int>sum(thread);
	for (int i = 0; i < thread; i++)
		sum[i] = 1;
	double t1 = omp_get_wtime();
#pragma omp parallel num_threads(thread) private(id) 
	{
		id = omp_get_thread_num();
		for (int i = id + 1; i <= num; i += omp_get_num_threads())
		{
			sum[id] *= i;
		}
	}
	for (int i = 0; i < thread; i++)
	{
		sumation *= sum[i];
	}
	double t2 = omp_get_wtime() - t1;
	std::cout << "the resualt is : " << sumation << " the time runing is " << t2;
}
*/