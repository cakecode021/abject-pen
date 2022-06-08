/*#include <stdio.h>
int main() {

    printf("Hello, World!");
    return 0;
}*/

/**#include <iostream>
using namespace std;

int main() {    
    int number;

    cout << "Enter an integer: ";
    cin >> number;

    cout << "You entered " << number;    
    return 0;
}*/

/*#include <iostream>
using namespace std;

int main() {

    int first_number, second_number, sum;
    
    cout << "Enter two integers: ";
    cin >> first_number >> second_number;

    sum = first_number + second_number;

  // prints sum 
    cout << first_number << " + " <<  second_number << " = " << sum;     

    return 0;
}*/

/*#include <iostream>
using namespace std;

int main()
{    
    int divisor, dividend, quotient, remainder;

    cout << "Enter dividend: ";
    cin >> dividend;

    cout << "Enter divisor: ";
    cin >> divisor;

    quotient = dividend / divisor;

    cout << "Quotient = " << quotient << endl;

    return 0;
}*/

#include <iostream>
using namespace std;

int main()
{    
    int durable life, compensation rate, price obtained;

    cout << "Enter durable life: ";
    cin >> durable life;

    cout << "Enter compensation rate: ";
    cin >> compensation rate;

    amortization in 1st year =  price obtained * compensation rate / 100;
    amortization amount for each year starting from the 2nd year =  price obtained * compensation rate / 100;
    amortization in the final year =  price obtained * compensation rate / 100 - 1;

    cout << "amortization in 1st year = " << amortization in 1st year << endl;
    cout << "amortization amount for each year starting from the 2nd year = " << amortization amount for each year starting from the 2nd year << endl;
    cout << "amortization in the final year = " << amortization in the final year << endl;

    return 0;
}