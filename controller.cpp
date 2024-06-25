// controller.cpp
#include "controller.hpp"

Controller::Controller(Model &model, View &view) : model(model), view(view)
{

    view.buttonPlus.signal_clicked().connect(sigc::mem_fun(*this, &Controller::onPlusClicked));
    view.buttonMinus.signal_clicked().connect(sigc::mem_fun(*this, &Controller::onMinusClicked));
}

void Controller::onPlusClicked()
{
    model.setData(model.getData() + 1);
    view.label.set_text(std::to_string(model.getData()));
}

void Controller::onMinusClicked()
{
    model.setData(model.getData() - 1);
    view.label.set_text(std::to_string(model.getData()));
}
