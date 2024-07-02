#pragma once
#include <gtkmm.h>
#include "home/children/task/controller.hpp"

class HomeView : public Gtk::Box {
public:

    const char* XML;
    HomeView();
    virtual ~HomeView();

    Gtk::ListBoxRow *newRow(const std::string &id, const std::string &label);

    Gtk::Box *hbox = nullptr;
    Gtk::Entry *entryData = nullptr;
    Gtk::ListBox *listBox = nullptr;
    Gtk::Button  *buttonAdd = nullptr;
private:
    Glib::RefPtr<Gtk::Builder> m_refBuilder;
};