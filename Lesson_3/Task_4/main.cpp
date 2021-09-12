#include <iostream>

using namespace std;

int main()
{
    int numbers[20];
    int space = 0;
    for (int i = 0; i<20; i++){
        numbers[i] = 0;
    }
    int maxc = numbers[0];
    int i = 0;
    do{
        cout << "Enter number #"<<i+1<<":";
        cin >> numbers[i];
        if (numbers [i] == 0){
            break;
        }
        if(numbers[i] > maxc){
            maxc = numbers[i];
        }
        i++;
    }while(i<20);

    for (int i = 0; i<20; i++){
        for (int c = 1; c < maxc - numbers[i]  ; c++)
        space = (maxc - numbers[i])/2;
        while (space>0){
            cout << " ";
            space--;
        }
        for (int n = 0; n < numbers[i]; n++)
            cout << "*";
        cout << endl;
    }
}
