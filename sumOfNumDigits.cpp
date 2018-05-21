#include <iostream>

using namespace std;
int sumOfNums(int num);
int main()
{
	int num;
	cout << "Enter the number to calculate the sum" << endl;
	cin >> num;
	while(!cin){
		cin.clear();
		cin.ignore(1000, '\n');
		cout << "Enter the number to calculate the sum" << endl;
		cin >> num;
	}
	cout << "The sum of figures in your number is " << sumOfNums(num) << endl;
	//system("pause");
	return 0;
}

int sumOfNums(int num)
{
	int sum = 0;
	while (num != 0){
		sum += num % 10;
		num = num / 10;
	}
	return sum;
}
