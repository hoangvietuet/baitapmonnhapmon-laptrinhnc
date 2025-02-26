#include <iostream>
#include <cstdlib>
using namespace std;
int generateRandomNumber(){
int v1 = rand() % 100;
return v1;
}
int getPlayerGuess(){
int n;
cin >> n;
return n;
}
void printAnswer(int guess, int secretNumber){
if (guess > secretNumber) cout << "your number is big too\n";
else if (guess < secretNumber) cout << "your number is small too\n";
else cout << "correct";
}
int main()
{
int secretNumber = generateRandomNumber();
int guess;
do {
guess = getPlayerGuess();
printAnswer(guess, secretNumber);
} while (guess != secretNumber);
return 0;
}
