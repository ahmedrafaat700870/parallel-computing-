/*
	PI IN MPMD TEsting for 1000000000 Steps
	set Threads : 1 
	PI = 3.14159 Time Runting is :16.7892
	set Threads : 2 
	PI = 3.14159 Time Runting is :9.0605
	set Threads : 3
	PI = 3.14159 Time Runting is :5.90403
	set Threads : 4
	PI = 3.14159 Time Runting is :5.03452 The Best Time . 
*/
#include <iostream>
#include<omp.h>
#include<vector>

int main() {
	int steps, thread;
	double sum = 0.0 ,x , PI;
	std::cout << "Enter the Number ? ";
	std::cin >> steps;
	std::cout<< "How Meny threads ? ";
	std::cin >> thread;
	double s = 1.0 / steps;
	double t1 = omp_get_wtime();
#pragma omp parallel num_threads(thread) private(x)
	{
#pragma omp for reduction(+:sum)
		for (int i = 0; i < steps; i++)
		{
			x = (.5 + i) * s;
			sum += 4.0 / (1 + x * x);
		}
	}
	PI = sum * s;
	double t2 = omp_get_wtime() - t1;
	std::cout << "PI = " << PI << " Time Runting is :" << t2;
}