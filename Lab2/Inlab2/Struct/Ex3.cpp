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

SCP* cloneSCP(SCP* original){
    SCP* clone = new SCP;
    clone->id = original->id;
    clone->objClass = original->objClass;
    clone->speConProcedures = original->speConProcedures;
    clone->description = original->description;
    clone->numAddendums = original->numAddendums; 
    clone->addendums = new string [original->numAddendums];
    for (int i = 0; i < original->numAddendums; i++){
        (clone->addendums)[i] = (original->addendums)[i];
    }
    return clone;
}

int main(){
    string* addendums = new string[2];
    addendums[0] = "Document #055-1: An Analysis of SCP-055\nThe author puts forward the hypothesis that SCP-055 was never formally acquired.";
    addendums[1] = "Document #055-2: Report of Dr. John Marachek\nSurvey team #19-055-127BXE was successfully able to enter SCP-055's container and ascertain the appearance.";

    SCP *obj = new SCP;
    obj->id = 55;
    obj->objClass = 2;
    obj->speConProcedures = "Object is kept within a five (5) by five (5) by two point five (2.5) meter square room.";
    obj->description = "All known information about the object is that it is not round.";
    obj->addendums = addendums;
    obj->numAddendums = 2;

    SCP* newObj = cloneSCP(obj);

    obj->id = 1;
    cout << obj->id << " " << newObj->id << "\n";

    delete [] obj->addendums;
    delete obj;

    delete [] newObj->addendums;
    delete newObj;
    return 0;
}