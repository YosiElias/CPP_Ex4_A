//
// Created by Yossi on 4/28/2022.
//

//#ifndef PART_A_GAME_H
//#define PART_A_GAME_H

#pragma once
/**
 * Header file for the Player class.
 *
 * @author Yossi Elias
 * @since 2022
 */
//#include "Player.hpp"

#include <iostream>
#include <vector>
namespace coup {
//    class Player;
    class Game {

    private:
        std::vector<std::string> _players;
        std::string _turn;
        std::string _winner;

    public:
        Game();
        std::string turn();
        std::vector<std::string> players();
        std::string winner();
        void add_player(const std::string &p);

    }; // end of class Game
}


//
//#endif //PART_A_GAME_H












////
//// Created by Yossi on 4/28/2022.
////
//
//#ifndef PART_A_GAME_HPP
//#define PART_A_GAME_HPP
//
//#endif //PART_A_GAME_HPP
