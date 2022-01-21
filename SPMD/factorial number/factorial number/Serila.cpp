/*
	Start Testing (Factorial_Serial) by 1000000000
		set threads: 1
			The Resualt : 0 Time Runing 3.70727
*/


/*
#include <iostream>
#include<omp.h>

int main()
{
	int n, sum = 1;
	std::cout << "Enter the Number ? ";
	std::cin >> n;
	double t1 = omp_get_wtime();
	for (int i = 1; i <= n; i++)
	{
		sum *= i;
	}
	double t2 = omp_get_wtime() - t1;
	std::cout << "The Resualt : " << sum << " Time Runing " << t2;
}
*/