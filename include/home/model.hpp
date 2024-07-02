// model.h
#ifndef MODEL_H
#define MODEL_H

#include <string>
#include <iostream>
#include <gtkmm.h>
#include "connectbd.hpp"

class HomeModel
{
public:
    HomeModel();

    
    std::string addRow(const std::string &tarea);
    
    std::map<std::string, std::vector<std::string>> initData();

    const std::string &getTarea();
    void setTarea(const std::string &);
private:
    std::string tarea;
};

#endif // MODEL_H