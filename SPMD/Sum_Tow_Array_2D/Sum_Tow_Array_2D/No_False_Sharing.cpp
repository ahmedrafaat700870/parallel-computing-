/*
	No_False_Sharing 
	test : row 1 and coloum 10000
	core Count = 1
	the time is : 0.0009021 The Best .
	test : row 1 and coloum 10000
	core Count = 2
	the time is : 0.0017497
	test : row 1 and coloum 10000
	core Count = 3
	the time is : 0.0018259
	test : row 1 and coloum 10000
	core Count = 4
	the time is : 0.0046454
*/


/*
#include <iostream>
#include <vector>
#include <omp.h>

int main()
{
	int row, coulom ,thread;
	std::cout << "Enter the row count ? ";
	std::cin >> row;
	std::cout << "Enter the couloms count ? ";
	std::cin >> coulom;
	std::cout << "How Meny Threads ? ";
	std::cin >> thread;
	std::vector<std::vector<int>>first(row, std::vector<int>(coulom));
	std::vector<int>second(coulom);
	std::vector<int>sum(row);
	std::vector<std::vector<int>>M(thread , std::vector<int>(8));
	for (int i = 0; i < thread; i++)
	{
		for (int j = 0; j < 8; j++)
		{
			M[i][j] = 0;
		}
	}
	for (int i = 0; i < row; i++)
	{
		sum[i] = 0;
		for (int j = 0; j < coulom; j++)
		{
			first[i][j] = rand() % 10;
			std::cout << "first index " << i << " , " << j << " = " << first[i][j] << "\n";
		}
	}
	for (int i = 0; i < coulom; i++)
	{
		second[i] = rand() % 10;
		std::cout << "second index " << i << " = " << second[i] << "\n";
	}
	double t1 = omp_get_wtime();
	#pragma omp parallel num_threads(thread)

	{
		int id = omp_get_thread_num();
		for (int i = id ;  i < row; i+= omp_get_num_threads())
		{
			for (int j  = 0; j < coulom; j++)
			{
				M[id][0] += first[i][j] * second[j];
			}
			sum[i] += M[id][0];
		}
	}
	double t2 = omp_get_wtime() - t1;
	for (int i = 0; i < row; i++)
	{
		std::cout << "Multi Index " << i << " = " << sum[i] << "\n";
	}
	std::cout << "the time is : " << t2;
}
//*/