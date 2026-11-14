#pragma once
#include <iostream>
#include "Entity.h"
class Player : public Entity { // dziedziczenie po entity i tworzenie playera
    private:
        int gold = 0;
    public:
        //-----------SETTERY-----------
        void setGold(int newValue) {
            if (newValue < 0) {
                std::cout << "Can't set. This value isn't positive.";
                return;
            }
            this->gold = newValue;
        }
        //-----------GETTERY-----------
        const int getGold() const {
            return this->gold;
        }
};