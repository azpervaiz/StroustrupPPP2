#include <FL/Fl.H>
#include <Fl/Fl_Box.H>
#include <Fl/Fl_Window.H>
#include <string>
// This file is used to just check if fltk lib is working or not
int main(){
    Fl_Window window(200,200,"Window title");
    Fl_Box box(0,0,200,200," Hey, I mean hello world!");
    window.show();
    return Fl::run();
}
