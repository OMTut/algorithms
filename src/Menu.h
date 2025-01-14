#ifndef MENU_H
#define MENU_H

#include <iostream>
#include <vector>
#include <string>
#include <functional>

using namespace std;

// Struct for the menu item
struct MenuItem {
    string name;
    function<void()> action;
};

class Menu {
    private:
        string title;
        vector<MenuItem> items;

    public:
        Menu(const string& title);
        void addItem(const string& name, const function<void()>& action);
        void display() const;
        void navigate() const;
};

#endif //MENU_H