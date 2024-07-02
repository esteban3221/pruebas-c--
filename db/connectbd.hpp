#pragma once
#include "sqlite.hpp"
#include <memory>

class Database
{
private:
    Database(const Database&) = delete;
    Database& operator=(const Database&) = delete;

    ~Database() {}

    Database(/* args */)
    {
        this->sqlite3->open();
        if (not this->sqlite3->is_created())
        {
            this->sqlite3->command("CREATE TABLE tareas ("
                                   "id INTEGER PRIMARY KEY,"
                                   "tarea TEXT NOT NULL UNIQUE"
                                   ")");
        }
    }

public:
    std::shared_ptr<SQLite3::SQLite> sqlite3 = std::make_shared<SQLite3::SQLite>("prueba.db");

    static Database &getInstance()
    {
        static Database instance; // Instancia única de la clase
        return instance;
    }
};
