
// controller.h
#ifndef CONTROLLER_H
#define CONTROLLER_H

#include "home/model.hpp"
#include "my_window.hpp"
#include "home/view.hpp"

class HomeController {
public:
    HomeController(HomeModel& model, HomeView& view);
    void onAddClicked();

    void init();
private:
    HomeModel& model;
    HomeView& view;
};

#endif // CONTROLLER_H