#include "home/model.hpp"

HomeModel::HomeModel()
{
}

// Gtk::ListBoxRow *HomeModel::newRow(const std::string &id, const std::string &tarea, Gtk::ListBox *&list)
// {
//     Gtk::ListBoxRow *row = new Gtk::ListBoxRow;
//     auto box = new Gtk::Box;
//     auto btnDel = new Gtk::Button;
//     Gtk::Label labelTitle(tarea);
//     labelTitle.add_css_class("heading");
//     btnDel->set_image_from_icon_name("list-remove-symbolic");
//     btnDel->set_css_classes({"destructive-action"});
//     btnDel->set_hexpand();
//     btnDel->set_halign(Gtk::Align::END);
//     btnDel->set_tooltip_text("Elimina Registro");
//     box->append(labelTitle);
//     box->append(*btnDel);
//     btnDel->signal_clicked().connect([this, list, row, id]()
//                                     { 
//                                         deleteRow(id);
//                                         list->remove(*row); 
//                                     });
//     row->set_child(*box);
//     return row;
// }

std::string HomeModel::addRow(const std::string &tarea)
{
    Database& database = Database::getInstance();
    database.sqlite3->command("insert into tareas(tarea) values (?)", tarea.c_str());
    database.sqlite3->command("select id from tareas ORDER BY id DESC LIMIT 1");
    return database.sqlite3->get_result()["id"][0];
}

std::map<std::string, std::vector<std::string>> HomeModel::initData()
{
    Database& database = Database::getInstance();
    database.sqlite3->command("select * from tareas");
    return database.sqlite3->get_result();
}
