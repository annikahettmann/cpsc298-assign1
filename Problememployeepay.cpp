# include <iostream>
using namespace std;

double main() {
  double regularRate = 16.00; //amount earned per hour
  double userHours; //how many hours the user has worked in a week
  double grossPay; //total pay excluding tax
  double extraGrossPay; //if user inputs more than 40 hours
  double overtimeHours; //amount of hours above 40, if applicable
  double ssTaxAmount; //amount withdrawn for social security tax
  double fedIncomeAmount; //amount withdrawn for federal income tax
  double stateIncomeAmount; //amount withdrawn for state income tax
  double medInsuranceAmount = 10.00; //amount withdrawn for medical insurance
  double netPay; //net take-home pay
  cout << "How many hours have you worked this week?" << endl;
  cin >> userHours;
  if (userHours > 40.00) {
    overtimeHours = userHours - 40.00;
    extraGrossPay = overtimeHours * 24.00
    grossPay = (userHours - overtimeHours) * regularRate;
    grossPay += extraGrossPay; //add overtime pay to regular pay
  }
  else { //if user does not work overtime hours
    grossPay = userHours * regularRate;
  }

  ssTaxAmount = grossPay * 0.06; //6% social security tax
  fedIncomeAmount = grossPay * 0.14; //14% federal income tax
  stateIncomeAmount = grossPay * 0.05; //5% state income tax
  netPay = grossPay - ssTaxAmount - fedIncomeAmount - stateIncomeAmount - medInsuranceAmount; //subtracts tax amounts from gross pay

  cout << endl << "Gross pay: " << grossPay << endl;
  cout << "Amount withheld for Social Security tax: " << ssTaxAmount << endl;
  cout << "Amount withheld for federal income tax: " << fedIncomeAmount << endl;
  cout << "Amount withheld for state income tax: " << stateIncomeAmount << endl;
  cout << "Net take-home pay: " << netPay << endl;
  return 0;
}
