#include <stdio.h>
#include <locale.h>
#include <math.h>
#include<iostream>
#include"Header.h"
#include<time.h>
#include<stdlib.h>

#define z 10;
char f;
void main()
{
	setlocale(LC_ALL, "rus");
	int N;
	printf("Выберитезадание\n");
	scanf("%d", &N);
	srand(time(NULL));
	do
	{
		switch (N)
		{
		case 1:
		{
			/*1.	Дан двумерный массив целых чисел
			a.	Сформировать одномерный массив, каждый элемент которого равен наибольшему по модулю элементу соответствующего столбца двумерного массива
			b.	Сформировать одномерный массив, каждый элемент которого равен наибольшему по модулю элементу соответствующей строки двумерного массива
			*/
			int *pt;
			int N;
			int M;
			printf("введите матрицу N*M\n");
			scanf("%d*%d", &N, &M);
			pt = NULL;
			pt = (int*)calloc(N*M, sizeof(int));
			if (pt == NULL)
			{
				printf("Ненашел место\n");
				exit(0);
			}
			int *pt2 = NULL;
			pt2 = (int*)calloc(N, sizeof(int));
			if (pt2 == NULL)
			{
				printf("Ненашел место\n");
				exit(0);
			}
			random_dvumer(pt, N, M);
			ShowMassiv2(pt, N, M);
			printf("a)=====================\n");
			ModulMax(pt, pt2, N, M);
			ShowMassiv(pt2, N);
			int *pt3 = NULL;
			pt3 = (int*)calloc(M, sizeof(int));
			if (pt3 == NULL)
			{
				printf("Ненашел место\n");
				exit(0);
			}
			printf("b)=====================\n");
			ModulMaxStrok(pt, pt3, N, M);
			ShowMassiv(pt3, N);

			free(pt);
			free(pt2);
			free(pt3);
		}
		break;
		case 2:
		{
			/*2.	Дан двумерный массив целых чисел
a.	Сформировать одномерный массив, каждый элемент которого равен первому четному элементу соответствующего столбца двумерного массива (если такого элемента в столбце нет, то он равен нулю).
b.	Сформировать одномерный массив, каждый элемент которого равен последнему нечетному элементу соответствующей строки двумерного массива (если такого элемента в строке нет, то он равен нулю).
*/
			int N;
			int M;
			printf("Введите матрицу M-N");
			scanf("%d-%d", &M, &N);
			int *pt = NULL;
			pt = (int*)calloc(M*N, sizeof(int));
			if (pt == NULL)
			{
				printf("Ненашел место\n");
				exit(0);
			}
			int *pt2 = NULL;
			pt2 = (int*)calloc(M, sizeof(int));
			if (pt2 == NULL)
			{
				printf("Ненашел место\n");
				exit(0);
			}
			random_dvumer(pt, N, M);
			ShowMassiv2(pt, N, M);
			ferstchet(pt, M, N, pt2);
			printf("a)=====================\n");
			ShowMassiv(pt2, M);
			int *pt3 = NULL;
			pt3 = (int*)calloc(M, sizeof(int));
			if (pt3 == NULL)
			{
				printf("Ненашел место\n");
				exit(0);
			}
			ferstnechet(pt, M, N, pt3);
			printf("b)=====================\n");
			ShowMassiv(pt3, M);


		}
		break;
		case 3:
		{
			/*3.	Дан двумерный массив.
a.	Сформировать одномерный массив, каждый элемент которого равен количеству элементов соответствующего столбца двумерного массива, больших данного числа
b.	Сформировать одномерный массив, каждый элемент которого равен сумме элементов соответствующей строки двумерного массива, меньших данного числа.
*/
			int N;
			int M;
			printf("Введите матрицу M-N");
			scanf("%d-%d", &M, &N);
			int *pt = NULL;
			pt = (int*)calloc(M*N, sizeof(int));
			if (pt == NULL)
			{
				printf("Ненашел место\n");
				exit(0);
			}
			int *pt2 = NULL;
			pt2 = (int*)calloc(M, sizeof(int));
			if (pt2 == NULL)
			{
				printf("Ненашел место\n");
				exit(0);
			}
			random_dvumer(pt, N, M);
			ShowMassiv2(pt, N, M);
			IfBol(pt, M, N, pt2);
			printf("a)=====================\n");
			ShowMassiv(pt2, M);
			int *pt3 = NULL;
			pt3 = (int*)calloc(M, sizeof(int));
			if (pt3 == NULL)
			{
				printf("Ненашел место\n");
				exit(0);
			}
			Ifmen(pt, M, N, pt3);
			printf("b)=====================\n");
			ShowMassiv(pt3, M);
		}
		break;
		case 4:
		{
/*4.	Дан двумерный массив размером N x M, заполненный целыми числами
a.	Все его элементы, кратные трем, записать в одномерный массив.
b.	Все его положительные элементы записать в один одномерный массив, а остальные — в другой
*/
			int N;
			int M;
			printf("Введите матрицу M-N");
			scanf("%d-%d", &M, &N);
			int *pt = NULL;
			pt = (int*)calloc(M*N, sizeof(int));
			if (pt == NULL)
			{
				printf("Ненашел место\n");
				exit(0);
			}
			int *pt2 = NULL;
			pt2 = (int*)calloc(1, sizeof(int));
			if (pt2 == NULL)
			{
				printf("Ненашел место\n");
				exit(0);
			}
			random_dvumer(pt, N, M);
			ShowMassiv2(pt, N, M);
			int count = 0;
			Krat3(pt, M, N, pt2, 0, &count);
			ShowMassiv(pt2, count);
		}
		break;
		case 5:
		{
/*5.	Ввести целые числа. Создать из них массив. Вычислить сумму чётных элементов массива*/
			int N;
			int M;
			printf("Введите матрицу M-N");
			scanf("%d-%d", &M, &N);
			int *pt = NULL;
			pt = (int*)calloc(M*N, sizeof(int));
			if (pt == NULL)
			{
				printf("Ненашел место\n");
				exit(0);
			}
			int *pt2 = NULL;
			pt2 = (int*)calloc(1, sizeof(int));
			if (pt2 == NULL)
			{
				printf("Ненашел место\n");
				exit(0);
			}
			random_dvumer(pt, N, M);
			ShowMassiv2(pt, N, M);
			Summachet(pt, M, N);
		}
		break;
		case 6:
		{
			//6.	Ввести целое число N и массив из N вещественных чисел.Определить количество отрицательных элементов массива
			int N;
			printf("Введите массив");
			scanf("%d",&N);
			int *pt = NULL;
			pt = (int*)calloc(N, sizeof(int));
			random_odnoner(pt, N);
			ShowMassiv(pt, N);
			minus(pt, N);
		}
		break;
	  case 7:
		{
		  /*7.	Ввести целое число N. Создать массив из N вещественных чисел. Вычислить произведение элементов, модуль которых меньше 7.*/
		  int N;
		  printf("Введите массив");
		  scanf("%d", &N);
		  int *pt = NULL;
		  pt = (int*)calloc(N, sizeof(int));
		  random_odnoner(pt, N);
		  ShowMassiv(pt, N);
		  modulmen7(pt, N);
		}
		break;
	  case 8:
	  {
		  /*8.	Ввести вещественные числа. Создать из них массив определить наибольший элемент массива*/
		  int N;
		  printf("Введите массив");
		  scanf("%d", &N);
		  int *pt = NULL;
		  pt = (int*)calloc(N, sizeof(int));
		  random_odnoner(pt, N);
		  ShowMassiv(pt, N);
		  Max(pt, N);
	  }
	  break;
	  case 9:
	  {
		  /*9.	Ввести целое число N и массив из N целых чисел. Определить наименьший элемент массива*/
		  int N;
		  printf("Введите массив");
		  scanf("%d", &N);
		  int *pt = NULL;
		  pt = (int*)calloc(N, sizeof(int));
		  random_odnoner(pt, N);
		  ShowMassiv(pt, N);
		  Min(pt, N);
	  }
	  break;
	  case 10:
	  {
		  /*10.	Ввести вещественные числа. Создать из них массив. Определить среднее арифметическое элементов массива.*/
		  /*9.	Ввести целое число N и массив из N целых чисел. Определить наименьший элемент массива*/
		  int N;
		  printf("Введите массив");
		  scanf("%d", &N);
		  int *pt = NULL;
		  pt = (int*)calloc(N, sizeof(int));
		  random_odnoner(pt, N);
		  ShowMassiv(pt, N);
		  srednee(pt, N);
	  }
	  break;
	  case 11:
	  {
		  /*11.	Ввести вещественные числа. Создать из них массив. Определить количество неотрицательных элементов массива*/
		  int N;
		  printf("Введите массив");
		  scanf("%d", &N);
		  int *pt = NULL;
		  pt = (int*)calloc(N, sizeof(int));
		  random_odnoner(pt, N);
		  ShowMassiv(pt, N);
		  Neotr(pt, N);
	  }
	  break;
	  case 12:
	  {
		  /*12.	Ввести целое число N и массив из N вещественных чисел. Определить индекс последнего отрицательного элемента массива*/
		  int N;
		  printf("Введите массив");
		  scanf("%d", &N);
		  int *pt = NULL;
		  pt = (int*)calloc(N, sizeof(int));
		  random_odnoner(pt, N);
		  ShowMassiv(pt, N);
		  posled(pt, N);
	  }
	  break;
	  case 13:
	  {
		  /*13.	Ввести целое число N. Создать массив из N вещественных чисел. Вычислить сумму минимального и максимального элементов.*/
		  int N;
		  printf("Введите массив");
		  scanf("%d", &N);
		  int *pt = NULL;
		  pt = (int*)calloc(N, sizeof(int));
		  random_odnoner(pt, N);
		  ShowMassiv(pt, N);
		  MinMax(pt, N);
	  }
	  break;
	  case 14:
	  {
		  /*14.	Ввести вещественные числа. Создать из них массив. Вычислить произведение минимального и максимального элементов.*/
		  int N;
		  printf("Введите массив");
		  scanf("%d", &N);
		  int *pt = NULL;
		  pt = (int*)calloc(N, sizeof(int));
		  random_odnoner(pt, N);
		  ShowMassiv(pt, N);
		  MinMaxProiz(pt, N);
	  }
	  break;
	  case 15:
	  {
		  /*15.	Ввести целое число N и массив из N целых чисел. Определить, есть ли в массиве число 20.*/
		  int N;
		  printf("Введите массив");
		  scanf("%d", &N);
		  int *pt = NULL;
		  pt = (int*)calloc(N, sizeof(int));
		  random_odnoner(pt, N);
		  ShowMassiv(pt, N);
		  Gde20(pt, N);

	  }
		}
		printf("Хотите продолжить проверять\n");
		scanf("%c", &f);
	} while (f == 'y');
}