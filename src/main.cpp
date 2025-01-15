#include "Menu.h"
#include "tests/Two_Pointers/test_TPRemove_Dupes.h"

void twoPointersMenu() {
  Menu twoPointersMenu("Two Pointers Menu");
  twoPointersMenu.addItem("1. Remove Dupes", testTPRemoveDupes);
  twoPointersMenu.addItem("2. Another Problem", []() {cout << "Another Problem Logic here" << endl;});
  twoPointersMenu.navigate();
}

// Main Menu Options
void mainMenu() {
  Menu mainMenu("Main Menu");
  mainMenu.addItem("BasicDSAs", []() {cout << "BasicDSA Logic Here" << endl;});
  mainMenu.addItem("Two Pointers", twoPointersMenu);
  mainMenu.navigate();
}

int main() {
  cout << "Algorithm Study App" << endl;
  mainMenu();
  cout << "Good Bye";

  return 0;
}
