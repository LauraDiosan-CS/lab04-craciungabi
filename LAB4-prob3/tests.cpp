#include "tests.h"
#include "apartament.h"
#include "repo.h"

#include <bits/stdc++.h>

using namespace std;

void testApart()
{
    APARTAMENT a1(12,100,"gaaz");
    APARTAMENT a2(15,200,"apa");
    APARTAMENT a3(5,400,"gaz");
    APARTAMENT a4(6,50,"electricitate");
    APARTAMENT flats[4] = {a1, a2, a3, a4};
    APARTAMENT results[4];
    /// A1
    assert( a1.getNrAp() == 12);
    assert( a1.getSuma() == 100);
    assert( strcmp(a1.getTip(),"gaaz")== 0);
    a1.setNrAp(60);
    assert(a1.getNrAp() == 60);
    /// A2
    assert( a2.getNrAp() == 15);
    assert( a2.getSuma() == 200);
    assert( strcmp(a2.getTip(),"apa") == 0);
    a2.setNrAp(70);
    assert(a2.getNrAp() == 70);
    /// A3
    assert( a3.getNrAp() == 5);
    assert( a3.getSuma() == 400);
    assert(strcmp(a3.getTip(),"gaz") == 0);
    a3.setNrAp(26);
    assert(a3.getNrAp() == 26);
    /// A4
    assert( a4.getNrAp() == 6);
    assert( a4.getSuma() == 50);
    assert( strcmp(a4.getTip(), "electricitate") == 0);
    a4.setNrAp(288);
    assert(a4.getNrAp() == 288);
}

void testRepo()
{
    APARTAMENT a1(12,100,"gaaz");
    APARTAMENT a2(15,200,"apa");
    APARTAMENT a3(5,400,"gaz");
    APARTAMENT a4(6,50,"electricitate");
    Repo rep;
    rep.addItem(a1);
    rep.addItem(a2);
    rep.addItem(a3);
    rep.addItem(a4);
    APARTAMENT flats = rep.getItemFromPos(2);
    int flat = flats.getNrAp();
    int sum = flats.getSuma();
    char* tip = flats.getTip();
    assert(flat == 5);
    assert(sum == 400);
    assert(strcmp(tip,"gaz") == 0);

}
