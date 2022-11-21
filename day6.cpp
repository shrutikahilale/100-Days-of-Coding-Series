#include <iostream>
using namespace std;

int main()
{
    pair<int, int> coordinates;
    cin >> coordinates.first >> coordinates.second;

    if (coordinates.first == 0)
        cout << "The point lies on y-axis";
    else if (coordinates.second == 0)
        cout << "The point lies on x-axis";
    else if (coordinates.first > 0 && coordinates.second > 0)
        cout << "The point lies in first quadrant";
    else if (coordinates.first < 0 && coordinates.second > 0)
        cout << "The point lies in second quadrant";
    else if (coordinates.first < 0 && coordinates.second < 0)
        cout << "The point lies in third quadrant";
    else
        cout << "The point lies in fourth quadrant";

    return 0;
}