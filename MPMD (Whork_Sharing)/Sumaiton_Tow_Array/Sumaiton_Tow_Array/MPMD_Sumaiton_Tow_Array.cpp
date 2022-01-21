/*
	start Testing by sizing Array in 10000000 
		Set thread 1 :
			time Runing is : 0.244176
		Set thread 2 :
			time Runing is : 0.155156
		Set thread 3 :
			time Runing is : 0.139666
		Set thread 4 :
			time Runing is : 0.10665
*/
#include<iostream>
#include<omp.h>
#include<vector>

int main() {
	int size, thread , id , sumation = 0 ;
	std::cout << "Enter Size of Tow Array ? ";
	std::cin >> size;
	std::cout << "How Meny Threads ? ";
	std::cin >> thread;
	std::vector<int>arr1(size);
	std::vector<int>arr2(size);
	std::vector<int>sum(size);
	for (int i = 0; i < size; i++)
	{
		arr1[i] = rand() % 10;
		arr2[i] = rand() % 10;
		sum[i] = rand() % 10;
	}
	double t1 = omp_get_wtime();
#pragma omp parallel num_threads(thread) private(id)
	{
		id = omp_get_thread_num();
#pragma omp for reduction(+:sumation) //schedule(dynamic)
		for (int i = 0; i < size; i++)
		{
			sumation = arr1[i] + arr2[i];
			sum[i] = sumation;
		}
	}
	double t2 = omp_get_wtime() -t1;
	std::cout << "time Runing is : " << t2;
}