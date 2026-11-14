#pragma once
#include <iostream>
#include <string>

class Entity { // klasa glownych stworzen zawiera klase attack i statystyki oraz statusy
    private:
        //-------ZMIENNE------
        int hp = 10;
        std::string name;
        bool isAlive = true;
        //------SETTERY------
        void setHP(int newValue) {
            if (newValue <= 0) {
                std::cout << "Deafult HP can't be negative." << std::endl;
                return;
            }
            this->hp = newValue;
        }
        void setName(std::string newName) {
            this->name = newName;
        }
        void setIsAlive(bool alive) {
            if (alive || !alive) {
                this->isAlive = alive;
            }
            else {
                std::cout << "Error with setting isAlive status." << std::endl;
            }
        }
    public:
        //-------SETTERY-------
        virtual void setStats(std::string Name, int HP) {
            this->setHP(HP);
            this->setName(Name);
        }
        void changeHP(int newValue) {
            setHP(newValue);
        }
        void changeName(std::string newName) {
            setName(newName);
        }
        void changeIsAlive(bool alive) {
            setIsAlive(alive);
        }
        //-------GETTERY--------
        const std::string &getName() const {
            return this->name;
        }
        const int getHP() const {
            return this->hp;
        }
        const bool getIsAlive() const {
            return this->isAlive;
        }
};