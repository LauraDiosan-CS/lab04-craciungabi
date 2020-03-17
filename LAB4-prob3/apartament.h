#ifndef APARTAMENT_H
#define APARTAMENT_H

#include <bits/stdc++.h>

class APARTAMENT
{
private:
    int nrAp;
    int suma;
    char* tipAp;
public:
    APARTAMENT();
    APARTAMENT(int nr, int su, char* tip);
    APARTAMENT(const APARTAMENT &s);
    ~APARTAMENT();
    int getNrAp();
    int getSuma();
    char* getTip();
    void setNrAp(int nr);
    void setSuma(int su);
    void setTip(char* tip);
    APARTAMENT& operator=(const APARTAMENT &s);
    bool operator==(const APARTAMENT &s);

};

#endif // APARTAMENT_H
