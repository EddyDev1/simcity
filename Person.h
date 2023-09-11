#include <string>
using namespace std;

class Person{
public:
    Person(string name, int rZone, bool hasJob, int n);
    Person(int);

    string getName();
    int getRZone();
    int getNum();
    bool getHasJob();

    bool getAtCapacity(); // part 2 building
    string getBName(); //part 2 building
    bool getEco();
    double getEcoFact();
    int getRes();

    void setName(string);
    void setRZone(int);
    void setNum(int);
    void setHasJob(bool);

    void setResident(); //part 2 building
    void setEco(bool);
    void setEcoFact(double);

private:
    //person vars
    string pName;
    int pNum;
    int zone;
    bool job;

    //part 2 building vars
    int bSize;
    string bName;
    int bResidents;
    bool bFull;
    bool isEcoFr;
    double ecoFact;
};