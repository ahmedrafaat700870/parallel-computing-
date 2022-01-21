/*
	non_false_sharing_memory sumation
	test 1000000000
	OutPut :
	number of thread : 1
		Sum = -1243309312 Time Runing = 24.6769
	number of thread : 2
		Sum = -1243309312 Time Runing = 14.4492
	number of thread : 3
		Sum = -1243309312 Time Runing = 12.1893
	number of thread : 4
		Sum = -1243309312 Time Runing = 10.3903
*/

/*
#include<iostream>
#include<omp.h>
#include<vector>
int main() {
	int n, sum = 0, thread;
	std::cout << "Enter the Number ?";
	std::cin >> n;
	std::cout << "How Meny Threads ?";
	std::cin >> thread;
	std::vector<std::vector<int>>arr(thread,std::vector<int>(8));
	for (int i = 0; i < arr.size(); i++) {
		arr[i][0] = 0;
	}
	double t1 = omp_get_wtime();
#pragma omp parallel num_threads(thread)
	{
		int id = omp_get_thread_num();
		for (int i = id; i < n; i += omp_get_num_threads())
			arr[id][0] += i;
	}
	for (int i = 0; i < arr.size(); i++)
		sum += arr[i][0];

	double t2 = omp_get_wtime() - t1;
	std::cout << "Sum = " << sum << " Time Runing = " << t2;
}
*/