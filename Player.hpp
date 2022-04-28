#pragma once
/**
 * Header file for the Player class.
 * 
 * @author Yossi Elias
 * @since 2022
 */
#include "Game.hpp"
#include "Action.hpp"
#include <iostream>
#include <vector>
namespace coup {
//    class Game;
    class Player {

    private:
        std::string _name;


    protected:
        std::string _role;
        int _coins;
        Action _last_action;
    public:
        Player(Game g, std::string& name);
        void income();
        void foreign_aid();
        virtual void coup(Player p);    //Todo: virtual - maybe not need
        std::string role();
        int coins();

        Player();
    }; // end of class Player
}