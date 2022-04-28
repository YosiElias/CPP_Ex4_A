/**
 * Implementation of Matrix class.
 *
 * @author Yossi Elias
 * @since 2022
 */


#include <iostream>
#include <stdexcept>
#include <utility>
#include <bits/stdc++.h>
#include "Player.hpp"
#include "Action.hpp"
using namespace std;

namespace coup{

    Player::Player(Game g, string& name) {
        this->_name = name;
        this->_coins = 0;
        this->_last_action = Action::No_action;
        g.add_player(this->_name);
    }

    void Player::foreign_aid() {
        this->_coins = this->_coins +2;
        this->_last_action = Action::foreign_aid;
    }

     void Player::income() {
        this->_coins = this->_coins +1;
        this->_last_action = Action::Income;
    }

    void Player::coup(Player p) {
        this->income();
        p.income();
    }

    string Player::role() {
        return this->_role;
    }

    int Player::coins() {
        this->income();
        return this->_coins;
    }

    Player::Player() {
        this->_name = "";
        this->_coins = 0;
        this->_last_action = Action::No_action;
    }

}