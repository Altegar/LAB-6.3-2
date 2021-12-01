// LAB-6.3(2).cpp : Этот файл содержит функцию "main". Здесь начинается и заканчивается выполнение программы.
// LAB_06_3(2).cpp
// Сушинський Ігор
// Лабораторна робота № 6.3
// Опрацювання одновимірних масивів за допомогою звичайних функцій та шаблонів.
// Варіант 20
// Рекурсивний спосіб

#include <iostream>

using namespace std;

int Max(int* a, const int n, int i, int max)
{
	if (a[i] > max)
		max = a[i];
	if (i < n - 1)
		return Max(a, n, i + 1, max);
	else
		return max;
}

int main()
{
	const int n = 10;
	int a[n] = { 1,3,2,6,15,27,9,61,33,42 };
	int i = 0;

	cout << Max(a, n, i, 0);

	return 0;
}