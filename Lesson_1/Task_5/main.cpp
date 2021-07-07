#include <iostream>

using namespace std;

int main()
{
    int firstnum = 0;
    int secondnum = 0;
    int deistvie = 0;
    cout << "Spisok deistvii:" << endl
         << "1 = +" << endl
         << "2 = -" << endl
         << "3 = *" << endl
         << "4 = /" << endl;
    cout << "Vvedite pervoe chislo: ";
    cin >> firstnum;
    cout << "Vvedite vtoroe chislo: ";
    cin >> secondnum;
    cout << "Vvedite deistvie: ";
    cin >> deistvie;
    cout << "Rezultat: ";
    switch(deistvie){
        case 1:
            cout << firstnum+secondnum;
            break;
        case 2:
            cout << firstnum-secondnum;
            break;
        case 3:
            cout << firstnum*secondnum;
            break;
        case 4:
            cout << firstnum/secondnum;
            break;
        default:
            cout << "Neizvestnoe deistvie";
    }
    return 0;
}

