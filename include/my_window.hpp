// MyWindow.h
#ifndef MyWindow_H
#define MyWindow_H

#include <gtkmm.h>
#include "home/view.hpp"

class MyWindow : public Gtk::Window {
public:
    MyWindow(HomeView *view);
private:
};

#endif // MyWindow_H