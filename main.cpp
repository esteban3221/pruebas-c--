
// main.cpp
#include <gtkmm.h>
#include "home/model.hpp"
#include "my_window.hpp"
#include "home/controller.hpp"
#include "home/view.hpp"



int main(int argc, char *argv[]) {
    auto app = Gtk::Application::create("org.gtkmm.example");

    HomeModel model;
    HomeView view;

    HomeController controller(model, view);

    //app->add_window(myWindow);
    return app->make_window_and_run<MyWindow>(argc, argv, &view);
}