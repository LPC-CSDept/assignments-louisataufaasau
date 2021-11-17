#include "square.h"

Square::Square(){
    width=0;
}
void Square::SetWidth(double w){
    width=w;
}
int Square::getWidth() const{
    return width;
}
int Square::getArea() const{
    return width*width;
}
Rect::Rect(){
    width=0;
    height=0;
}
void Rect::setWidth(double w){
    width=w;
}
void Rect::setHeight(double h){
    height=h;
}
double Rect::getWidth() const{
    return width;
}
double Rect::getHeight() const{
    return height;
}
double Rect::getArea() const{
    return width*height;
}
Rect Rect::makeRectanglewithSquare(Square s){
    Rect r;
    r.setWidth(s.width);
    r.setHeight(s.width);
    return r;
}
