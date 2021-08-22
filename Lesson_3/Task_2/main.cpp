#include <iostream>

using namespace std;

int main()
{
    int cards[10];
    int nomer = 0;
    int money = 0;
    int allmoney = 0;
    for (int i = 0; i<10; i++){
        cards[i]=0;
    }
    for ( ; ; ){
        cout << "Enter number of your card:";
        cin >> nomer;
        cout << "How much to put?";
        cin >> money;
        cards[nomer] = cards[nomer] + money;
        for (int i = 0; i<10; i++){
            cout << cards[i] << " ";
        }
        for (int i = 0; i<10; i++){
            allmoney += cards[i];
        }
        cout << "\nAll money on the cards " << allmoney << endl;
        allmoney = 0;
    }
    return 0;
}
