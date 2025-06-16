                               // Q1

// #include <iostream>
// using namespace std;
// int main()
// {
//     int size;
//     cout << "enter size of array:";
//     cin >> size;
//     int a[size];
//     for (int i = 0; i < size; i++)
//     {
//         cin >> a[i];
//     }
//     cout << "even element of array :";
//     for (int i = 0; i < size; i++)
//     {
//         if (a[i] % 2 == 0)
//         {
//             cout << a[i] << " ";
//         }
//     }

//     return 0;
// }



                                     // Q2

#include <iostream>
using namespace std;

int main()
{
    int frist, second;

    cout << "Enter frist number: ";
    cin >> frist;

    cout << "Enter second number: ";
    cin >> second;
    int leapYears[second - frist + 1];
    int count = 0;

    for (int year = frist; year <= second; year++)
    {
        if ((year % 4 == 0 && year % 100 != 0) || (year % 400 == 0))
        {
            leapYears[count] = year;
            count++;
        }
    }

    cout << "the array is :";
    for (int i = 0; i < count; i++)
    {
        cout << leapYears[i] << " " ;
    }

    return 0;
}

