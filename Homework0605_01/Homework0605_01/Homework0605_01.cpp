#include <iostream>

using namespace std;

void computeSumAndAvg(int arr[], int n, int& sum, double& avg) {};

int main()
{
	int arr[] = {1, 2, 3, 4, 5};
	int n = 5;
	int sum;
	double average;

	sum = 0;
	for (int i = 0; i < n; ++i) {
		sum += arr[i];
	}

	average = static_cast<double>(sum) / n;

	computeSumAndAvg(arr, n, sum, average);
	cout << "합계: " << sum << ", 평균: " << average << endl;
	
	return 0;
}