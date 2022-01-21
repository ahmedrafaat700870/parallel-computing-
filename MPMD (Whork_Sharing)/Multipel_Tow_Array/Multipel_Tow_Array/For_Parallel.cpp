/*
	First Scheduel Noraml 
		Testing for One Core => 10000 * 1 
		Time Runing is :0.0005033
		Testing for Tow Core => 10000 * 1 
		Time Runing is :0.0007342
		Testing for Three Core => 10000 * 1 
		Time Runing is :0.0005008
		Testing for Fore Core => 10000 * 1 
		Time Runing is :0.0004957 The Best Time.
	Second Scheduel Static 
		Testing for One Core => 10000 * 1
		Time Runing is :0.0004902 The Best Time.
		Testing for Tow Core => 10000 * 1
		Time Runing is :0.0004968
		Testing for Three Core => 10000 * 1
		Time Runing is :0.0004925
		Testing for Fore Core => 10000 * 1
		Time Runing is :0.0004854
	Third Scheduel dynamic 
		Testing for One Core => 10000 * 1
		Time Runing is :0.0005274
		Testing for Tow Core => 10000 * 1
		Time Runing is :0.0007336
		Testing for Three Core => 10000 * 1
		Time Runing is :0.0004969 The Best Time.
		Testing for Fore Core => 10000 * 1
		Time Runing is :0.000586
	Fourth Scheduel auto
		Testing for One Core => 10000 * 1
		Time Runing is :0.0005096
		Testing for Tow Core => 10000 * 1
		Time Runing is :0.000756
		Testing for Three Core => 10000 * 1
		Time Runing is :0.0004929 
		Testing for Fore Core => 10000 * 1
		Time Runing is :0.0004788 The Best Time.
	Fifth Scheduel Guided
		Testing for One Core => 10000 * 1
		Time Runing is :0.0005028
		Testing for Tow Core => 10000 * 1
		Time Runing is :0.0005086
		Testing for Three Core => 10000 * 1
		Time Runing is :0.0006312
		Testing for Fore Core => 10000 * 1
		Time Runing is :0.0004903 The Best Time.
	Sixth Collapse 
		Testing for Fore Core => 10000 * 1 
		Time Runing is :0.0004964
*/
#include <iostream>
#include <vector>
#include<omp.h>

int main()
{
	int n, m, thread;
	std::cout << "Enter the n ? ";
	std::cin >> n;
	std::cout << "Enter the m ? ";
	std::cin >> m;
	std::cout << "How Meny threads ? ";
	std::cin >> thread;
	std::vector<std::vector<int>>Mat1(n, std::vector<int>(m));
	std::vector<int>Mat2(m);
	std::vector<int>Sum(n);
	int sum = 0;
	for (int i = 0; i < n; i++)
	{
		Sum[i] = 0;
		for (int j = 0; j < m; j++)
		{
			Mat1[i][j] = rand() % 10;
			std::cout << "Array One Index " << i << " , " << j << " = " << Mat1[i][j] << "\n";
		}
	}
	for (int i = 0; i < m; i++)
	{
		Mat2[i] = rand() % 10;
		std::cout << "Array Tow Index " << i <<  " = " << Mat2[i] << "\n";
	} 
	double t1 = omp_get_wtime();
#pragma omp parallel num_threads(thread) 
	{
#pragma omp for reduction(+:sum) // collapse(2) //schedule(dynamic)
		for (int i = 0; i < n; i++)
		{
			for (int j = 0; j < m; j++)
			{
				sum += Mat1[i][j] * Mat2[j];
			}
			Sum[i] = sum;
		}
	}
	double t2 = omp_get_wtime() - t1;
	for (int i = 0; i < n; i++)
	{
		std::cout << "Sumation Index : " << i << " = " << Sum[i] << "\n";
	}
	std::cout << "Time Runing is :" << t2;
}