#include<iostream>
#include<cmath>
using namespace std;
int main(void)
{
    cin.tie(0);
    std::ios::sync_with_stdio(false);

    int n = 0;
    int answer = 1;
    int temp;

    while (n <= 1500)
    {
        temp = answer;

        while (temp % 2 == 0)
        {
            temp /= 2;
        }

        while (temp % 3 == 0)
        {
            temp /= 3;
        }

        while (temp % 5 == 0)
        {
            temp /= 5;
        }

        if (temp == 1)
        {
            n++;

            if (n == 1500)
            {
                break;
            }
        }

        answer++;
    }

    cout << "The 1500'th ugly number is " << answer << '.'<< '\n';

    return 0;
}
