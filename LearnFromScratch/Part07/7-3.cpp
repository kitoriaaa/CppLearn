#include <iostream>

class Rectangle {
public:
    int Area() const
    {
        return height_ * width_;
    }

    int height_;
    int width_;
};

class Square : private Rectangle {
public:
    void SetSize(int size)
    {
        height_ = size;
        width_ = size;
    }

    void Print()
    {
        std::cout << height_ << " " << width_ << std::endl;
    }
};

class Triangle {
private:
    int hen;
    int kakudo;

public:
    Triangle(int hen, int kakudo);
    ~Triangle();
};

Triangle::Triangle(int hen, int kakudo)
{
    this->hen = hen;
    this->kakudo = kakudo;
}

Triangle::~Triangle()
{
}

int main()
{
    Square s;
    s.SetSize(10);
    // std::cout << s.Area() << std::endl;
    s.Print();

    return 0;
}