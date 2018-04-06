#include <stdio.h>
#include <locale.h>
#include <math.h>
#include<iostream>


void random_dvumer(int *pt, int len, int len2)
{
	for (int i = 0; i < len; i++)
	{
		for (int j = 0; j < len2; j++)
		{
			*(pt + i*len + j) = 1 + rand() % 100;
		}
	}
}
void random_odnoner(int *pt, int len)
{
	for (int i = 0; i < len; i++)
	{
		*(pt + i) = -100 + rand() % 100;
	}
}
void ShowMassiv2(int *pt, int len, int len2)
{
	for (int i = 0; i < len; i++)
	{
		for (int j = 0; j < len2; j++)
		{
			printf("A[%d][%d]=%d ", i, j, *(pt + i*len2 + j));
		}
		printf("\n");
	}
}
void ShowMassiv(int *pt, int len)
{
	for (int i = 0; i < len; i++)
	{
		printf("A[%d]=%d\n", i, *(pt + i));
	}
}

void Massiv(int *pt, int *pt1, int len, int len2)
{
	int chet = 0;
	for (int i = 0; i < len; i++)
	{
		for (int j = 0; j < len2; j++)
		{
			if (*(pt + i*len2 + j) % 2 == 0)
			{
				chet += *(pt + i*len2 + j);
			}
		}
		*(pt1 + i) = chet;
		chet = 0;
	}

}
void Massiv2(int *pt, int *pt1, int len, int len2)
{
	int chet = 0;
	for (int i = 0; i < len; i++)
	{
		for (int j = 0; j < len2; j++)
		{
			if (*(pt + i*len2 + j) <0)
			{
				chet += *(pt + i*len2 + j);
			}
		}
		*(pt1 + i) = chet;
		chet = 0;
	}

}
void MassivKrat3(int *pt, int *pt1, int len, int len2)
{
	int chet = 0;
	for (int i = 0; i < len; i++)
	{
		for (int j = 0; j < len2; j++)
		{
			if (*(pt + i*len2 + j) % 3 == 0)
			{
				chet += *(pt + i*len2 + j);
			}
		}
		*(pt1 + i) = chet;
		chet = 0;
	}

}


void Krat3(int* pt, int Len, int *Krat3)
{
	for (int i = 0; i < Len; i++)
	{
		if (*(pt + i) % 3 == 0)
		{
			*Krat3 = *(pt + i);
		}
	}
}
void Nechet(int* pt, int Len, int *proiz)
{
	for (int i = 0; i < Len; i++)
	{
		if (*(pt + i) % 2 != 0)
		{
			*proiz = *(pt + i);
		}
	}
}
void Summ(int* pt, int Len, int *proiz)
{
	for (int i = 0; i < Len; i++)
	{
		if (*(pt + i) % 2 != 0)
		{
			*proiz = *(pt + i);
		}
	}
}

void ModulMax(int *pt, int *pt2, int len, int len2)
{
	int max = 0;
	for (int i = 0; i < len2; i++)
	{
		for (int j = 0; j < len; j++)
		{
			if (*(pt + j*len2 + i) > max)
				max = *(pt + j*len2 + i);
		}
		*(pt2 + i) = max;
	}
}
void ModulMaxStrok(int *pt, int *pt2, int len, int len2)
{
	int max = 0;
	for (int i = 0; i < len2; i++)
	{
		for (int j = 0; j < len; j++)
		{
			if (*(pt + i*len2 + j) > max)
				max = *(pt + i*len2 + j);
		}
		*(pt2 + i) = max;
	}
}


