#include <iostream>
#include <cmath>
using namespace std;
struct Point_s {
     double x,y ;
};
typedef struct Point_s        Point;
struct Line_s {
    Point p1,p2 ;
};
typedef struct Line_s        Line;

int main(){
  Point point;
  Line line;  
  cin >> line.p1.x >> line.p1.y ;
  cin >> line.p2.x >> line.p2.y ;
  cin >> point.x >> point.y ;
  double a,b,c; 
  a= line.p2.y - line.p1.y ;
  b= line.p1.x - line.p2.x ;
  c= -line.p1.x ; 
  double distance= a*point.x+b*point.y+c;
  if (distance<0.0) distance=-distance;
  distance= distance / sqrt(a*a+b*b); 
  cout << "distance=" << distance ;
  return 0;
}