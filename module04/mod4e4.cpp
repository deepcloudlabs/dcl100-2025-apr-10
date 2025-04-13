#include <iostream>
#include <cmath>
using namespace std;
struct Point_s {
     double x,y ;
};
typedef struct Point_s        Point;
struct rec_s {
    Point p1,p2 ;
};
typedef struct rec_s        rec;
typedef rec Rectangle;
int main(){
  Rectangle rec;
  Point p;
  cin >> rec.p1.x >> rec.p1.y ;
  cin >> rec.p2.x >> rec.p2.y ;
  cin >> p.x >> p.y ;
  double area,circ; 
  double width= (rec.p2.x - rec.p1.x) ;
  if (width<0.0) width=-width;
  double height= (rec.p2.y - rec.p1.y) ;
  if (height<0.0) height=-height;
  area= width*height ;
  circ= 2.0 * (width+height);
   if (rec.p1.x>rec.p2.x){
      Point temp= rec.p1;
      rec.p1=rec.p2;
      rec.p2=temp; 
   }
  cout << rec.p1.x <<  "," << rec.p1.y << endl ;
  cout << rec.p2.x <<  "," << rec.p2.y << endl ; 
  if ((p.x>rec.p1.x)&&(p.x<rec.p2.x)&&
       (p.y>rec.p2.y)&&(p.y<rec.p1.y))
         cout << "(" << p.x << "," << p.y << ") is inside the rectangle." << endl ;
   else
   if (((p.x==rec.p1.x)||(p.x==rec.p2.x))&&(p.y>=rec.p2.y)&&(p.y<=rec.p1.y)){
       cout << "(" << p.x << "," << p.y << ") is on the rectangle." << endl ;
   }    
   else  
   if (((p.y==rec.p1.y)||(p.y==rec.p2.y))&&(p.x>=rec.p1.x)&&(p.x<=rec.p2.x)){
       cout << "(" << p.x << "," << p.y << ") is on the rectangle." << endl ;
   }
   else    
       cout << "(" << p.x << "," << p.y << ") is outside the rectangle." << endl ;
  return 0;
}