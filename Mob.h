#pragma once
#include "Entity.h"
#include <format>
#include <iostream>

class mob : public Entity {
    private:
        int reward;
        void setReward(int newReward) {
            this->reward = newReward;
        }
    public:
        //------SETTERY-------
        
        //------GETTERY-------
        int getReward() const {
            return this->reward;
        }
        void setStats(std::string Name, int HP) override {
            this->changeHP(HP);
            this->changeName(Name);
        }
        void setStats(std::string Name, int HP, int NewReward) {
            this->changeHP(HP);
            this->changeName(Name);
            this->setReward(NewReward);
        }
        void showStats() const {
            std::cout << std::format("Name: {} \nHealth: {} \nReward: {}", this->getName(), this->getHP(), this->getReward());
        }
};