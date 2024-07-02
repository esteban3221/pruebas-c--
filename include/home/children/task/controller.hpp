#pragma once
#include <gtkmm.h>
#include "view.hpp"
#include "model.hpp"

class TaskController
{
private:
    TaskModel model;
    const std::string &nameTask;
    const std::string id;
    sigc::slot<void()> callback;

    void onClickedButton();

public:
    TaskController(const std::string &id_,const std::string &nameTask_);
    ~TaskController();

    void setCallback(sigc::slot<void()> callback_);
    
    TaskView view;
};
