/*
	Sumation For by Parallel Testing for 1000000000 .
	Set Threads : 1 
	the Reasualt is : -1243309312 Time Runtig is : 2.88428
	Set Threads : 2
	the Reasualt is : -1243309312 Time Runtig is : 1.69485
	Set Threads : 3
	the Reasualt is : -1243309312 Time Runtig is : 1.61535
	Set Threads : 4
	the Reasualt is : -1243309312 Time Runtig is : 1.08568
*/

#include <iostream>
#include<omp.h>

int main() {
	int number, thread;
	long sum = 0;
	std::cout << "Enter the Number ? ";
	std::cin >> number;
	std::cout << "How Meny Threads ? ";
	std::cin >> thread;
	double t1 = omp_get_wtime();
#pragma omp parallel num_threads(thread)
	{
#pragma omp for reduction(+:sum)
		for (int i = 0; i < number; i++)
		{
			sum += i;
		}
	}
	double t2 = omp_get_wtime() - t1;
	std::cout << "the Reasualt is : " << sum << " Time Runtig is : " << t2;
}