#include <iostream>
#include <fstream>

using namespace std;

int main () {

// Create images

std::ofstream image_Input("image.ppm");
const int width = 70, heigth = 50;
const int metadeWidth = width/2; 
//image_Input.open("Imagem.ppm");

// Image Header
// The part above is the header
// P3 # "P3" means this is a RGB color image in ASCII
// 3 2 # "3 2" is the width and height of the image in pixels
// 255 # "255" is the maximum value for each color
if (image_Input.is_open()) {


// Header !!
image_Input << "P3" << endl;
image_Input << width << " " << heigth << endl;
image_Input << "255" << endl;

// Image Body - Size 3 x 2 -- RGB triplets

// image_Input << "255 0 0 "; // Red
// image_Input << "0 255 0 "; //Green
// image_Input << "0 0 255" << endl; //Blue
// image_Input << "255 255 0 "; //yellow
// image_Input << "255 255 255 " ; //white
// image_Input << "0 0 0" << endl; //black

// image_Input << "255 0 0 0 255 0 0 0 255" << endl;
// image_Input << "255 255 0 255 255 255 0 0 0" << endl;

// 50% RED e 50% Blue

for (int ImgH = 0; ImgH < 70; ImgH++) {    
        for(int ImhV = 0; ImhV < 50; ImhV++) {
            if(ImgH<metadeWidth){
                image_Input << "255 0 0 "; // Red
            }else{
                image_Input << "0 0 255 "; // Blue
            }           
            
        }       
}
// for(int ImhV = 0; ImhV < 50; ImhV++) {
// image_Input << "255 0 0 "; // Red
// }


image_Input << endl;

}

// Close the file

image_Input.close();


return 0;
}