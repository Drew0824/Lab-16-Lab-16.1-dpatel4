#include <iostream>
using namespace std;

void sayBye() {
  cout << "Bye bye then.\n";
}

void offerDrink() {
  cout << "Would you care for a cup of tea?\n";
}

void sayHi() {
  cout << "Why hello there!\n";
}

void offerFood() {
  cout << "Can I offer you a salad?\n";
}

void sayJoke() {
  cout << "Which Star Wars character works at a restaurant?\n";
  cout << "Darth Waiter\n";
}
int main() {
  sayHi();
  sayJoke();
  offerFood();
  offerDrink();
  sayBye();
}


