/**
 * Implementation of Assassin class.
 *
 * @author Yossi Elias
 * @since 2022
 */


#include <iostream>
#include <stdexcept>
#include <utility>
#include <bits/stdc++.h>
//#include "Player.hpp"
#include "Assassin.hpp"
using namespace std;

namespace coup{

    void Assassin::coup(Player p) {
        this->_coins = 0;
        p.income();
    }
}