#include <iostream>
using namespace std;

// Pass or Fail

// Anusree is struggling to pass a certain college course.
// The test has a total of N question, each question carries 3 marks for a correct answer and −1 for an incorrect answer. Anusree is a risk-averse person so he decided to attempt all the questions. It is known that Anusree got X questions correct and the rest of them incorrect. For Anusree to pass the course he must score at least P marks.
// Will Anusree be able to pass the exam or not?

int main()
{

    int t;
    cin >> t;

    while (t--)
    {
        int n, x, p;
        cin >> n >> x >> p;

        int scored_p = x * 3;
        int scored_n = (n - x) * (-1);
        int scored = scored_p + scored_n;

        if (scored < p)
        {
            cout << "FAIL\n";
        }
        else
        {
            cout << "PASS\n";
        }
    }

    return 0;
}