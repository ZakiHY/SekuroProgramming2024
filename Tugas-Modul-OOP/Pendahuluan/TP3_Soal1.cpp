#include <iostream>
class LinearLine
{
private:
float x1,y1,x2,y2;
public:
LinearLine (float x1, float y1, float x2, float y2) {
this->x1 = x1; this->y1 = y1; this->x2 = x2; this->y2 = y2;
}
float gradient() {
float m = (y2-y1)/(x2-x1);
std::cout << "gradient = " << m << std::endl;
}
float y_intercept() {
float y_intercept = ((y2-y1)/(x2-x1))*(0-x1) + y1;
std::cout << "y_intercept = " << y_intercept << std::endl;
}
void operator()(int a) { //Salah njir
    x1 = x1 + a;
    x2 = x2 + a;
}
void printEquation() {
std::cout << "y = " << (y2-y1)/(x2-x1) << " x + " << ((y2-y1)/(x2-x1))*(0-x1) + y1 << std::endl;
}
void printPoints() {
std::cout << "(x1, y1) = (" << x1 << ", " << y1 << ")" << std::endl;
std::cout << "(x2, y2) = (" << x2 << ", " << y2 << ")" << std::endl;
} 
};

int main()
{
LinearLine line(1.0, 8.0, 2.0, 3.0);
int a = 3; 
line.printPoints();
line.gradient();
line.y_intercept();
line.printEquation();
line.operator()(a); //Salah njir
line.printEquation();
}