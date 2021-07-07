#include <iostream>

using namespace std;

int main()
{
    int nuzhno = 0;
    int vshiske = 0;
    int shishek = 0;
    cout << "Skolko nuzhno oreshkov: ";
    cin >> nuzhno;
    cout << "Skolko oreshkov v shiske: ";
    cin >> vshiske;
    cout << "Skolko ona sobrala: ";
    cin >> shishek;
    if(nuzhno <= vshiske*shishek){
        cout << "OK";
    }else{
        cout << "NO";
    }
    return 0;
}
