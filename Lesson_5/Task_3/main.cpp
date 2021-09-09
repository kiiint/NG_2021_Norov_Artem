#include <iostream>

using namespace std;

void inputString(char symbols[])
{
    cout << "Enter your string: ";
    cin.getline(symbols, 100);
}

int counter(char symbols[], int words)
{
    for(int i = 0; symbols[i] != 0; i++){
            if ((symbols[i] >= 'A' && symbols[i] <= 'Z') || (symbols[i] >= 'a' && symbols[i] <= 'z')){
                if(!((symbols[i + 1] >= 'A' && symbols[i + 1] <= 'Z') || (symbols[i + 1] >= 'a' && symbols[i + 1] <= 'z'))){
                    words++;
                }
            }
    }
    return words;
}

void result(int word)
{
    cout << "Result: " << word << endl;
}

int main()
{
    int words = 0;
    char symbols[100];
    inputString(symbols);
    int word = counter(symbols, words);
    result(word);
}
