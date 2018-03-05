#include <iostream>
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <locale.h>
#include "Header.h"
#define size 81
#define limit 10
using namespace std;

int TaskNumb()
{
	int task;
	cout << "Введите номер задания - ";
	cin >> task;
	return task;
}

char CharFilling(char *string)
{
	cout << "Enter text - ";
	fgets(string, size, stdin);
	return *string;
}

int SpaceCounter(char * string, int *length)
{
	int count = 0;
	for (int i = 0; i < *length; i++)
	{
		if (string[i] == ' ')
			count++;
	}
	return count;
}

int ChangeWordsPlaces(char *string, int *length, int *count)
{	
	char arr[size];
	/*strcpy(arr, string);
	puts(arr);
	system("pause");*/
	int a = 0, b = 0;
	for (int i = 0; i < *length - 2; i++)
	{	
		if (string[i] == ' ')
			a++;
		if (a >= *count)
		{
			arr[b] = string[i + 1];
			b++;
		}
	}
	puts(arr);
	system("pause");
	a = 0;
	for (int i = 0; i < *length - 2; i++)
	{
		if (string[i] == ' ')
		{	
			for (int j = i; j < *length - 2; j++)
			{
				arr[b] = string[j];
				b++;
			}
		}
	}
	puts(arr);
	system("pause");
	int c = 0;
	for (int i = 0; i < *length - 2; i++)
	{
		if (arr[i] == ' ')
		{
			a++;
			if (a == *count)
			{
				for (int j = i; j < *length - 2; j++)
				{	
					if (c == 0)
						arr[j] = ' ';
					arr[j + 1] = string[c];
					c++;
				}
			}
		}
	}

	// 
	/*for (int i = 0; i < *length - 1; i++)
	{
		cout << arr[i];
	}
	cout << endl;*/

	arr[*length - 1] = '\0';
	puts(arr);
	/*for (int i = 0; i < *length; i++)
	{
		cout << arr[i];
	}*/
	return *arr;
}

int NewCharArr(char *arr1, char*arr2, char*arr3, int *length1, int *length2)
{	
	int count = 0, a = 0;
	for (int i = 0; i < *length1 - 2; i++)
	{
		count = 0;
		for (int j = 0; j < *length2 - 2; j++)
		{	
			//count = 0;
			if (arr1[i] == arr2[j])
			{
				if (count == 0)
				{	
					arr3[a] = arr2[j];
					count++;
					a++;
				}
			}
		}
	}
	arr3[a + 1] = '\0';
	puts(arr3);
	return *arr3;
}

int StarNumbChange(char *arr, int *length)
{
	for (int i = 0; i < *length - 2; i++)
	{
		if (arr[i] == '*')
			arr[i] = i;
	}
	puts(arr);
	return *arr;
}