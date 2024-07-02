// controller.cpp
#include "home/controller.hpp"

HomeController::HomeController(HomeModel &model, HomeView &view) : model(model), view(view)
{
    view.buttonAdd->signal_clicked().connect(sigc::mem_fun(*this, &HomeController::onAddClicked));
    view.entryData->signal_activate().connect(sigc::mem_fun(*this, &HomeController::onAddClicked));
    init();
}

void HomeController::onAddClicked()
{
    auto widget = view.newRow(
        model.addRow(view.entryData->get_text()),
        view.entryData->get_text());

    view.listBox->prepend(*widget);
    view.entryData->set_text("");
}

void HomeController::init()
{
    auto contenedorData = model.initData();

    for (size_t i = 0; i < contenedorData["id"].size(); i++)
    {
        view.listBox->prepend(*view.newRow(
            contenedorData["id"][i],
            contenedorData["tarea"][i]));
    }
}
