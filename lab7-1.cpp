//hw7-16.cpp - displays three tip amounts
//Created/revised by <your name> on <current date>

#include <iostream>
#include <iomanip>
using namespace std;

int main()
{
int day = 0;
int totalTexts = 0;
int dailyTexts = 0;
double average = 0.0;

for (day = 1; day < 8; day += 1){
    cout << "How many text messages did you send on day "
    << day << "?";
    cin >> dailyTexts;
    totalTexts = totalTexts + dailyTexts;

}

average = totalTexts / (day - 1);
cout << fixed << setprecision(0);
cout << endl << "You sent aproximately " << average << " text messages per day." << endl;






	return 0;
}	//end of main function
