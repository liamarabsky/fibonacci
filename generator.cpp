/* basically Amadeus 2.0*/

#include <iostream>

using namespace std;

int main()
{
    double n0 = 0;
    double n1 = 1;
    while ( n0 < 9223372036854775805){
        cout << n0 << std::endl << n1 << std::endl;
        n0 = n0 + n1;
        n1 = n1 + n0;
    }
return 0;
}