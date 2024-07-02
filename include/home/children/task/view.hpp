#pragma once
#include <gtkmm.h>

class TaskView : public Gtk::ListBoxRow
{
private:
    Gtk::Box hbox;

public:
    Gtk::Label labelTask;
    Gtk::Button buttonTask;

    TaskView(/* args */);
    ~TaskView();
};
