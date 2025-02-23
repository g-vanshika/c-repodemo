#include <iostream>
using namespace std;
int main() {
    int a , b ;
    char o ;

    cout << "enter any two numbers " << endl;
    cin >> a >> b ;
    cout << " enter operator '+, -, / ,* ' " << endl;
    cin >> o ;

    if ( o=='+' ){
        cout <<  " Result:  " << a+b << endl;
    }

    else if ( o=='-' ){
        cout <<  " Result:  " << a-b << endl;
    }

    else if ( o=='*' ){
        cout <<  " Result: " << a*b << endl;
    }

    else if ( o=='/') {
        cout <<  " Result: " << a/b << endl;
    }

    else {
        cout << " invalid operator" << endl;
    }

     return 0;

}