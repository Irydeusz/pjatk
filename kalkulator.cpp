# include <iostream>
using namespace std;
int main()
{
    char op;
    float num1, num2;
    cout << "Podaj + - * /";
    cin >> op;
    cout << "podaj dwie liczby: ";
    cin >> num1 >> num2;
    switch(op)
    {
        case '+':
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
            break;
        default:

            cout << "zly operator";
            break;
    }
    return 0;
}
