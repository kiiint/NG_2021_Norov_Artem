#include <iostream>
#include <windows.h>

using namespace std;

int main()
{
    SetConsoleCP(1251);
    SetConsoleOutputCP(1251);
    int a,b,c,d,e;
    cout << "??????, ??? ???????????, ??? ??????? ??????, ?????????? ?????? ??????." << endl;
    Sleep(2000);
    cout<< "???????????: ?? ???????, ??? ?????????? 1 ????, ??????? ??????? ?? ???? ?????????." << endl;
    cout<< "???? ?? ????????? ????? ????? ?? ?? ????? ??????? ????????." << endl;
    Sleep(4000);
    cout<< "???, ??? ? ???? ???? ??????? ????? ??? ????? ???????????, ? ??? ?????? ?? ???????? ?? ?????? ? ??????? ???????????? ?????." << endl;
    Sleep(5000);
    cout<< "????? ????, ?? ???????? ??????? ???? ????? ???????????????? ?????????: ???????? ? ???????????." << endl;
    Sleep(5000);
    cout<< "??? ?? ?? ?????? ???????" << endl;
    cout<< "(1) ????? ???????? ? \"????\"" << endl;
    Sleep(500);
    cout<< "(2) ????? ?????? \"????????\"" << endl;
    Sleep(500);
    cout << "(3) ????????? ????? ? ???????? ? ?????????" << endl;
    Sleep(500);
    cout << "(4) ????????? ?????? ? ????? ??????? ??????" << endl;
    Sleep(500);
    cout<< "??? ?? ?? ?????? ???????" << endl;
    cout<< "????? ????? ????????: " << endl;
    cin>>a;
    switch (a)
	{
	case 1:
	    system("cls");
		cout << "? ???? ?????????? ?? ?????? ???? ???? ????." << endl;
		Sleep(1000);
		cout << "?????? 3 ????????????? ???? ??????? ?? ????-????????? ??????????." << endl;
		Sleep(3000);
		cout << "????? ?????????? ?? ?????? ???????? ?? 94 ?????? ????? ? ?????." << endl;
		Sleep(3000);
		cout << "?? ???? ????? ???? ???? ?? ?????????? ? ?? ?????? ????????? ???? ??????????? ? ?????? ?? ????? ?????? ? ??????????." << endl;
		Sleep(3000);
        cout << "???????? ???? ?????"<< endl;
        cout << "(1) ???????, ? ?? ?????? ???????? ? ?????? ??? ???????? ?????? ??? ?????." << endl;
        Sleep(500);
        cout << "(2) ????? ??? ????? ???? ???????? ???? ????? ? ???? ???????????? ????." << endl;
        Sleep(500);
        cout << "(3) ????? ??? ????????, ? ? ??? ??? ??????? ????? ?? ?????." << endl;
        Sleep(500);
        cout<< "????? ????? ????????: " << endl;
        cin>>e;
        switch (e)
        {
        case 1:
            cout << endl<< "?????? ??????? ??????????? ???? ? ??? ??? ??????????? ???? ????????? ? ?? ??????? ????? ??????? ??????????.";
            Sleep(3000);
            cout << endl<< "?????????? ?????? ?? Boss of the ????";
            break;
        case 2:
            cout << endl << "?? ?? ???????? ????? ?? ????? ???? ??? ?? ?????? ??? ??? ????????"<< endl;
            Sleep(964);
            cout << "?? ????..." << endl;
            break;
        case 3:
            cout << endl<< "?????? ??? ?? ???????? ???? ????? ???????? ???? ?????? ??????, ??? ?? ?????? ?????????? ?? ??? ? ???????????" << endl;
            cout << "???? ?????????? ????? ?????????? ?????????? ? ????? ??????? ?????????? ? ????? ?? ???????? ??????????"<< endl;
            Sleep(964);
            cout << "?? ????..." << endl;
            break;

        }
        break;
	case 2:
        system("cls");
		cout << "? ?????????, ????? ????????? ???? ?????? ????(? ???????? ??????? ???????? ????? ???????? ????????? Miller ?? ??????? ????? ?? ??????) ????? ???? ?? ?????? ?????." << endl;
        Sleep(5000);
		cout << "? ????????? ???? ??????????? ??????????" << endl;
		break;
	case 3:
	    system("cls");
		cout << "????? ?????? ???????????? ?? ?????? ??????????? ?????, ????? ?? ?????? ???????? ??????? \"???????\", ?? ???????????? ??????? ?? ????????? ??????? ??????????? ??????." << endl;
		Sleep(2200);
		cout << "???? ????? ??????? ????????????? ?? ??????? ? ???-?? ???? ??????." << endl;
		Sleep(2200);
		cout << "?? ??? ? ?????? ? ????????..." << endl;
		Sleep(964);
		cout << "??? ?? ?? ??? ????????" << endl;
        cout << "(1) ??????????? ? ???? ?????? ???? ? ???????? ? ? ?? ????? ????????? ???????????? ???????? ??? ??." << endl;
        Sleep(500);
        cout << "(2) ??????, ?? ?????? ???? ??????? ???????????? ??????, ??? ? ????? ????? ????, ??? ? ? ?????????." << endl;
        Sleep(500);
        cout << "(3) ?????, ?? ??? ?? ?? ???? ??????? ?????? ????? ?? ????? ? ?????? ????? ???????? ????? ??? ? ????." << endl;
        Sleep(500);
        cout << "(4) ??? ??? ?? ??????? ? ???? ?? ??????? ????? ?????? ?? ?????? G12?" << endl;
        cout<< "????? ????? ????????: " << endl;
        cin>>b;
        switch (b)
        {
        case 1:
            cout <<  endl << "??????, ? ???? ???? ??????? ?? ??????? ?? ?????? ??????? ??? ?????? ??????? ?????. ? ???? ?? ???????? ? ?????? ?????? ???????? ?? ????." << endl;
            Sleep(5000);
            cout << "??? ??? ?????? ?? ???? ????????" << endl;
            break;
        case 2:
            cout << endl << "??? ????????????? ? ?????? ?????????? ??????, ?????? ?? ??????!" << endl;
            Sleep(600);
            cout << "?? ????? ?? ?????? ????????. ?????? ???? ?????? ?? ??????? ???? ????? ?? ????? ??????." << endl;
            Sleep(964);
    		cout << "?? ????..." << endl;
            break;
        case 3:
     		cout << endl << "??????????, ??????? ? ???? ???? ???????, ?? 40 ????????? ?? ?????? ????????? ????? ???? ???, ? ??? 20 ???????????. ?????" << endl;
     		cout<< "??? ?? ?? ?????????" << endl;
     		cout<< "(1) ???????????" << endl;
            Sleep(500);
            cout<< "(2) ??????????" << endl;
            Sleep(500);
            cout<< "????? ????? ????????: " << endl;
            cin >> c;
            switch (c)
            {
            case 1:
                cout << endl << "??????? ??????? ? ???? ?????? ??????? ??????? ??? ?????." << endl;
                Sleep(1100);
                cout << "?? ??????? ????? ? ??? ?? ????????, ??????? ??????? ??? ? ???????? ??????, ? ??????? ??????? ??????." << endl;
                Sleep(2000);
                cout << "? ????? ??????? ?????? ???? ?? ?????? ? ????????????, ????????? ?? ?????? ? ???????? ? ???? ????? ???????? ??????." << endl;
                Sleep(3000);
                cout << "?????? ? ???? ??? ???? ???? ??????????? ? ???????? - Full Master, ??????? ????????? ?? ???????? ? ???????, ???? ?? ????? ????? ?????." << endl;
                Sleep(3000);
                cout << "?????? ????? Full Master ????????? ???? ?? ?????? ? ?????????? Jabroni." << endl;
                Sleep(3300);
                cout << endl << "????? ???????? ??????????? ?? ? ??????? ????????? ? ????? ?????? ????????? ?? 12.50(??? ?????? ??????? ????????, ??? ??? ??? ???? ????? ??????? 25 ??????)." << endl;
                Sleep(2000);
                cout << endl << "?? ?? ????????? ?? ???? ?????????? ???????? ? ???? ??????? ?? ?????? ? ???? ???????? ?????? ??? ???? ??????? ? ????? ?????? ? ?? ?? ???? ? ????????? ??? ????????? ?????????? bondage." << endl;
                cout << "???????? ?? ??? ?? ???? ??????? ????? ??????? ????????? ? ????? ????????????.";
                break;
            case 2:
                cout << endl << "????? ??????? ???? ?? ????????? ? ?? ???????? ?? ??????, ????????? ??" << endl;
                cout << "?????? ???? ?????? ?? ??????? ???? ????? ?? ????? ??????." << endl;
                Sleep(964);
                cout << "?? ????..." << endl;
                break;
            default:
                cout << endl << "ABOBA";
                break;
            }
            break;
        case 4:
     		cout << endl << "??????? ????????? ???? ?? ?????? ? ?????????? ????????." << endl;
     		Sleep(964);
            cout << "?? ????..." << endl;
            break;
        default:
            cout << endl << "ABOBA";
            break;
        }
		break;
    case 4:
		cout << "?????? - ?? ????? ??????? ??????? ? ??? ???? ???? ?????? 200 ??????." << endl;
        Sleep(3000);
		cout << "??, ?? ?????? ??? ? ??? ???? ???????? ? ???? ??? ??????? ????? ???????? ??????? ??????." << endl;
        cout<< "?????? ? ??????? ???????? ????? ????????" << endl;
        cout<< "(1) ??, ? ??? ?????-?? ??????" << endl;
        Sleep(500);
        cout<< "(2) ???, ? ?? ?? ?????" << endl;
        Sleep(500);
        cout<< "????? ????? ????????: " << endl;
        cin >> d;
        switch(d)
        {
        system("cls");
        case 1:
            cout << "????????? ? ??? ???????? ?? ????? ???????? ?? ????? ???????? ????? ?? \"??????\"." << endl;
            Sleep(2000);
            cout << "?????? ?? ???????? ?? ??????? three hundred bucks ? ????? ????? ???????? ? ???????????."<< endl;
            Sleep(2000);
            cout << "?????? ? ???? ????????? ?????? ? ?? ??? ?????? ??????? ???? ??????.";
            break;
        case 2:
            cout << "?? ?? ??? 200 ?????? ?? ?????? ??????? ??? ?????, ?????."<< endl;
            break;
        default:
            cout << "ABOBA";
            break;
        }
		break;
	default:
        cout << "ABOBA";
		break;
	}
    system("pause");
    return 0;
}
