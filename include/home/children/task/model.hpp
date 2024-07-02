#pragma once
#include <gtkmm.h>
#include "connectbd.hpp"

class TaskModel
{
private:
    /* data */
public:
    TaskModel(/* args */);
    ~TaskModel();

    void deleteRow(const std::string &id);
};
