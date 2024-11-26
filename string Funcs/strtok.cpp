#include <cstring>
#include <iostream>
using namespace std;

int main() {
  char quote[] = "Remember me when you look at the moon!";

  // break the string when it encounters empty space
  char* word = strtok(quote, " ");

  cout <<  word;

  return 0;
}

// Output: Remember
// similary for next part in string(me) use = strtok(NULL," ")
