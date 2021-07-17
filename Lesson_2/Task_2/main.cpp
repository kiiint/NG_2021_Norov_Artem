#include <iostream>

using namespace std;

int main()
{
    int number = 0;
    cout << "Enter number: ";
    cin >> number;
    cout << "Numbers: ";
    for(int i=0; i < number; i++){
        cout << i << ", ";
    }
    cout << number;
    return 0;
}
