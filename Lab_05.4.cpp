
// Лабораторна робота № 5.4
// Variant - 22
#include <iostream>
#include <cmath>
using namespace std;

double S0(const int K, const int N)
{
	double s = 0;
	for (int i = K; i <= N; i++)
		s += (cos(i) + sin(i)) / (1 + (cos(i)) * (sin(i)));
	return s;
}
double S1(const int K, const int N, const int i)
{
	if (i > N)
		return 0;
	else
		return (cos(i) + sin(i)) / (1 + (cos(i)) * (sin(i))) + S1(K, N, i + 1);
}
double S2(const int K, const int N, const int i)
{
	if (i < K)
		return 0;
	else
		return (cos(i) + sin(i)) / (1 + (cos(i)) * (sin(i))) + S2(K, N, i - 1);
}
double S3(const int K, const int N, const int i, double t)
{
	t = t + (cos(i) + sin(i)) / (1 + (cos(i)) * (sin(i)));
	if (i >= N)
		return t;
	else
		return S3(K, N, i + 1, t);
}
double S4(const int K, const int N, const int i, double t)
{
	t = t + (cos(i) + sin(i)) / (1 + (cos(i)) * (sin(i)));
	if (i <= K)
		return t;
	else
		return S4(K, N, i - 1, t);
}

int main()
{
	int K;
	cout << "K = "; cin >> K;
	cout << "(iter) S0 = " << S0(K, 20) << endl;
	cout << "(rec up ++) S1 = " << S1(K, 20, K) << endl;
	cout << "(rec up --) S2 = " << S2(K, 20, 20) << endl;
	cout << "(rec down ++) S3 = " << S3(K, 20, K, 0) << endl;
	cout << "(rec down --) S4 = " << S4(K, 20, 20, 0) << endl;
	return 0;
}
