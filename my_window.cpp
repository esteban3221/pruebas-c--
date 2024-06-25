// MyWindow.cpp
#include "my_window.hpp"

MyWindow::MyWindow(View *view){
    set_title("MVC Example");
    set_margin(10);
    set_default_size(200, 100);


    set_child(*view);
    show();
}