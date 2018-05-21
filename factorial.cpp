#include<iostream>

using namespace std;

int factorial(int n);

int main(){
  int num;
  cout << "Enter the number you want to factorial:" << endl;
  cin >> num;
  while(!cin || num < 0){
    cin.clear();
    cin.ignore(1000, '\n');
    cout << "Enter the number you want to factorial:" << endl;
    cin >> num;
  }
  cout << num << " != " << factorial(num);
  return 0;
}

// Recursive
int factorial(int n){
  if(n < 2)
    return 1;
  else
    return (n * factorial(n-1));
}

// Normal
// int factorial(int n){
//   if(n < 2)
//     return 1;
//   else{
//     int fac = 1;
//     for(int i = n; i > 1; i--){
//       fac *= i;
//     }
//     return fac;
//   }
// }
