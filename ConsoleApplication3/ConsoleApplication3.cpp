#include <iostream>
#include <cstdlib>
#include <ctime>
using namespace std;
void minimum(float arr[], int size);
void sort(float arr[], int size);
int main()
{
	srand(static_cast<unsigned>(time(nullptr)) * 1000); // це щоб після кожного нового запуску різні числа були
	int b;
	int c;
	int a;
	float sum;
	float acc;
	const int size = 14;
	float arr[size];
	for (int i = 0; i < size; i++)
	{
		float f = rand();
		if (f > 25000)
		{
			arr[i] = -f / 12000;
		}
		else if (f > 5000)
		{
			arr[i] = f / 12000;

		}
		else {
			arr[i] = -f / 12000;
		}
	}
	// функція rand не видає від'ємниї чисел тому роблю їх сам
	cout << "Random array \n ";
	for (int a = 0; a < size; a++)
	{
		cout << arr[a] << " , ";
	}
	minimum(arr, size);
	for (int i = 0; i < size; i++)
	{
		a = 0;
		if (arr[i] > 0)
		{
			a++;
			if (a = 1)
			{
				b = i;
			}
			else if (a = 2)
			{
				c = i;
			}

		}
	}
	for (int i = a + 2; i < b; i++)
	{
		sum = 0;
		sum = sum + arr[i];
	}
	cout << "\n sum: " << sum << "\n";
	sort(arr, size);
	cout << "Sort array \n ";
	for (int a = 0; a < size; a++)
	{
		cout << arr[a] << ", ";
	}
}






void sort(float arr[], const int size)
{
	float acc;
	for (int i = 1; i < size; i++)
	{
		for (int j = 1; j < size; j++)
		{
			if (abs(arr[j]) < 1)
			{
				acc = arr[j];
				arr[j] = arr[j - 1];
				arr[j - 1] = acc;
			}
		}
	}

}
void minimum(float arr[], const int size)
{
	float ind;
	float min = arr[0];
	for (int i = 0; i < size; i++)
	{
		if (arr[i] < min)
		{
			min = arr[i];
			ind = i;
		}
	}
	cout << "\n min: " << ind;

}