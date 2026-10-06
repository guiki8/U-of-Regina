#include <iostream>
using namespace std;

int main() {
    cout << "Please insert: L, B, R and H:" << endl;
    int L, B, R, H;
    cin >> L >> B >> R >> H;
    double area_rectangle = L * B;
    double area_circle = 3.142 * R * R;
    double volume_cylinder = 3.142 * R * R * H;
    double maximum_value = max(area_rectangle, max(area_circle, volume_cylinder));
    cout << "Area of rectangle: " << area_rectangle << endl;
    cout << "Area of circle: " << area_circle << endl;
    cout << "Volume of cylinder: " << volume_cylinder << endl;
    cout << "Maximum value: " << maximum_value << endl;
    return 0;
}