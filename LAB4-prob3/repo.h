#ifndef REPO_H
#define REPO_H
#include "apartament.h"
using namespace std;

class Repo
{
private:
    APARTAMENT flats[10];
    int noFlats;
public:
    Repo();
    ~Repo();
    void addItem(APARTAMENT &s);
    APARTAMENT getItemFromPos(int pos);
    void getAllItems(Repo &rep);
    int getSize();
};
#endif // REPO_H
