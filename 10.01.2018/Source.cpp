#include <iostream>

#include <math.h>

#include <stdio.h>

#include <locale.h>

#include <Windows.h>

#include <conio.h>

#include <time.h>

using namespace std;

#define sizeArr 20


void main()

{

start:

	system("cls");

	setlocale(LC_ALL, "Rus");

	int nz;

	cout << "¬ведите номер задани€ от 1 до 7 : ";

	cin >> nz;

	cout << endl;

	srand(time(NULL));

	int arrNumber[sizeArr];

	for (int i = 0; i <= sizeArr - 1; i++)
	{
		arrNumber[i] = 1 + rand() % 99;
	}

	switch (nz)

	{
	case 1:
	{
		cout << "Do sortirivki" << endl;

		for (int i = 0; i <= sizeArr - 1; i++)
		{
			cout << "arr[" << i << "] = " << arrNumber[i] << "\n";
		}

		cout << endl;
		cout << "Posle sortirivki" << endl;

		for (int i = 0; i < sizeArr - 1; i++)
		{
			for (int j = (sizeArr - 1); j > i; j--)
			{
				if (arrNumber[j - 1] > arrNumber[j])
				{
					int temp = arrNumber[j - 1];
					arrNumber[j - 1] = arrNumber[j];
					arrNumber[j] = temp;
				}
			}
			cout << "arr[" << i << "] = " << arrNumber[i] << "\n";
		}
	}
	break;

	case 2:
	{
		int min, temp;
		int arrNumber[sizeArr];

		for (int i = 0; i <= sizeArr - 1; i++)
		{
			arrNumber[i] = 1 + rand() % 99;
		}
		cout << "Do sortirivki" << endl;

		for (int i = 0; i <= sizeArr - 1; i++)
		{
			cout << "arr[" << i << "] = " << arrNumber[i] << "\n";
		}

		cout << endl;
		cout << "Posle sortirivki" << endl;

		for (int i = 0; i < sizeArr - 1; i++)
		{
			min = i;

			for (int j = i + 1; j < sizeArr; j++)
			{
				if (arrNumber[j] < arrNumber[min])
					min = j;
			}
			temp = arrNumber[i];
			arrNumber[i] = arrNumber[min];
			arrNumber[min] = temp;

		}
		for (int i = 0; i < sizeArr; i++)
		{
			cout << "arr[" << i << "] = " << arrNumber[i] << "\n";
		}

	}
	break;

	case 3:
	{
		int arrNumber[sizeArr];

		for (int i = 0; i <= sizeArr - 1; i++)
		{
			arrNumber[i] = 1 + rand() % 99;
		}
		cout << "Do sortirivki" << endl;
		cout << endl;

		for (int i = 0; i <= sizeArr - 1; i++)
		{
			cout << "arr[" << i << "] = " << arrNumber[i] << "\n";
		}

		for (int i = 1; i < sizeArr; i++)
		{
			int value = arrNumber[i];
			int index = i;

			while ((index > 0) && (arrNumber[index - 1] > value))
			{
				arrNumber[index] = arrNumber[index - 1];
				index--;
			}
			arrNumber[index] = value;
		}
		cout << endl;
		cout << "Posle sortirivki" << endl;
		cout << endl;

		for (int i = 0; i < sizeArr; i++)
		{
			cout << "arr[" << i << "] = " << arrNumber[i] << "\n";
		}
	}
	break;

	case 4:
	{
		/* »спользу€ датчик случайных чисел, заполнить массив из двадцати элементов неповтор€ющимис€ числами */

		int arrNumber[sizeArr];

		for (int i = 0; i <= sizeArr - 1; i++)
		{
			arrNumber[i] = 1 + rand() % 99;

		}
		cout << "Nepovtor" << endl;

		for (int i = 0; i <= sizeArr - 1; i++)
		{
			cout << "arr[" << i << "] = " << arrNumber[i] << "\n";
		}

		cout << endl;
		cout << "Posle sortirivki" << endl;
		cout << endl;

		for (int i = 0; i < sizeArr - 1; i++)
		{
			for (int j = (sizeArr - 1); j > i; j--)
			{
				if (arrNumber[j - 1] > arrNumber[j])
				{
					int temp = arrNumber[j - 1];
					arrNumber[j - 1] = arrNumber[j];
					arrNumber[j] = temp;
				}
			}
			cout << "arr[" << i << "] = " << arrNumber[i] << "\n";
		}
	}
	break;

	case 5:
	{
		/*   ќпределить:
			  a.	сумму всех элементов массива;
			  b.	произведение всех элементов массива;
			  c.	сумму квадратов всех элементов массива;
			  d.	сумму шести первых элементов массива;
			  e.	сумму элементов массива с k1-го по k2-й (значени€ k1 и k2 ввод€тс€  с клавиатуры; k2 > k1);
			  f.	среднее арифметическое всех элементов массива;
			  g.	 среднее арифметическое элементов массива с s1-го по s2-й (значени€ s1 и s2 ввод€тс€ с клавиатуры; s2 > s1).
	*/
		int arrNumber[sizeArr];
		int sum = 0;

		for (int i = 0; i <= sizeArr - 1; i++)
		{
			arrNumber[i] = 1 + rand() % 4;

		}
		for (int i = 0; i <= sizeArr - 1; i++)
		{
			cout << "arr[" << i << "] = " << arrNumber[i] << "\n";
		}
		cout << endl;
		cout << "a. Summa vseh elementov massiva = ";
		for (int i = 0; i < sizeArr; i++)
		{
			sum += arrNumber[i];
		}
		cout << sum << endl;
		cout << endl;

		cout << "b. Proizvedenie vseh elementov massiva = ";
		sum = 1;

		for (int i = 0; i < sizeArr; i++)
		{
			sum *= arrNumber[i];
		}

		cout << sum << endl;
		cout << endl;

		cout << "c. Summa kvadratov vseh elementov massiva = ";
		sum = 0;

		for (int i = 0; i < sizeArr; i++)
		{
			sum += arrNumber[i] * arrNumber[i];
		}

		cout << sum << endl;
		cout << endl;

		cout << "d. Summa 6 pervih elementov massiva = ";
		sum = 0;
		for (int i = 0; i <= 5; i++)
		{
			sum += arrNumber[i];
		}
		cout << sum << endl;
		cout << endl;

		cout << "e. —умма элемента массива с k1-го по k2-й (значени€ k1 и k2 ввод€тс€  с клавиатуры; k2 > k1)"<<endl;
		sum = 0;
		int k1, k2;
		cout << "Vvedite k1: ";
		cin >> k1;
		cout << "Vvedite k2: ";
		cin >> k2;

		if (k2 > k1)
		{
			for (int i = k1; i <= k2; i++)
			{
				sum += arrNumber[i];
			}
			cout << "e. —умма элемента массива с k1-го по k2-й = ";
			cout << sum << endl;
			cout << endl;
		}

		cout << "f. среднее арифметическое всех элементов массива = ";
		for (int i = 0; i < sizeArr; i++)
		{
			sum += arrNumber[i];
		}
		sum = sum / sizeArr;
		cout << sum << endl;
		cout << endl;

		cout << "g.среднее арифметическое элементов массива с s1 - го по s2 - й(значени€ s1 и s2 ввод€тс€ с клавиатуры; s2 > s1)" << endl;
		int s1, s2;
		cout << "Vvedite s1: ";
		cin >> s1;
		cout << "Vvedite s2: ";
		cin >> s2;
		sum = 0;
		if (s2 > s1)
		{
			for (int i = s1; i <= s2; i++)
			{
				sum += arrNumber[i];
			}
			sum = sum / (s2-s1);
			cout << "e. среднее арифметическое элементов массива с s1 - го по s2 - й  = ";
			cout << sum << endl;
			cout << endl;
		}

	}
	break;

	}


}