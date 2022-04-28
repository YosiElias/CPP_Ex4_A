#include "doctest.h"
#include "Player.hpp"
#include "Duke.hpp"
#include "Assassin.hpp"
#include "Ambassador.hpp"
#include "Captain.hpp"
#include "Contessa.hpp"
#include "Game.hpp"

#include <string>
#include <algorithm>

using namespace coup;
using namespace std;

Game g{};



TEST_CASE("Bad input - no players") {
            CHECK_THROWS(g.turn());
}
TEST_CASE("Bad input - no players") {
            CHECK_THROWS(g.winner());
}

TEST_CASE("Bad play") {
    Duke d{g, "Duke"};
    Contessa cons{g, "Contessa"};
    Captain capt{g, "Captain"};
    Duke d1{g, "Duke1"};
            CHECK_THROWS((Duke{g, "Duke1"}));
            CHECK_THROWS(g.winner());
    //not is turn:
            CHECK_THROWS(d1.income());
            CHECK_THROWS(capt.income());
            CHECK_THROWS(cons.foreign_aid());
    //before he played:
            CHECK_THROWS(d.block(cons));
    //they not did this act of 2 income:
            CHECK_THROWS(d1.block(d));
            CHECK_THROWS(cons.block(d));
    d.income();
    cons.foreign_aid();
    //can't play 2 times:
            CHECK_THROWS(cons.income());
    //d not have 2 coins:
            CHECK_THROWS(capt.steal(d));
    //block & coup himself:
            CHECK_THROWS(capt.block(capt));
            CHECK_THROWS(d.block(d));
            CHECK_THROWS(d1.block(d1));
            CHECK_THROWS(cons.block(cons));
            CHECK_THROWS(capt.coup(capt));
            CHECK_THROWS(d.coup(d));
            CHECK_THROWS(cons.coup(cons));
    //have not coins to it:
            CHECK_THROWS(d.coup(d1));
            CHECK_THROWS(cons.block(capt));
            CHECK_THROWS(capt.coup(cons));


    //all the game:
    for (int i=0; i<10; i++){
        capt.income();
        d1.income();
        d.income();
        cons.income();
    }
    capt.coup(d1);
    CHECK(g.turn()=="Duke");
    d.coup(capt);
    CHECK(g.turn()=="Contessa");
    cons.coup(d);
    CHECK(g.winner()=="Contessa");
}
