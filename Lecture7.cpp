#include <iostream>
#include <string>
#include <iomanip>

using namespace std;

struct Point{
  float x, y;
  Point(float x, float y){
    this->x = x;
    this->y = y;
  }
  ~Point(){
    
  }
};

int main(int argc, char** argv){
  cout << "Hello" << endl;
  return 0;
}