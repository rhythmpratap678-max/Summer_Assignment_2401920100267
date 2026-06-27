//----1----
#include <iostream>
using namespace std;

class Test {
public:
    virtual int square(int x) = 0;
};

class Arithmetic : public Test {
public:
    int square(int x) override {
        return x * x;
    }
};

class ToTestInt {
public:
    void display() {
        Arithmetic obj;
        cout << "Square = " << obj.square(5) << endl;
    }
};

int main() {
    ToTestInt t;
    t.display();
    return 0;
}


//----2----

#include <iostream>
using namespace std;

class Outer {
public:
    void display() {
        cout << "Display of Outer Class" << endl;
    }

    class Inner {
    public:
        void display() {
            cout << "Display of Inner Class" << endl;
        }
    };
};

int main() {

    Outer obj1;
    obj1.display();

    Outer::Inner obj2;
    obj2.display();

    return 0;
}

//----3----

#include <iostream>
using namespace std;

class Point {
private:
    int x, y;

public:
    Point() {
        x = 0;
        y = 0;
    }

    Point(int x, int y) {
        this->x = x;
        this->y = y;
    }

    void setX(int x) {
        this->x = x;
    }

    void setY(int y) {
        this->y = y;
    }

    void setXY(int x, int y) {
        this->x = x;
        this->y = y;
    }

    void display() {
        cout << "(" << x << "," << y << ")" << endl;
    }
};

int main() {

    Point p1;
    p1.display();

    Point p2(10,20);
    p2.display();

    p2.setXY(30,40);
    p2.display();

    return 0;
}

//----4----

#include <iostream>
using namespace std;

class Box {
protected:
    float length, breadth;

public:
    Box(float l, float b) {
        length = l;
        breadth = b;
    }

    float area() {
        return length * breadth;
    }
};

class Box3D : public Box {
private:
    float height;

public:
    Box3D(float l, float b, float h) : Box(l,b) {
        height = h;
    }

    float volume() {
        return length * breadth * height;
    }

    void display() {
        cout << "Area = " << area() << endl;
        cout << "Volume = " << volume() << endl;
    }
};

int main() {

    Box3D obj(5,4,3);

    obj.display();

    return 0;
}