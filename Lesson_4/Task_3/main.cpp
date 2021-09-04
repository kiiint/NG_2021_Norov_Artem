#include <iostream>

using namespace std;

int main()
{
    char symbols[100];
    cout << "Enter string: ";
    cin.getline(symbols, 100);

    cout << "Result: ";
    for (int i = 0; i < symbols[i]; i++){
        if(symbols[i] >= 'a' && symbols[i] <= 'z'){
            symbols[i] -= 32;
        }
        cout << symbols[i];
    }
}
