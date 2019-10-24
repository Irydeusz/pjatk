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
