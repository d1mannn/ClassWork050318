#include <iostream>
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <locale.h>
#include "Header.h"
#define size 81
#define limit 10
using namespace std;

void main()
{
	setlocale(LC_ALL, "rus");
	int task;
	do
	{
		task = TaskNumb();
		cin.get();
		switch (task)
		{
			case 1:
			{
				//1.	В заданной строке поменять местами первое и последнее слово строки.Разделителями слов считаются пробелы
				char string[size];
				CharFilling(string);
				int length = strlen(string);
				puts(string);
				int count = SpaceCounter(string, &length);
				cout << count << endl;
				ChangeWordsPlaces(string, &length, &count);
			} break;

			case 2:
			{
				//2.	Заданы две строки.Построить новую строку, состоящую из символов, которые входят как в одну, так и в другую строку.
				char arr[size];
				char arr2[size];
				char arr3[size];
				CharFilling(arr);
				CharFilling(arr2);
				int length = strlen(arr);
				int length2 = strlen(arr2);
				/*puts(arr);
				puts(arr2);*/
				NewCharArr(arr, arr2, arr3, &length, &length2);
			} break;

			case 3:
			{
				//3.	В заданной строке заменить каждый символ «*» числом, соответствующим номеру по порядку вхождения этого символа в строку
				char arr[size];
				CharFilling(arr);
				int length = strlen(arr);
				StarNumbChange(arr, &length);
			} break;

			case 5:
			{
				//5.	Дана строка из нескольких слов.Слова отделяются друг от друга пробелами или запятыми.Подсчитать количество слов, начинающихся и заканчивающихся одной и той же буквой.
				/*char arr[] = "Hello, my friend!!! How did you get here? Are you okao?";
				int length = strlen(arr);
				int count = 0, count2 = 0;
				int count = SpaceCounter(arr, &length);
				for (int i = 0; i < length - 2; i++)
				{
					if (arr[i] != ' ')
						count++;
					if (arr[i] == ' ')
					{
						if (arr[i - count] == arr[i])
							count2++;
						if(arr)
					}
				}*/
			} break;
		}
	} while (task > 0);
}