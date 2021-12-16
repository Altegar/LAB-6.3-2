// LAB-6.3(2).cpp : Этот файл содержит функцию "main". Здесь начинается и заканчивается выполнение программы.
// LAB_06_3(2).cpp
// Сушинський Ігор
// Лабораторна робота № 6.3
// Опрацювання одновимірних масивів за допомогою звичайних функцій та шаблонів.
// Варіант 20
// Рекурсивний спосіб

#include <iostream>
#include <iomanip>
#include <ctime>

using namespace std;

void Random(int* a, const int n, const int x, const int y, int i)
{
	a[i] = rand() % (y - x + 1) + x;
	if (i < n - 1)
		Random(a, n, x, y, i + 1);
}

int Max(int* a, const int n, int i, int max)
{
	if (a[i] > max)
		max = a[i];
	if (i < n - 1)
		return Max(a, n, i + 1, max);
	else
		return max;
}

void Print(int* a, const int n, int i) // форматне виведення
{
	cout << setw(3) << a[i];
	if (i < n - 1)
		Print(a, n, i + 1);
	else
		cout << endl;
}

int main()
{
	srand((unsigned)time(0)); // ініціалізація генератора випадкових чисел

	const int n = 24;
	int a[n];
	int x = 2, y = 66;

	Random(a, n, x, y, 0);
	cout << "Array = ";  Print(a, n, 0);

	cout << "Max = " << Max(a, n, 0, 0);

	return 0;
}