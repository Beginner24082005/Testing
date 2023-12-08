#include <iostream>
#include <string>
using namespace std;

struct SCP {
    int id;
    int objClass;
    string speConProcedures;
    string description;
    string* addendums;
    int numAddendums;
};

void addAddendum(SCP &obj, string addendum) {
    // Student answer
    obj.numAddendums++;
    string *newAddendum = new string[obj.numAddendums];
    for (int i = 0; i < obj.numAddendums - 1; i++){
        newAddendum[i] = obj.addendums[i];
    }
    newAddendum[obj.numAddendums - 1] = addendum;
    obj.addendums = newAddendum;
}

int main(){
    string* addendums = new string[1];
    addendums[0] = "Document #055-1: An Analysis of SCP-055\nThe author puts forward the hypothesis that SCP-055 was never formally acquired.";

    SCP obj;
    obj.id = 55;
    obj.objClass = 2;
    obj.speConProcedures = "Object is kept within a five (5) by five (5) by two point five (2.5) meter square room.";
    obj.description = "All known information about the object is that it is not round.";
    obj.addendums = addendums;
    obj.numAddendums = 1;

    addAddendum(obj, "Document #055-2: Report of Dr. John Marachek\nSurvey team #19-055-127BXE was successfully able to enter SCP-055's container and ascertain the appearance.");

    cout << obj.addendums[1];

    delete [] obj.addendums;
    return 0;
}