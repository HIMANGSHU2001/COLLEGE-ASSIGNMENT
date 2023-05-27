#include <iostream>

using namespace std;

class NumberSwapper
{
    private:
        int x, y;

    public:
        NumberSwapper(int x, int y)
        {
            this->x = x;
            this->y = y;
        }

        friend void swap(NumberSwapper &n)
        {
            n.x = n.x + n.y;
            n.y = n.x - n.y;
            n.x = n.x - n.y;
        }

        void display()
        {
            cout << "x = " << x << ", y = " << y << endl;
        }
};

int main()
{
    NumberSwapper n(10, 20);
    cout << "Before swapping: ";
    n.display();

    swap(n);

    cout << "After swapping: ";
    n.display();

    return 0;
}

