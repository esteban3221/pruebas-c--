// MyWindow.h
#ifndef MyWindow_H
#define MyWindow_H

#include <gtkmm.h>
#include "view.hpp"

class MyWindow : public Gtk::Window {
public:
    MyWindow(View *view);
private:
};

#endif // MyWindow_H