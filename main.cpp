
// main.cpp
#include <gtkmm.h>
#include "model.hpp"
#include "my_window.hpp"
#include "controller.hpp"
#include "view.hpp"



int main(int argc, char *argv[]) {
    auto app = Gtk::Application::create("org.gtkmm.example");

    Model model;

    View view;

    Controller controller(model, view);

    //app->add_window(myWindow);
    return app->make_window_and_run<MyWindow>(argc, argv, &view);
}