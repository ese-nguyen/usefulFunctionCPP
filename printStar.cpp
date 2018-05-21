#include <iostream>

using namespace std;
void printStar(int n);
int main()
{
	int num;
	cout << "How many lines do you want to print? " << endl;
	cin >> num;
	printStar(num);
	system("pause");
	return 0;
}

void printStar(int n)
{
	int i, j;
	for (i = 0; i < n; i++) {
		for (j = 0; j < n + i; j++) {
			if (j < n - 1 - i) {
				cout << " ";
			}
			else {
				cout << "*";
			}
		}
		cout << endl;
	}
}
