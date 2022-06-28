// This Function.cpp : Bu dosya 'main' işlevi içeriyor. Program yürütme orada başlayıp biter.
//

#include <iostream>
using namespace std;
class  dot {
private : 
    int x;
    int y;
public :
    int getX();
    int getY();
    void setX(int);
    void setY(int);
    void WriteToScreen();
    bool beginning();


};
int dot::getX() {
    return x;

}
int dot::getX() {
    return x;
}
int dot::getY() {
    return y;

}
void dot::setX(int x) {
  //  x = _x; b şekilde de olabilir aslında
    //thisi işaretçi diyebiliriz
    //thisbir anahtar kelime dersek this.x diyemeyiz

    this->x = x;



}
void dot::setY(int _y) {
    if (_y > 5)
        y = _y;
    else
        y = 2;
}
    void dot::WriteToScreen() {
        cout << x << "," << y << endl;

    }

   


int main()
{
    std::cout << "Hello World!\n";
}

