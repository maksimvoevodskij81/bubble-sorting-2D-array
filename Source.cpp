#include<iostream>
#include<stdlib.h>
#include<time.h>
using namespace std;

void showArr(int arr[][6], const int  SIZE_ROW, const int SIZE_COL);
void fillArr(int arr[][6], const int  SIZE_ROW, const int SIZE_COL);

int main()
{
	setlocale(LC_ALL, "ru");
	srand(time(0));
	cout << " Sort bubble :\n\n\n";
	const int SIZE_ROW = 5;
	const int SIZE_COL = 6;
	int arr[SIZE_ROW][SIZE_COL];
	int bufer = 0;
	
	fillArr(arr, SIZE_ROW, SIZE_COL);
	showArr(arr, SIZE_ROW, SIZE_COL);
	cout << "++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++" << endl;
	for (int k = 0; k < SIZE_ROW; k++)
	{
		for (int x = 0; x < SIZE_ROW; x++)
		{
			for (int i = 0; i < SIZE_ROW ; i++)
			{
				for (int j = 0; j < SIZE_COL ; j++)
				{
					if (i +1== SIZE_ROW && j+1 == SIZE_COL)
					{
						continue;
					}
					else
					{
						if (j + 1 == SIZE_COL && arr[i][j] > arr[i + 1][0])
						{
							bufer = arr[i][j];
							arr[i][j] = arr[i + 1][0];
							arr[i + 1][0] = bufer;	
						}
						else
						{
							if (arr[i][j] > arr[i][j + 1])
							{
								bufer = arr[i][j];
								arr[i][j] = arr[i][j + 1];
								arr[i][j + 1] = bufer;	
							}
						}			
					}
				}
			}	
		}
	}
	showArr(arr, SIZE_ROW, SIZE_COL);
	system("pause");
	return 0;
}

void showArr(int arr[][6], const int  SIZE_ROW, const int SIZE_COL)
{
	for (int i = 0; i < SIZE_ROW; i++)
	{
		for (int j = 0; j < SIZE_COL; j++)
		{
			cout << arr[i][j] << "\t";
		}
		cout << endl << endl;
	}
}
void fillArr(int arr[][6], const int  SIZE_ROW, const int SIZE_COL)
{
	for (int i = 0; i < SIZE_ROW; i++)
	{
		for (int j = 0; j < SIZE_COL; j++)
		{
			arr[i][j] = rand() % 50;

		}
	}
}
