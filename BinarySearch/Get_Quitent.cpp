#include <iostream>
using namespace std;

int getQuotient(int divisor, int dividend)
{
    int s = 0;
    int e = dividend;
    int mid = s + (e - s) / 2; // here mid are quotient;
    int ans = -1;

    while (s <= e)
    {
        cout << "s: " << s << " e: " << e << endl;
        // handle the corner case
        if (dividend == 0)
        {
            return 0;
        }
        if (divisor == 0)
        {
            return -1;
        }

        if ((mid * divisor) == dividend)
        {
            return mid;
        }
        else if ((mid * divisor) < dividend)
        {
            // answer store karna hai
            ans = mid;
            // right me jana hai
            s = mid + 1;
        }
        else
        {
            e = mid - 1;
        }
        mid = s + (e - s) / 2;
    }
    return ans;
}

int main()
{
    int divisor = -5;
    int dividend = 45;

    float answer = getQuotient(abs(divisor), abs(dividend));

    // now we can decided k sign kaunsa lagaye jisase +ve(positive) and -ve(negative)
    // sign mil jaye

    if ((divisor > 0 && dividend < 0) || divisor < 0 && dividend > 0)
    {
        answer = 0 - answer;
    }

    cout << "Find Quotient: " << answer << endl;

    return 0;
}