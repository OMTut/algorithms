#include "Menu.h"
#include "tests/Two_Pointers/test_TPRemove_Dupes.h"
#include "tests/Two_Pointers/testTPMove_Zeros.h"

void twoPointersMenu() {
  Menu twoPointersMenu("Two Pointers Menu");
  twoPointersMenu.addItem("Remove Dupes", testTPRemoveDupes);
  twoPointersMenu.addItem("Move Zeros", testTPMove_Zeros);
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
