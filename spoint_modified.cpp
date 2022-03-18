
#include <iostream>
#include <string>
#include <cmath>
using namespace std;

// 2D point
struct Point
{
    double x;
    double y;
};

// distance between two points p and q
double point_distance(Point p, Point q)
{
    double dx = p.x - q.x;
    double dy = p.y - q.y;
    return sqrt( dx * dx + dy * dy );
}

// get a point from user input
Point input_point() {
    double x, y;
    cin >> x >> y;
    Point p = { x, y };
    return p;
}

// get the mid-point of two 2D points
Point midpoint(Point p, Point q){
    double x, y;
    x = (p.x + q.x) / 2;
    y = (p.y + q.y) / 2;
    Point r = {x, y};
    return r;
}

// swap two points p and q
void swap( Point &p, Point &q ) {
    Point temp = p;
    p = q;
    q = temp;
}

// shrink a line
void shrink_line( Point &p, Point &q ) {
  double x_diff = p.x - q.x;
  double y_diff = p.y - q.y;
  p.x -= x_diff / 4;
  p.y -= y_diff / 4;
  q.x += x_diff / 4;
  q.y += y_diff / 4;
}

int main()
{
    cout << "Input 1st point (x,y): ";
    Point a = input_point();

    cout << "Input 2nd point (x,y): ";
    Point b = input_point();

    cout << "Distance between point: " << point_distance(a, b) << endl;
    Point c = midpoint(a, b);
    cout << "The midpoint is: " << "(" << c.x << ", " << c.y << ")" << endl;

    shrink_line(a, b);
    cout << "1st point: " << a.x << ' ' << a.y << endl;
    cout << "2nd point: " << b.x << ' ' << b.y << endl;

    swap(a, b);
    cout << "1st point: " << a.x << ' ' << a.y << endl;
    cout << "2nd point: " << b.x << ' ' << b.y << endl;

    return 0;
}
