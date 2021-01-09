//Write a program to reverse an array
#include<iostream>

using namespace std;

int main()
{
    int arr[6] = {1,2,3,4,5,6}, rev[6];
    int i;
    for (i = 0; i <= 5; i++)
    {
        rev[i] = arr[5 - i];
    }
    for (i = 0; i <= 5; i++)
    {
        cout << rev[i];
    }
    return 0;
}