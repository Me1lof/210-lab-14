// Course: COMSC-210-5481
// Assignment: Color Class Implementation
// Name: Melissa Ochoa Flores

#include <iostream>

class Color {
private:
    int red;
    int green;
    int blue;

public:
    
    Color(int r = 0, int g = 0, int b = 0) : red(r), green(g), blue(b) {}

    
    void setRed(int r) {
        red = r;
    }

    void setGreen(int g) {
        green = g;
    }

    void setBlue(int b) {
        blue = b;
    }

    
    int getRed() {
        return red;
    }

    int getGreen() {
        return green;
    }

    int getBlue() {
        return blue;
    }

    
    void print() {
        std::cout << "Color(Red: " << red << ", Green: " << green << ", Blue: " << blue << ")" << std::endl;
    }
};

int main() {
    
    Color color1;
    color1.setRed(255);
    color1.setGreen(0);
    color1.setBlue(0);

    Color color2(0, 255, 0);
    Color color3(0, 0, 255);

    
    color1.print();  
    color2.print();  
    color3.print();  

    return 0;
}
