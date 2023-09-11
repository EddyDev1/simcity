#include <vector>

using namespace std;

class Person;

class Persons{
public:
    void addPerson(int);
    void addBuilding(int); //part 2
    void givePerJob();
    void updatePlace(int); //part 2
private:
    vector<Person*> personList;
    Person* buildingList[100];
};