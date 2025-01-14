#include "Menu.h"
#include <cstdlib>

// Construct the menu
Menu::Menu(const string& title) : title(title) {}

void Menu::addItem(const string& name, const function<void()>& action) {
    items.push_back({name, action});
}

// Display the Menu
void Menu::display() const {
    system("cls");
    cout << "---- " << title << " ----" << endl;
    for (size_t i = 0; i < items.size(); i++) {
        cout << i + 1 << ". " << items[i].name << endl;
    }
    cout << "x. Exit" << endl;
}

// Navigate the menu
void Menu::navigate() const {
    char choice;
    while (true) {
        display();
        cout << "What would you like to test? Choice: ";
        cin >> choice;

        // handle exit
        if (choice == 'x' || choice == 'X') {
            cout << "Exiting " << title;
            break;
        }

        // validate & handle choice
        int idx = choice - '1';
        if (idx >= 0 && idx < static_cast<int>(items.size())) {
            items[idx].action();
        } else {
            cout << "Invalid choice. Choose again." << endl;
        }
    }
}