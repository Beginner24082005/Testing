#include<iostream>
using namespace std;
int main(){
    int a,b;
    cout<<"Input your number:"<<endl;
    while (true){
        cin>>a;
        if (a>0){
            cout<<"You input the right number. "<<endl;
        }
        else{
            cout<<"You input the wrong number. Please input again: "<<endl;
            continue;
        }
        cout<<"Do you want to exit? (1/0)"<<endl;
        cin>>b;
        if (b==1) break;
        else if (b==0){
            cout<<"Input your number: "<<endl;
            continue;
        } 
        else{
            while (true){
                cout<<"Invalid choice. Input again: "<<endl;
                cin>>b;
                if (b==1){
                    break;
                }
                else if (b==0){
                    break;
                }
                else continue;
            }
            if (b==1) break;
            if (b==0){
                cout<<"Input your number: "<<endl;
                continue;
            } 
        }
        
    }
    return 0;
}
//Something