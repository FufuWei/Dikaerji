#include<iostream>
#include<Windows.h>
using namespace std;

int main() {
	int n;
	cin >> n;
	double** matrix = new double* [n];
	for (int i = 0; i < n; i++)
		matrix[i] = new double[n];
	double* vector = new double[n];
	double* sum = new double[n];

	for (int i = 0; i < n; i++) {
		for (int j = 0; j < n; j++) {
			cin >> matrix[i][j];
		}
	}
	for (int i = 0; i < n; i++) {
		cin >> vector[i];
	}
	for (int i = 0; i < n; i++)
		 sum[i] = 0.0;
	long start_time = GetTickCount();
	for (int j = 0; j < n; j++) {
		for (int i = 0; i < n; i++) {
			sum[i] += matrix[j][i] * vector[j];
		}
	}
	long end_time = GetTickCount();
	long run_time = end_time - start_time;

	for (int i = 0; i < n; i++) {
		cout << sum[i] << " ";
	}
	cout << endl << run_time << endl;
	return 0;
}