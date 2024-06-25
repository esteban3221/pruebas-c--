
// controller.h
#ifndef CONTROLLER_H
#define CONTROLLER_H

#include "model.hpp"
#include "my_window.hpp"
#include "view.hpp"

class Controller {
public:
    Controller(Model& model, View& view);
    void onPlusClicked();
    void onMinusClicked();
private:
    Model& model;
    View& view;
};

#endif // CONTROLLER_H