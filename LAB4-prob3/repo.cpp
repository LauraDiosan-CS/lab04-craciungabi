#include "repo.h"

Repo::Repo()
{
    this-> noFlats = 0;
}

Repo::~Repo(){}
void Repo::addItem(APARTAMENT &s)
{
    this->flats[this->noFlats++] = s;
}

APARTAMENT Repo::getItemFromPos(int pos)
{
    return this->flats[pos];
}

int Repo::getSize()
{
    return this->noFlats;
}


