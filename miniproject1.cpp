#include <iostream>
#include <cmath>
using namespace std;
int main()
{
    int number;
    cout << "Enter 1 for Area of Triangle" << endl;
    cout << "Enter 2 for Area of Sphere" << endl;
    cout << "Enter 3 for Area of Cone" << endl;
    cout << "Enter 4 for Area of  Trepazium" << endl;
    cout << "Enter a Number" << endl;
    cin >> number;
    switch (number)
    {
    case 1:
        int base, height1;
        cout << "Enter base:" << endl;
        cin >> base;
        cout << "Enter height" << endl;
        cin >> height1;
        cout << "Area of Triangle :" << 0.5 * base * height1 << "sq.unit" << endl;
        break;
    case 2:
        float radii0;
        cout << "Enter radius" << endl;
        cin >> radii0;
        cout << "Area of Sphere is:" << 4 * 3.14 * radii0 * radii0 << "sq.unit" << endl;
        break;
    case 3:
        float radii2, l;
        cout << "Enter radius:" << endl;
        cin >> radii2;
        cout << "Enter Slant height(l)" << endl;
        cin >> l;
        cout << "Area of Cone :" << 3.14 * radii2 * (l + radii2) << endl;
        break;
    case 4:
        float side1, side2, height2;
        cout << "Enter length(side1)" << endl;
        cin >> side1;
        cout << "Enter  length(side2)" << endl;
        cin >> side2;
        cout << "Enter height" << endl;
        cin >> height2;
        cout << "Area of Trepazium is:" << 0.5 * (side1 + side2) * height2 << "sq.unit" << endl;
        break;
    default: // default case
    cout<<"Invalid Choice";
    }

    return 0;
}

