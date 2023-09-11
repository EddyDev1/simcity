#include <cmath>
#include <time.h>
#include <stdlib.h>

#include "cell.h"
#include "Person.h"
#include "Persons.h"

const static int pID = 1;
int pGen = 0;
int save;
bool check;

void Persons::addPerson(int cellPos) {
    Person* temp;
    string named = "Person"; bool work = false;

    if(personList.size() > 0){
        save = personList.back()->getNum();
        check = true;
    } else {
        check = false;
    }

    int pGen2 = pID+pGen;

    if(check){
        temp = new Person(named, cellPos, work, save+1);
    } else {
        temp = new Person(named, cellPos, work, pGen2);
    }

    personList.push_back(temp);
    pGen++;
}

void Persons::addBuilding(int location) { //PART 2 - use if cell has pop 0
    Person* build;

    srand(time(NULL));

    build = new Person(location);
    if(1 + (rand() % 2) == 1){ //TODO: adjust test once research is done
        build->setEco(true); //now less pollution occurs in this cell
    }
    build->setResident();
    buildingList[location] = build;
}

void Persons::givePerJob() {
    for(int i = 0; i < personList.size(); i++) {
        if(!(personList[i]->getHasJob())){personList[i]->setHasJob(true); break;}
    }
}

void Persons::updatePlace(int place) { //Part 2 - use after the first iteration in the time step i.e. pop in cell is > 1
        if(!(buildingList[place]->getAtCapacity())){
            buildingList[place]->setResident();
            break;
        }


}
