/*
	Factorial_MPMD_Parallel :
	Start Testing for 1000000000 
		Set threads : 1 
			The Resualt is : 0 Time Runing : 3.19098
		Set threads : 2
			The Resualt is : 0 Time Runing : 2.21792
		Set threads : 3
			The Resualt is : 0 Time Runing : 1.63043 The Best Time .
		Set threads : 4
			The Resualt is : 0 Time Runing : 1.67831 
*/
#include<iostream>
#include<omp.h>

int main()
{
	int n, thread;
	long sum = 1;
	std::cout << "Enter the Number ? ";
	std::cin >> n;
	std::cout << "How Meny Threads ? ";
	std::cin >> thread;
	double t1 = omp_get_wtime();
#pragma omp parallel num_threads(thread)
	{
#pragma omp for reduction (*:sum)
		for (int  i = 1; i <=n; i++)
		{
			sum *= i;
		}
	}
	double t2 = omp_get_wtime() - t1;
	std::cout << "The Resualt is : " << sum << " Time Runing : " << t2;
}