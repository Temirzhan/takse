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
	printf("���������������\n");
	scanf("%d", &N);
	srand(time(NULL));
	do
	{
		switch (N)
		{
		case 1:
		{
			/*1.	��� ��������� ������ ����� �����
			a.	������������ ���������� ������, ������ ������� �������� ����� ����������� �� ������ �������� ���������������� ������� ���������� �������
			b.	������������ ���������� ������, ������ ������� �������� ����� ����������� �� ������ �������� ��������������� ������ ���������� �������
			*/
			int *pt;
			int N;
			int M;
			printf("������� ������� N*M\n");
			scanf("%d*%d", &N, &M);
			pt = NULL;
			pt = (int*)calloc(N*M, sizeof(int));
			if (pt == NULL)
			{
				printf("������� �����\n");
				exit(0);
			}
			int *pt2 = NULL;
			pt2 = (int*)calloc(N, sizeof(int));
			if (pt2 == NULL)
			{
				printf("������� �����\n");
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
				printf("������� �����\n");
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
			/*2.	��� ��������� ������ ����� �����
a.	������������ ���������� ������, ������ ������� �������� ����� ������� ������� �������� ���������������� ������� ���������� ������� (���� ������ �������� � ������� ���, �� �� ����� ����).
b.	������������ ���������� ������, ������ ������� �������� ����� ���������� ��������� �������� ��������������� ������ ���������� ������� (���� ������ �������� � ������ ���, �� �� ����� ����).
*/
			int N;
			int M;
			printf("������� ������� M-N");
			scanf("%d-%d", &M, &N);
			int *pt = NULL;
			pt = (int*)calloc(M*N, sizeof(int));
			if (pt == NULL)
			{
				printf("������� �����\n");
				exit(0);
			}
			int *pt2 = NULL;
			pt2 = (int*)calloc(M, sizeof(int));
			if (pt2 == NULL)
			{
				printf("������� �����\n");
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
				printf("������� �����\n");
				exit(0);
			}
			ferstnechet(pt, M, N, pt3);
			printf("b)=====================\n");
			ShowMassiv(pt3, M);


		}
		break;
		case 3:
		{
			/*3.	��� ��������� ������.
a.	������������ ���������� ������, ������ ������� �������� ����� ���������� ��������� ���������������� ������� ���������� �������, ������� ������� �����
b.	������������ ���������� ������, ������ ������� �������� ����� ����� ��������� ��������������� ������ ���������� �������, ������� ������� �����.
*/
			int N;
			int M;
			printf("������� ������� M-N");
			scanf("%d-%d", &M, &N);
			int *pt = NULL;
			pt = (int*)calloc(M*N, sizeof(int));
			if (pt == NULL)
			{
				printf("������� �����\n");
				exit(0);
			}
			int *pt2 = NULL;
			pt2 = (int*)calloc(M, sizeof(int));
			if (pt2 == NULL)
			{
				printf("������� �����\n");
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
				printf("������� �����\n");
				exit(0);
			}
			Ifmen(pt, M, N, pt3);
			printf("b)=====================\n");
			ShowMassiv(pt3, M);
		}
		break;
		case 4:
		{
/*4.	��� ��������� ������ �������� N x M, ����������� ������ �������
a.	��� ��� ��������, ������� ����, �������� � ���������� ������.
b.	��� ��� ������������� �������� �������� � ���� ���������� ������, � ��������� � � ������
*/
			int N;
			int M;
			printf("������� ������� M-N");
			scanf("%d-%d", &M, &N);
			int *pt = NULL;
			pt = (int*)calloc(M*N, sizeof(int));
			if (pt == NULL)
			{
				printf("������� �����\n");
				exit(0);
			}
			int *pt2 = NULL;
			pt2 = (int*)calloc(1, sizeof(int));
			if (pt2 == NULL)
			{
				printf("������� �����\n");
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
/*5.	������ ����� �����. ������� �� ��� ������. ��������� ����� ������ ��������� �������*/
			int N;
			int M;
			printf("������� ������� M-N");
			scanf("%d-%d", &M, &N);
			int *pt = NULL;
			pt = (int*)calloc(M*N, sizeof(int));
			if (pt == NULL)
			{
				printf("������� �����\n");
				exit(0);
			}
			int *pt2 = NULL;
			pt2 = (int*)calloc(1, sizeof(int));
			if (pt2 == NULL)
			{
				printf("������� �����\n");
				exit(0);
			}
			random_dvumer(pt, N, M);
			ShowMassiv2(pt, N, M);
			Summachet(pt, M, N);
		}
		break;
		case 6:
		{
			//6.	������ ����� ����� N � ������ �� N ������������ �����.���������� ���������� ������������� ��������� �������
			int N;
			printf("������� ������");
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
		  /*7.	������ ����� ����� N. ������� ������ �� N ������������ �����. ��������� ������������ ���������, ������ ������� ������ 7.*/
		  int N;
		  printf("������� ������");
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
		  /*8.	������ ������������ �����. ������� �� ��� ������ ���������� ���������� ������� �������*/
		  int N;
		  printf("������� ������");
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
		  /*9.	������ ����� ����� N � ������ �� N ����� �����. ���������� ���������� ������� �������*/
		  int N;
		  printf("������� ������");
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
		  /*10.	������ ������������ �����. ������� �� ��� ������. ���������� ������� �������������� ��������� �������.*/
		  /*9.	������ ����� ����� N � ������ �� N ����� �����. ���������� ���������� ������� �������*/
		  int N;
		  printf("������� ������");
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
		  /*11.	������ ������������ �����. ������� �� ��� ������. ���������� ���������� ��������������� ��������� �������*/
		  int N;
		  printf("������� ������");
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
		  /*12.	������ ����� ����� N � ������ �� N ������������ �����. ���������� ������ ���������� �������������� �������� �������*/
		  int N;
		  printf("������� ������");
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
		  /*13.	������ ����� ����� N. ������� ������ �� N ������������ �����. ��������� ����� ������������ � ������������� ���������.*/
		  int N;
		  printf("������� ������");
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
		  /*14.	������ ������������ �����. ������� �� ��� ������. ��������� ������������ ������������ � ������������� ���������.*/
		  int N;
		  printf("������� ������");
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
		  /*15.	������ ����� ����� N � ������ �� N ����� �����. ����������, ���� �� � ������� ����� 20.*/
		  int N;
		  printf("������� ������");
		  scanf("%d", &N);
		  int *pt = NULL;
		  pt = (int*)calloc(N, sizeof(int));
		  random_odnoner(pt, N);
		  ShowMassiv(pt, N);
		  Gde20(pt, N);

	  }
		}
		printf("������ ���������� ���������\n");
		scanf("%c", &f);
	} while (f == 'y');
}