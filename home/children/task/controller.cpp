#include "home/children/task/controller.hpp"
#include "controller.hpp"

TaskController::TaskController(const std::string &id_, const std::string &nameTask_) : id(id_),
                                                                                       nameTask(nameTask_)
{
    view.labelTask.set_text(nameTask);
    view.buttonTask.signal_clicked().connect(sigc::mem_fun(*this, &TaskController::onClickedButton));
}

void TaskController::onClickedButton()
{
    model.deleteRow(this->id);
    callback();
}



void TaskController::setCallback(sigc::slot<void()> callback_)
{
    this->callback = callback_;
}
