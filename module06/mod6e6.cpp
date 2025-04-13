#include <cstdlib>
#include <iostream>
#include <iomanip>
#include <fstream>
#include <ctime>

using namespace std;

#include "bmpio.h"

int main (int argc, char *argv[] ){
  if (argc<3){
     cout << "Usage: " << endl ;
     cout << argv[0] << " [input image] [output image]" << endl ;
     exit(0);
  }
  unsigned long int width;
  long int height ;
  unsigned short int planes;
  unsigned long int size;
  unsigned short int bitsperpixel;
  unsigned long int compression;
  unsigned long int sizeofbitmap;
  unsigned long int horzresolution; 
  unsigned long int vertresolution;
  unsigned long int colorsused;
  unsigned long int colorsimportant;
  unsigned char **red,**green,**blue;
  
  ifstream file_in(argv[1]);
  bmp_header2_read(file_in, &size,&width,&height,&planes,&bitsperpixel,&compression,&sizeofbitmap,&horzresolution,&vertresolution,&colorsused,&colorsimportant);
  bmp_byte_swap_set (true);

  red= new unsigned char*[height];
  green= new unsigned char*[height];
  blue= new unsigned char*[height];

  bmp_read ( argv[1], &width, &height,&red[0],&green[0],&blue[0]);
  int scanWidth= width + ((width%4) ? (4 - (width%4)) : 0 );
  for (int i=1;i<height;i++)
      red[i]=red[i-1]+scanWidth;
  for (int i=1;i<height;i++)
      green[i]=green[i-1]+scanWidth;
  for (int i=1;i<height;i++)
      blue[i]=blue[i-1]+scanWidth;

  /*
   *  Write your code here
   */
  srand(time(0L));
  int val;
  for (int i=0;i<height;i++){
       for (int j=0;j<width;j++){
	      val= red[i][j];    
              val+= rand()%97 - 48; 
	      val= val>255 ? 255 : val ; 
	      val= val<0 ? 0 : val ; 
	      red[i][j]= val;
	      val= green[i][j];    
              val+= rand()%97 - 48; 
	      val= val>255 ? 255 : val ; 
	      val= val<0 ? 0 : val ; 
	      green[i][j]= val;
	      val= blue[i][j];    
              val+= rand()%97 - 48; 
	      val= val>255 ? 255 : val ; 
	      val= val<0 ? 0 : val ; 
	      blue[i][j]= val;
	   }
       }
  /*
   *  DO NOT go further
   */
  bmp_24_write(argv[2],width,height,red[0],green[0],blue[0]);

  delete []red[0]; 
  delete []red; 
  delete []green[0]; 
  delete []green;
  delete []blue[0]; 
  delete []blue;

  return 0;
}
