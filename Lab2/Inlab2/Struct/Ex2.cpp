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

string convertToString(SCP obj){
    string itemNumber;
    if (obj.id < 10) itemNumber = "SCP-00" + to_string(obj.id);
    else if (obj.id < 100 && obj.id >= 10) itemNumber = "SCP-0" + to_string(obj.id);
    else itemNumber = "SCP-" + to_string(obj.id);
    string classState;
    if (obj.objClass == 0) classState = "Safe";
    else if (obj.objClass == 1) classState = "Euclid";
    else if (obj.objClass == 2) classState = "Keter";
    string addendumsList;
    for (int i = 0; i <= obj.numAddendums - 1; i++){
        addendumsList = addendumsList + obj.addendums[i] + "\n";
    }
    string output;
    output = "Item #: " + itemNumber + "\n" + 
             "Object Class: " + classState + "\n" + 
             "Special Containment Procedures: " + obj.speConProcedures + "\n" + 
             "Description: " + obj.description + "\n" +
             addendumsList;
    return output;
}

int main(){
    string* addendums = new string[2];
    addendums[0] = "Document #055-1: An Analysis of SCP-055\nThe author puts forward the hypothesis that SCP-055 was never formally acquired.";
    addendums[1] = "Document #055-2: Report of Dr. John Marachek\nSurvey team #19-055-127BXE was successfully able to enter SCP-055's container and ascertain the appearance.";

    SCP obj;
    obj.id = 55;
    obj.objClass = 2;
    obj.speConProcedures = "Object is kept within a five (5) by five (5) by two point five (2.5) meter square room.";
    obj.description = "All known information about the object is that it is not round.";
    obj.addendums = addendums;
    obj.numAddendums = 2;
    cout << convertToString(obj);
    delete [] addendums;
    return 0;
}