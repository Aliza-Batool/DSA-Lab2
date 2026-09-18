#include <iostream>
using namespace std;

void swap(char &a, char &b)
{
    char temp = a;
    a = b;
    b = temp;
}
int main()
{
    int size;
    cout << "Enter the size of the string: ";
    cin >> size;
    char *arr = new char[size];
    cout << "Enter string: ";
    for (int i = 0; i < size; i++)
    {
        cin >> arr[i];
    }

    int start = 0, end = size - 1;
    while (start < end)
    {
        swap(arr[start], arr[end]);
        start++;
        end--;
    }
    cout << "Reversed String: ";
    for (int i = 0; i < size; i++)
    {
        cout << arr[i];
    }
    delete[] arr;
    return 0;
}