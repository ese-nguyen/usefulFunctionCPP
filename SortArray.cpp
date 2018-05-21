#include <iostream>

using namespace std;
void sortArray(float array[], int size);
int main()
{
	const int MAX_SIZE = 15;
	float num[MAX_SIZE];


	cout << "Input 15 number in any order " << endl;
	for (int i = 0; i < MAX_SIZE; i++)
	{
		cin >> num[i];
		while(!cin){
			cin.clear();
			cin.ignore(1000, '\n');
			cin >> num[i];
		}
	}

	cout << "The number array in orginal order is " << endl;
	for (int i = 0; i < MAX_SIZE; i++)
	{
		cout << num[i] << " ";
	}
	cout << endl;
	sortArray(num, 15);
	cout << "The array ater sorting is: " << endl;
	for (int i = 0; i < MAX_SIZE; i++){
		cout << num[i] << " ";
	}
	cout << endl;
	system("pause");
	return 0;
}

void sortArray(float array[], int size)
{
	bool swap;
	float temp;
	do
	{
		swap = false;
		for (int count = 0; count < (size - 1); count++)
		{
			if (array[count] > array[count + 1]) // change this if you want to sort desending 
			{
				temp = array[count];
				array[count] = array[count + 1];
				array[count + 1] = temp;
				swap = true;
			}
		}
	} while (swap);
}
