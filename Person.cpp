#include <iostream>

#include "Person.h"

Person::Person(string name, int rZone, bool hasJob, int n){
    string result = name + to_string(n);
    pName = result;
    zone = rZone;
    job = hasJob;
}

Person::Person(int dZone){ //part 2 building constructor
    string n = "Apartments in zone ";
    string result = n + to_string(dZone);
    bName = result;
    bSize = 100;
    bResidents = 0;
    bFull = false;
    isEcoFr = false;
    ecoFact = 1;
}

void Person::setResident(){ //part 2 control size
    if(bSize != bResidents) {
        bResidents = bResidents + 1;
    } else {
        bFull = true;
    }
}
void Person::setEco(bool x) {isEcoFr = x; ecoFact = .5;}
void Person::setEcoFact(double x) {ecoFact = x;}

bool Person::getAtCapacity(){ /*part 2 building full?*/return bFull;}
bool Person::getEco() {return isEcoFr;}
double Person::getEcoFact() {return ecoFact;}
int Person::getRes() {return bResidents;}

string Person::getBName(){ /*part 2 blding name*/return bName;}
string Person::getName(){return pName;}
int Person::getRZone(){return zone;}
int Person::getNum(){return pNum;}
bool Person::getHasJob(){return job;}

void Person::setName(string theName){pName = theName;}
void Person::setRZone(int theZone){zone = theZone;}
void Person::setNum(int theNum){pNum = theNum;}
void Person::setHasJob(bool theJob){job = theJob;}