#include <iostream>
#include <math.h>

using namespace std;

class Figura
{
private:
    double Pole;

public:
    Figura(double inf = 0.) { Pole = inf; };

    void   setPole(double x) { Pole = x; };
    double getPole() { return Pole; };
    void   id() { cout << "Figura o polu " << Pole << endl; };
};

class Kolo : public Figura
{
public:
    Kolo(double r) : Figura(M_PI * pow(r, 2)){};
    void id() { cout << "Koło o polu " << getPole() << endl; };
};

class Kwadrat : public Figura
{
public:
    Kwadrat(int a) : Figura(pow(a, 2)){};
    void id() { cout << "Kwadrat o polu " << getPole() << endl; };
};

Figura id(const Figura&)
{
    *this.id();
}

int main()
{
    Figura Katarzyna;
    Katarzyna.id();
    Katarzyna.setPole(12.5);
    cout << Katarzyna.getPole() << endl;
    Kolo    Circle(1);
    Kwadrat Square(2);
    cout << Circle.getPole() << endl;
    cout << Square.getPole() << endl;
    Katarzyna.id();
    Circle.id();
    Square.id();
    id(Square);
}
