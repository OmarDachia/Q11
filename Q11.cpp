#include <iostream>
#include <cmath>

using namespace std;

int main() {
  cout << "#11:-> Write a program to convert temperature from degree Celsius to Fahrenheit & vice-versa. Use the formula: F=9C/5 + 32 "<<endl;
  cout << "\n=========================================================================================================================";
  cout << "\nProgram Start here:->" << endl;
  cout << "\n+++++++++++++++++++++"<<endl;

  int conversion_type = 0;
  double temprature =0;

  cout << "Select Conversion Type number: "<<endl;
  cout << "1. Conversion Celsius to Fahrenheit"<<endl;
  cout << "2. Conversion Fahrenheit to Celsius"<<endl;
  cin >> conversion_type;
  if(conversion_type==1)
  {
      cout << "Type temperature in Celsius: "<<endl;
      cin >> temprature;
      cout << "Fahrenheit = "<< (temprature *(9/5) + 32)<<endl;
  }
  else
  {
      cout << "Type temperature in Fahrenheit: "<<endl;
      cin >> temprature;
      cout << "Celsius = "<< ((temprature - 32) * 5/9)<<endl;

  }

  return 0;
}







