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
            cout <<"wynik:"<< num1+num2;
            break;
        case '-':
            cout << num1-num2;
            break;
        case '*':
            cout << num1*num2;
            break;
        case '/':
            cout << num1/num2;
            break;
        default:

            cout << "zly operator";
            break;
        cout << "wenezuela ma fajna ekonomie nom" << endl;
        
    }
    return 0;
}
