#include <iostream>

using namespace std;

int main()
{
    char symbols[100];
    int length = 0;
    int word = 0;
    int maxlength = 0;
    cout << "Enter your string: ";
    cin.getline(symbols, 100);

    for (int i = 0; symbols[i] != 0; i++)
    {
        if ((symbols[i] >= 'a' && symbols[i] <= 'z') || (symbols[i] >= 'A' && symbols[i] <= 'Z')){
            length++;
        }else {
            if (length > maxlength){
                maxlength = length;
                word = i - maxlength;
            }
            length = 0;
        }
    }
    cout << "Result: ";
    for(int i = 0; i < maxlength; i++){
        cout << symbols[word];
        word++;
    }
}
