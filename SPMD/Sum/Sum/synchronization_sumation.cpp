/*
	synchronization sumation
	test 1000000000
	OutPut :
	number of thread : 1
		Sum = -1243309312 Time Runing = 8.09765
	number of thread : 2
		Sum = -1243309312 Time Runing = 5.20545
	number of thread : 3
		Sum = -1243309312 Time Runing = 4.54935
	number of thread : 4
		Sum = -1243309312 Time Runing = 3.44446
*/


/*
#include<iostream>
#include<omp.h>
#include<vector>
int main() {
	int n, thread, sumation = 0;
	std::cout << "Enter the Number ?";
	std::cin >> n;
	std::cout << "How Meny Threads ?";
	std::cin >> thread;
	double t1 = omp_get_wtime();
#pragma omp parallel num_threads(thread)
	{
		int sum = 0;
		int id = omp_get_thread_num();
		for (int i = id; i < n; i += omp_get_num_threads())
			sum += i;
#pragma omp critical
		{
			sumation += sum;
		}
	}
	double t2 = omp_get_wtime() - t1;
	std::cout << "Sum = " << sumation << " Time Runing = " << t2;
}

*/