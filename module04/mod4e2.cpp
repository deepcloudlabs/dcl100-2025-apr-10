#include <iostream>
#include <cmath>
using namespace std;
struct Point_s {
     double x,y ;
};
typedef struct Point_s        Point;
int main(){
  Point point1,point2;  
  cin >> point1.x >> point1.y ;
  cin >> point2.x >> point2.y ;
  double distance= (point1.x-point2.x)*(point1.x-point2.x)
                              +
                   (point1.y-point2.y)*(point1.y-point2.y);
   distance= sqrt(distance);
   cout << "Euclidean distance=" << distance ;
  return 0;
}