void ferstchet(int *pt, int len,int len2, int *pt2)
{
	for (int i = 0; i < len; i++)
	{
		for (int j = 0; j < len2; j++)
		{
			if (*(pt + i*len + j) % 2 == 0)
			{
				*(pt2 + i) = *(pt + i*len + j);
				break;
			}
		
		}

	}
}
void ferstnechet(int *pt, int len, int len2, int *pt2)
{
	for (int i = 0; i < len; i++)
	{
		for (int j = 0; j < len2; j++)
		{
			if (*(pt + i*len + j) % 2 != 0)
			{
				*(pt2 + i) = *(pt + i*len + j);
				break;
			}

		}

	}
}
void IfBol (int *pt, int len, int len2, int *pt2)
{
	int d=0;
	printf("Введите число");
	scanf("%d", &d);
	for (int i = 0; i < len; i++)
	{
		for (int j = 0; j < len2; j++)
		{
			if (*(pt + i*len + j) > d)
			{
				*(pt2 + i) = *(pt + i*len + j);
				break;
			}

		}

	}
}
void Ifmen(int *pt, int len, int len2, int *pt2)
{
	int d = 0;
	printf("Введите число");
	scanf("%d", &d);
	for (int i = 0; i < len; i++)
	{
		for (int j = 0; j < len2; j++)
		{
			if (*(pt + i*len + j) < d)
			{
				*(pt2 + i) = *(pt + i*len + j);
				break;
			}

		}

	}
}
void Krat3(int *pt, int len, int len2, int *pt2,int prosto,int *count)
{
	if (prosto == 1)
		pt2 = (int*)malloc(*count * sizeof(int));
	for (int i = 0; i < len; i++)
	{
		for (int j = 0; j < len2; j++)
		{
			if (*(pt + i*len + j) %3==0)
			{
				if (prosto == 1)
				{
					*(pt2 + i) = *(pt + i*len + j);
			}
				if (prosto == 0)
				*count+=1;
			}

		}

	}
	if(prosto==0)
	Krat3(pt, len, len2, pt2, 1, count);
	else
	{
		int count2 = *count;
		ShowMassiv(pt2, count2);
	}
}
void Summachet(int *pt, int len, int len2)
{
	int chet = 0;
	for (int i = 0; i < len; i++)
	{
		for (int j = 0; j < len2; j++)
		{
			if (*(pt + i*len2 + j) % 3 == 0)
			{
				chet += *(pt + i*len2 + j);
			}
		}
	}
	printf("Сумма=%d/n", chet);
}

void  minus(int *pt, int len)
{
	int summ=0;
	for (int i = 0; i < len; i++)
	{
			if (*(pt + i)<0)
			{
				summ++;
			}
	}
	printf("колл меньще 0=%d/n", summ);
}
void  modulmen7(int *pt, int len)
{
	int summ =1;
	for (int i = 0; i < len; i++)
	{
		if (abs(*(pt + i))<7)
		{
			summ*= *(pt + i);
		}
	}
	printf("произведение = %d/n", summ);
}

void  Max(int *pt, int len)
{
	int max = 0;
	for (int i = 0; i < len; i++)
	{
		if (max<*(pt + i))
		{
			max = *(pt + i);
		}
	}
	printf("max = %d/n", max);
}
void  Min(int *pt, int len)
{
	int max = 90000;
	for (int i = 0; i < len; i++)
	{
		if (max>*(pt + i))
		{
			max = *(pt + i);
		}
	}
	printf("min= %d/n", max);
}
void  srednee(int *pt, int len)
{
	int max = 0;
	for (int i = 0; i < len; i++)
	{

			max+= *(pt + i);

	}
	printf("среднее арифмет %d/n", max/len);
}
void  Neotr(int *pt, int len)
{
	int max =0;
	for (int i = 0; i < len; i++)
	{
		if (*(pt + i)>=0)
		{
			max++;
		}
	}
	printf("Колличество неотр %d/n", max);
}
void  posled(int *pt, int len)
{
	int max = 0;
	for (int i = 0; i < len; i++)
	{
		if (*(pt + i) < 0)
		{
			max=i;
		}
	}
	printf("Последний отрицательный %d/n", max);
}
void  MinMax(int *pt, int len)
{
	int max = -9999;
	int min = 9999;
	for (int i = 0; i < len; i++)
	{
		if (max<*(pt + i))
		{
			max = *(pt + i);
		}
		if (min>*(pt + i))
		{
			min = *(pt + i);
		}
	}
	printf("сумма последних %d/n", max+min);
}
void  MinMaxProiz(int *pt, int len)
{
	int max = -9999;
	int min = 9999;
	for (int i = 0; i < len; i++)
	{
		if (max<*(pt + i))
		{
			max = *(pt + i);
		}
		if (min>*(pt + i))
		{
			min = *(pt + i);
		}
	}
	printf("произведение последних %d/n", max * min);
}

void  Gde20(int *pt, int len)
{
	int max = 0;

	for (int i = 0; i < len; i++)
	{
		if (20==*(pt + i))
		{
			max =   i;
		}

	}
	if(max!=0)
	printf("20 нахоидтся в  %d/n", max );
	else 
		printf("netu");
}