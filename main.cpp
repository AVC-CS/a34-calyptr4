#include <iostream>
#include <iomanip>
using namespace std;
int main()
{
  string month1, month2, month3;
  double rainfall1, rainfall2, rainfall3;
  double avg;

  // TODO: Read three months and their rainfall values from standard input
cout << "Type the first month its rainfall. \n";
cin >> month1 >> rainfall1;
cout << "Type the second month its rainfall. \n";
cin >> month2 >> rainfall2;
cout << "Type the third month its rainfall. \n";
  cin >> month3 >> rainfall3;
  // TODO: Calculate the average rainfall
avg = (rainfall1 + rainfall2 + rainfall3) / 3.0;
  cout << fixed << setprecision(2);
  // TODO: Print the result in the required format
  cout << "The average rainfall for " << month1 << ", " << month2 << ", and " << month3 << " is " << avg << endl;
}
