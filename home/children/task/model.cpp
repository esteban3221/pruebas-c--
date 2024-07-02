#include "home/children/task/model.hpp"

TaskModel::TaskModel(/* args */)
{
}

TaskModel::~TaskModel()
{
}

void TaskModel::deleteRow(const std::string &id)
{
    Database& database = Database::getInstance();
    database.sqlite3->command("delete from tareas where id = ?", id.c_str());
}