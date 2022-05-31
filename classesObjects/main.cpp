#include <iostream>
using namespace std;

class Rectangle{
private:
    int length;
    int height;
    int area;
    int perimeter;
    
public:
    Rectangle(){
        length = 0;
        height = 0;
        area = 0;
        perimeter = 0;
    }
    
    Rectangle(int l, int h){
        length = l;
        height = h;
        area = 0;
        perimeter = 0;
    }
    
    void setLength(int l){
        length = l;
    }
    
    void setHeight(int h){
        height = h;
    }
    
    int getArea(){
        return area;
    }
    
    int getPerimeter(){
        return perimeter;
    }
    
    float computeArea(){
        area = length * height;
    }
    
    float computePerimeter(){
        perimeter = 2 * (length + height);
    }
};

int main(){
    Rectangle Rect1;
    Rectangle Rect2(20, 5);
    
    Rect1.setHeight(30);
    Rect1.setLength(10);
    
    Rect1.computeArea();
    Rect1.computePerimeter();
    
    Rect2.computeArea();
    Rect2.computePerimeter();
    
    Rect1.getArea();
    Rect2.getPerimeter();
    
    cout << "\n\n\n\t\t\t\t The area of the first rectangle is: " << Rect1.getArea() << "cm2" <<endl;
    cout << "\t\t\t\t The perimeter of the first rectangle is: " << Rect1.getPerimeter() << "cm" << endl;
    
    cout << "\n\n\n\t\t\t\t The area of the second rectangle is: " << Rect2.getArea() << "cm2" <<endl;
    cout << "\t\t\t\t The perimeter of the second rectangle is: " << Rect2.getPerimeter() << "cm" <<endl;
    return 0;
}
