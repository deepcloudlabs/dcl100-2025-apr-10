#include <iostream>
using namespace std;
int main(int argc,char *argv[]){
 int xa,ya,ra ; // circle A
 int xb,yb,rb ; // circle B
 int r,r_min,r_max ;

 cout << "Enter the center: " ;
 cin >> xa >> xb ;
 cout << "Enter the radius: " ;
 cin >> ra ;
 cout << "Enter the center: " ;
 cin >> ya >> yb ;
 cout << "Enter the radius: " ;
 cin >> rb ;
 // get min/max 
 r_min=ra;
 r_max=rb;
 if (rb<ra){
   r_min=rb;
   r_max=ra;
 }
 // L2 distance between the centers
 r = (xa-xb)*(xa-xb)+(ya-yb)*(ya-yb) ;
 // select the case
 if ((xa==xb)&&(ya==yb)&&(ra==rb))
    cout << "Case II: Identical Circles" ;
 else
    if (((r_min+r)*(r_min+r))<(r_max*r_max))
       cout << "Case I: One circle contains the other one" ;
    else
       if (((ra+rb)*(ra+rb))>r)
          cout << "Case II: Intersection" ;
       else
          cout << "Case III: Disjoint" ;
  cout << endl ;
  // that is all
  return 0; 
}
