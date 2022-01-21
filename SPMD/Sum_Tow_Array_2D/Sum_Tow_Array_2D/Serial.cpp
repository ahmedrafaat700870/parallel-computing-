/*
	Servial
	test : row 1 and coloum 10000
	core Count = 1
	the time is : 0.0006358 The All Best .
*/

/*
#include <iostream>
#include <vector>
#include <omp.h>

int main()
{
	int n, x;
	std::cout << "Enter the row count ? ";
	std::cin >> n;
	std::cout << "Enter the couloms count ? ";
	std::cin >> x;
	std::vector<std::vector<int>>first(n, std::vector<int>(x));
	std::vector<int>second(x);
	std::vector<int>Multi(n);
	for (int i = 0; i < n; i++)
	{
		Multi[i] = 0;
		for (int j = 0; j < x; j++)
		{
			first[i][j] = rand() % 10;
			std::cout << "first index " << i << " , " << j << " = " << first[i][j] << "\n";
		}
	}
	for (int i = 0; i < x; i++)
	{
		second[i] = rand() % 10;
		std::cout << "second index " << i << " = " << second[i] << "\n";
	}
	
	double t1 = omp_get_wtime();
	for (int i = 0; i < n; i++)
	{
		for (int j = 0; j < x; j++)
		{
			Multi[i] += first[i][j] * second[j];
		}
	}
	double t2 = omp_get_wtime() -  t1;
	for (int i = 0; i < n; i++)
	{
		std::cout << "Multi Index " << i << " = " << Multi[i] << "\n";
	}
	std::cout << "the time is : " << t2;
}
//*/