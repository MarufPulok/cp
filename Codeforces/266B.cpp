#include <bits/stdc++.h>
using namespace std;

int main()
{
    int num, seconds;
    string students;
    cin >> num >> seconds >> students;

    while (seconds--)
    {
        for (int i = 0; i < students.size(); i++)
        {
            if (students[i] == 'B' && students[i + 1] == 'G')
            {
                swap(students[i], students[i + 1]);
                i++;
            }
        }
    }

    cout << students << endl;
}