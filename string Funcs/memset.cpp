#include <cstring>
#include <iostream>

using namespace std;

int main()
{
    char dest[50];
    char ch = 'a';
    memset(dest, ch, 20);

    cout << "After calling memset" << endl;
    cout << "dest contains " << dest; 
    return 0;
}
// memset() takes 1 string,1 char and count (3 args) & describes that in the string set a character upto position count.
