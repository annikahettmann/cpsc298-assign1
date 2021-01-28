# include <iostream>
using namespace std;

int main() {
  int maximumCapacity;
  int numberPeople;
  int additionalPeople = maximumCapacity - numberPeople; //if attendees are lower than or equal to max capacity, calculate how many more people can attend the meeting before hitting the maximum
  int excludedPeople = numberPeople - maximumCapacity; //if more attendees than the max capacity, calculate how many people must be excluded so that the meeting can go forward
  cin >> maximumCapacity;
  cin >> numberPeople;
  if (numberPeople <= maximumCapacity) { //condition where fire regulations aren't violated
    cout << "It is legal to hold the meeting." << endl;
    cout << additionalPeople << " more people may attend." << endl;
  }
  else { //condition where fire regulations are violated
    cout << "This meeting cannot be held, as it violates fire regulations." << endl;
    cout << excludedPeople << " people must be excluded from the meeting." << endl;
  }
  return 0;
}
