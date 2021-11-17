//
//  square.h
//  assignment 14-3
//
//  Created by Louisa Taufaasau on 11/16/21.
//

#ifndef square_h
#define square_h
using namespace std;

class Square{
private:
    int width;
public:
    Square();
    void SetWidth(double);
    double getWidth() const;
    double getArea() const;
    friend class Rect;
};
class Rect{
private:
    double width;
    double height;
public:
    Rect();
    void setWidth(double);
    void setHeight(double);
    double getWidth() const;
    double getHeight() const;
    double getArea() const;
    Rect makeRectanglewithSquare(Square s);
};

#endif /* square_h */
