/*
	Serial sumation 
	test 1000000000 
	OutPut :
	number of thread : 1
		Sum = -1243309312 Time Runing = 4.05334
*/


/*
#include<iostream>
#include<omp.h>
int main() {
	int n ,sum= 0 ; 
	std::cout << "Enter the Number ?";
	std::cin >> n;
	double t1 = omp_get_wtime();
	for (int i = 0; i < n; i++) {
		sum += i;
	}
	double t2 = omp_get_wtime() -t1;
	std::cout << "Sum = " << sum << " Time Runing = " << t2;
}
*/