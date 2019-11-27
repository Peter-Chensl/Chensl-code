#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
#include <windows.h>

#define Mon 1
#define Tues 2
#define Wed 3
#define Thur 4
#define Fri 5
#define Sat 6
#define Sun 7

#define January_day 31
#define February_day 28
#define March_day 31
#define April_day 30
#define May_day 31
#define June_day 30
#define July_day 31
#define Augest_day 31
#define September_day 30
#define October_day 31
#define November_day 30
#define December_day 31

#define first1month January_day
#define first2month January_day+February_day
#define first3month January_day+February_day+March_day 
#define first4month January_day+February_day+March_day+April_day 
#define first5month  January_day+February_day+March_day+April_day +May_day
#define first6month  January_day+February_day+March_day+April_day +May_day+June_day
#define first7month  January_day+February_day+March_day+April_day +May_day+June_day+July_day
#define first8month January_day+February_day+March_day+April_day +May_day+June_day+July_day+Augest_day
#define first9month January_day+February_day+March_day+April_day +May_day+June_day+July_day+Augest_day+September_day
#define first10month January_day+February_day+March_day+April_day +May_day+June_day+July_day+Augest_day+September_day+October_day
#define first11month January_day+February_day+March_day+April_day +May_day+June_day+July_day+Augest_day+September_day+October_day+November_day
#define first12month January_day+February_day+March_day+April_day +May_day+June_day+July_day+Augest_day+September_day+October_day+November_day+December_day

int known_weekday = Tues;
int known_year = 1901;
int known_month = 1;
int known_day = 1;
int day_count(int month)
{
	switch (month)
	{
	case 1:
		return 0;
		break;
	case 2:
		return first1month;
		break;
	case 3:
		return first2month;
		break;
	case 4:
		return first4month;
		break;
	case 5:
		return first5month;
		break;
	case 6:
		return first6month;
		break;
	case 7:
		return first7month;
		break;
	case 8:
		return first8month;
		break;
	case 9:
		return first9month;
		break;
	case 10:
		return first10month;
		break;
	case 11:
		return first11month;
		break;
	case 12:
		return first12month;
		break;
	}
}
char *month_name(int month)
{
	switch (month)
	{
	case 1:
		return "һ��";
		break;
	case 2:
		return "����";
		break;
	case 3:
		return "����";
		break;
	case 4:
		return "����";
		break;
	case 5:
		return "����";
		break;
	case 6:
		return "����";
		break;
	case 7:
		return "����";
		break;
	case 8:
		return "����";
		break;
	case 9:
		return "����";
		break;
	case 10:
		return "ʮ��";
		break;
	case 11:
		return "ʮһ��";
		break;
	case 12:
		return "ʮ����";
		break;
	default:
		break;
	}
}

/*����ʽ��ӡĳ������*/
void first_line_print(int month, int year)
{
	printf("%d8�� %s \n", year, month_name(month));
}
/*����ʽ��ӡ��������*/
void week_print()
{
	printf("%-3s%-3s%-3s%-3s%-3s%-3s%-3s\n", "��", "һ", "��", "��", "��", "��", "��");
}

/*���������·�����֪����֮��ľ�������*/
int date_distance_count(int month, int year)
{
	int leap_year_count = 0;
	int i;
	int distance;
	if (year > known_year)
	{
		for (i = known_year; i < year; i++)
		{
			if (((i % 4 == 0) && (year % 100 != 0)) || year % 400 == 0)
			{
				leap_year_count++;
			}
		}
	}
	else 
		if (year == known_year)
		{
			if (month > 2)
			{
				leap_year_count = 1;
			}
		}
	distance = year - (year - known_year) * 365 + leap_year_count + day_count(month);
	return  distance;
}
/*ȷ�����·ݵ�һ�������ڼ�*/
int makesure_firstday_weekday(int month, int year)
{
	int date_distance = 0;
	int weekday;

	date_distance = date_distance_count(month,year);
	weekday = (known_weekday + date_distance) % 7;

	return weekday;

}
/*���δ�ӡ�����·ݵ�����*/
void print_in_turn(int month, int firstday, int year)
{
	int i = 1;
	int weekday;

	switch (firstday)
	{
	case Sun:
		break;
	case Mon:
		printf("%-3s", "");
		break;
	case Tues:
		printf("%-6s", "");
		break;
	case Wed:
		printf("%-12s", "");
		break;
	case Thur:
		printf("%-15s", "");
		break;
	case Fri:
		printf("%-18s", "");
		break;
	case Sat:
		printf("%-21s", "");
		break;
	}
	switch (month)
	{
	case 1:
	case 3:
	case 5:
	case 7:
	case 8:
	case 10:
	case 12:
	{
		for (i = 0; i < 31; i++)
		{
			weekday = (firstday + i) % 7;
			printf("%-3d", i + 1);

			if (weekday == Sat)
			{
				printf("\n");

			}
		}
		break;
	}
	case 2:
	{
		if ((year % 4 == 0) && (year % 100 != 0) || (year % 400 == 0))
		{
			for (i = 0; i < 29; i++)
			{
				weekday = (firstday + i) % 7;
				printf("%-3d", i + 1);

				if (weekday == Sat)
				{
					printf("\n");
				}
			}
			break;
		}
		else
		{
			for (i = 0; i < 28; i++)
			{
				weekday = (firstday + i) % 7;
				printf("-3d", i + 1);

				if (weekday == Sat)
				{
					printf("\n");
				}
			}
			break;
		}
	}
	case 4:
	case 6:
	case 9:
	case 11:
	{
		for (i = 0; i < 30; i++)
		{
			weekday = (firstday + i) % 7;
			printf("%-3d", i + 1);

			if (weekday == Sat)
			{
				printf("\n");
			}
		}
		break;
	}
	}

}
void date_print(int month, int year)
{
	int firstday;

	firstday = makesure_firstday_weekday(month, year);
	print_in_turn(month, firstday, year);
	printf("\n");
}
void main_month(int month, int year)
{
	first_line_print(month, year);
	week_print();
	date_print(month, year);
	printf("\n\n");
}
void main_calendar(int year)
{
	int i;
	for (i = 1; i < 12; i++)
	{
		main_month(i, year);
	}
}
int main()
{
	int year;

	printf("��������ݣ�year = ");
	scanf("%d", &year);
	printf("\n");

	while (year < 1902)
	{
		printf("���������1901����·�\n");
		scanf("%d", &year);
		printf("\n");
	}
	main_calendar(year);
	scanf(" ");
	return 0;
}