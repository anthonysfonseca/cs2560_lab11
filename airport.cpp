//
// Created by Anthony Fonseca on 11/7/24.
//

#include <iostream>
#include <string>
using namespace std;

struct AirportData {
    int planesLanded;
    int planesDeparted;
    int maxLandedInOneDay;
    int minLandedInOneDay;
};

const int MONTHS = 12;
const string monthNames[MONTHS] = { "January", "February", "March", "April",
                                    "May", "June", "July", "August", "September",
                                    "October", "November", "December" };

int main() {
    AirportData yearData[MONTHS];
    int totalLanded = 0, totalDeparted = 0;
    int greatestLanded = 0, leastLanded = INT_MAX;
    string monthGreatest, monthLeast;

    for (int i = 0; i < MONTHS; i++) {
        cout << "Enter data for " << monthNames[i] << ":\n";

        cout << "Total number of planes that landed: ";
        cin >> yearData[i].planesLanded;

        cout << "Total number of planes that departed: ";
        cin >> yearData[i].planesDeparted;

        cout << "Greatest number of planes that landed in one day: ";
        cin >> yearData[i].maxLandedInOneDay;

        cout << "Least number of planes that landed in one day: ";
        cin >> yearData[i].minLandedInOneDay;

        totalLanded += yearData[i].planesLanded;
        totalDeparted += yearData[i].planesDeparted;

        if (yearData[i].maxLandedInOneDay > greatestLanded) {
            greatestLanded = yearData[i].maxLandedInOneDay;
            monthGreatest = monthNames[i];
        }
        if (yearData[i].minLandedInOneDay < leastLanded) {
            leastLanded = yearData[i].minLandedInOneDay;
            monthLeast = monthNames[i];
        }
        cout << endl;
    }

    float avgLanded = static_cast<float>(totalLanded) / MONTHS;
    float avgDeparted = static_cast<float>(totalDeparted) / MONTHS;

    cout << fixed << "\nSummary for the year:\n";
    cout << "Average monthly number of planes that landed: " << avgLanded << endl;
    cout << "Average monthly number of planes that departed: " << avgDeparted << endl;
    cout << "Total number of planes that landed for the year: " << totalLanded << endl;
    cout << "Total number of planes that departed for the year: " << totalDeparted << endl;
    cout << "Greatest number of planes that landed in one day: " << greatestLanded << " (in " << monthGreatest << ")\n";
    cout << "Least number of planes that landed in one day: " << leastLanded << " (in " << monthLeast << ")\n";

    return 0;
}