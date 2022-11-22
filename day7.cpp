#include <iostream>
#include <map>
using namespace std;

int main()
{
    int month, year;
    cout << "Enter month ";
    cin >> month;
    cout << "Enter year ";
    cin >> year;

    map<int, int> months;
    months[1] = 31;
    months[3] = 31;
    months[5] = 31;
    months[7] = 31;
    months[8] = 31;
    months[10] = 31;
    months[12] = 31;
    months[4] = 30;
    months[6] = 30;
    months[9] = 30;
    months[11] = 30;

    if (month == 2)
    {
        // check for leap year for month of Feb
        // leap year is divisible by either 4 or 100 and 400 both
        if (year % 4 == 0 || (year % 100 == 0 && year % 400 == 0))
        {
            cout << "29";
        }
        else
        {
            cout << "28";
        }
    }
    else
    {
        if (months.find(month) == months.end())
            cout << "invalid input";

        else
            cout << months[month];
    }

    return 0;
}