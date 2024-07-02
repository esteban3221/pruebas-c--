// MyWindow.cpp
#include "my_window.hpp"

MyWindow::MyWindow(HomeView *view){
    set_title("MVC Example");

    set_default_size(400, 600);


    set_child(*view);
    show();
}