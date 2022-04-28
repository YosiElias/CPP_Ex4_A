/**
 * Implementation of Game class.
 *
 * @author Yossi Elias
 * @since 2022
 */


#include <iostream>
#include <stdexcept>
#include "Game.hpp"
using namespace std;

namespace coup{

    Game::Game() {
        this->_players = {};
        this->_winner = "";
        this->_turn = "";
    }

    string Game::turn() {
        this->_players = {};
        return "Todo";
    }

    vector<string> Game::players() {
        this->_players = {};
        return {};
    }

    string Game::winner() {
        this->_players = {};
        return "Todo";
    }

    void Game::add_player(const string &p) {
        this->_players.push_back(p);
        //Todo: implement
    }
}