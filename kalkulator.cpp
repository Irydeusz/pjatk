# include <iostream>
using namespace std;
int main()
{
    char op;
    float num1, num2;
    int a = 0;
    int b=1;
    cout << "Podaj + - * /";
    cin >> op;
    cout << "podaj dwie liczby: ";
    cin >> num1 >> num2;

    switch(op)
    {
        case '+':
 patch-1
            cout << num1+num2; // dodawanie
            break;
        case '-':
            cout << num1-num2; //odejmowanie
            break;
        case '*':
            cout << num1*num2; // mnozenie
            break;
        case '/':
            cout << num1/num2; // dzielenie

            cout <<"Wynik to:"<<  num1+num2;
            break;
        case '-':
            cout <<"Wynik to:"<< num1-num2;
            break;
        case '*':
            cout <<"Wynik to:"<<  num1*num2;
            break;
        case '/':
            cout << "Wynik to:"<< num1/num2;
 master
            break;
        default;

                cout << "zly operator";
                break;
                cout << "wenezuela ma fajna ekonomie nom" << endl;

        }
        cout <<"podaj 1 by kotynuowac 0 by wyjsc";
        cin >> a;
    }
    return 0;
}
