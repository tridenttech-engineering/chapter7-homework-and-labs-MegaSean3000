//Lab7-3.cpp - calculates the average number of text
//messages sent each day for 7 days
//Created/revised by <your name> on <current date>

#include <iostream>
#include <iomanip>
using namespace std;

int main()
{
    int day = 1;               // Start at day 1
    int totalTexts = 0;
    int dailyTexts = 0;
    double average = 0.0;
    const int totalDays = 7;   // Total number of days

    while (day <= totalDays) {  // Run the loop while day <= 7
        cout << "How many text messages did you send on day " << day << "? ";
        cin >> dailyTexts;
        totalTexts += dailyTexts;
        day++;  // Increment day after each iteration
    }

    average = totalTexts / static_cast<double>(totalDays); // Use 7.0 for floating-point division
    cout << fixed << setprecision(0);
    cout << endl << "You sent approximately " << average << " text messages per day." << endl;

    return 0;
}

