# include <iostream>
using namespace std;

double main() {
  double metricTon = 35273.92;
  double userInput;
  double userDividedByMetric = userInput / metricTon; //converts ounces to metric tons
  double boxesNeeded = metricTon / userInput; //calculates units of cereal boxes needed for one metric ton
  cout << "Enter the weight of a package of breakfast cereal (in ounces)" << endl;
  cin >> userInput;
  cout << endl << userDividedByMetric << " metric tons" << endl;
  cout << "You need " << boxesNeeded << " boxes to yield one metric ton of cereal" << endl;
  return 0;
}
