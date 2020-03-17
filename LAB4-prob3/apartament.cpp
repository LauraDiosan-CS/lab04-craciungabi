#include "apartament.h"
#include <bits/stdc++.h>

/// CONSTRUCTOR
/// In: -
/// Out: an empty object of type APARTAMENT

APARTAMENT::APARTAMENT()
{
    this->nrAp = 0;
    this->suma = 0;
    this->tipAp = NULL;
}
/// Constructor with parameters
/// In: a name (string) and an age (integer)
/// Out: an object of type Student that contains the given info

APARTAMENT::APARTAMENT(int nr, int su, char* tip)
{
    this->nrAp = nr;
    this->suma = su;
    this->tipAp = new char[strlen(tip)+1];
    strcpy(this->tipAp, tip);
}
/// Copy constructor
/// In: an object s of type Student
/// Out: another object of type Student that contains the same info as s

APARTAMENT::APARTAMENT(const APARTAMENT &s)
{
    this->nrAp = s.nrAp;
    this->suma = s.suma;
    this->tipAp = new char[strlen(s.tipAp) + 1];
    strcpy(this->tipAp, s.tipAp);
}
/// Desonstructor
/// In: an object of type APARTAMENT
/// Out: -
 APARTAMENT:: ~APARTAMENT()
{
    if(this->nrAp)
    {
        ///delete[] (int*)this->nrAp;
        this->nrAp = 0;
    }
}

/// GETERS

int APARTAMENT::getNrAp()
{
    return this->nrAp;
}

int APARTAMENT::getSuma()
{
    return this->suma;
}

char* APARTAMENT::getTip()
{
    return this->tipAp;
}

/// Setter
/// In: an object of type APARTAMENT and a nrAp (int)
/// Out: the same object with a new nrAp

void APARTAMENT::setNrAp(int nr)
{
    this->nrAp = nr;
}


/// Setter
/// In: an object of type APARTAMENT and a sum (int)
/// Out: the same object with a new sum

void APARTAMENT::setSuma(int sum)
{
    this->suma = sum;
}

/// Setter
/// In: an object of type APARTAMENT and a tipAp (char)
/// Out: the same object with a new tipAp

void APARTAMENT::setTip(char* tip)
{
    if(this-> tipAp)
        delete[] this->tipAp;
    this->tipAp = new char[strlen(tip) + 1];
    strcpy(this->tipAp, tip);
}

/// assignment operator
/// In: two objects of type APARTAMENT (the current one, this, and s)
/// Out: the new state of the current object (this)

APARTAMENT& APARTAMENT::operator=(const APARTAMENT &s)
{
    this->setNrAp(s.nrAp);
    this->setSuma(s.suma);
    this->setTip(s.tipAp);
    return *this;
}

/// comparator
/// In: two objects of type APARTAMENT (this and s)
/// Out: true or false

bool APARTAMENT::operator==(const APARTAMENT &s)
{
    return ((this->nrAp == s.nrAp) && (this->suma == s.suma) && (strcmp(this->tipAp, s.tipAp) == 0));
}


