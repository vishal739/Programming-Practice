#include <iostream>
using namespace std;

void wave(int arr[][4], int rows, int columns)
{
    int top = 0;
    while (top < columns)
    {
        if (top % 2 == 0)
        {
            for (int i = 0; i < rows; i++)
            {
                cout << arr[i][top] << " ";
            }
            top++;
        }

        else{
        for (int i = rows - 1; i >= 0; i--)
        {
            cout << arr[i][top] << " ";
        }
        top++;
        }
    }
}

int main()
{
    int arr[3][4] = {{0, 1, 2, 3}, {
                                       4,
                                       5,
                                       6,
                                       7,
                                   },
                     {8, 9, 10, 11}};
    wave(arr, 3, 4);
    return 0;
}