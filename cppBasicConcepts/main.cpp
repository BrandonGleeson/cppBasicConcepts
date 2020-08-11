#include <iostream>

using namespace std;

int main()
{
    cout << "Hello World!" << endl;
    cout << "This line was added from laptop" << endl;
    cout << "This line was also added from laptop" << endl;
    cout << "later, this line was added from the Ryzen" << endl;
    cout << "the new line character can be used to make a line break \n";
    cout << "this line should be below the one above" << endl;
    cout << "two new-line characters makes a blank line \n\n" << endl;
    //this is how you make a single-line command
    /* This is how you start a multi-line, block comment
     * note this line is still being commented even though I went to a new line
     * next line will show the end of the comment block
     */
    cout << "we are now beyond the comment sections" << endl;

    //start of variables section
    int myVariable = 10;
    cout << myVariable << endl;

    int a, b;
    int c = 30;
    int d = 15;
    a = c+d;
    b = d/c;
    cout << "c = " << c << endl;
    cout << "d = " << d << endl;

    //input variable
    int num;
    cout << "Please enter a number:" << endl;
    cin >> num; //note the extraction operator >>

    //arithmatic
    //recall the modulus operator % - informally known as the remainder operator
    // returns the reaminder after an integer division
    int var = 25%7;
    cout << var << endl;
    //also recall decrement operators  += , -=, *=, /=, %=
    //also recall the ++ operator, can be prefix ++x, or postfix c++
    int x = 5;
    int y = ++x;
    cout << "using Prefix: " << y << endl;
    x = 5;
    y = x++;
    cout << "using Postfix: " << y << endl;
    //there is also a decrement operator, --

    return 0;
}
