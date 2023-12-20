#pragma once
class Menu {
public:
    Menu();
    virtual ~Menu();

    virtual void display() = 0; // Pure virtual function
};