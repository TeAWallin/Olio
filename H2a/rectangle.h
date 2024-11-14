#ifndef RECTANGLE_H
#define RECTANGLE_H

class Rectangle {
private:
    double width;   // Suorakulmion leveys
    double height;  // Suorakulmion korkeus


public:
    // Set-metodit
    void setWidth(double w);
    void setHeight(double h);

    // Metodit pinta-alan ja ympärysmitan laskemiseksi
    double getArea() const;
    double getCircum() const;
};

#endif // RECTANGLE_H
