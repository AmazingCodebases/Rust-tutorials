#include <iostream>
#include <string>

using std::cin;
using std::cout;
using std::endl;
using std::string;

int main() {

string _guess = "";

cout << "Guess The Number!" << endl;
cout << "Please Input Your Guess" << endl;
cin >> _guess;

cout << "You Guessed: " << _guess << endl;

return 0;
}
