#include <iostream>
using namespace std;

// Body Mass Index

// You are given the height H (in metres) and mass M (in kilograms) of Anusree. The Body Mass Index (BMI) of a person is computed as M/H^2.
// Report the category into which Anusree falls, based on his BMI:
// Category 1: Underweight if BMI ≤18
// Category 2: Normal weight if BMI ∈{19, 20,…, 24}
// Category 3: Overweight if BMI ∈{25, 26,…, 29}
// Category 4: Obesity if BMI ≥30

int main()
{
    int t;
    cin >> t;

    while (t--)
    {
        int h, m;
        cin >> h >> m;

        int bmi = h / (m * m);

        if (0 < bmi && bmi <= 18)
        {

            cout << "1\n";
        }
        else if (19 <= bmi && bmi <= 24)
        {
            cout << "2\n";
        }
        else if (25 <= bmi && bmi <= 29)
        {
            cout << "3\n";
        }
        else if (bmi >= 30)
        {
            cout << "4\n";
        }
        else {
            cout<<"Invalid\n";
        }
    }

    return 0;
}