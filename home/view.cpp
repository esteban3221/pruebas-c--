#include "home/view.hpp"

HomeView::HomeView() : XML("<?xml version=\"1.0\" encoding=\"UTF-8\"?>"
                   "<interface>"
                   "<requires lib=\"gtk\" version=\"4.0\"/>"
                   "<object class=\"GtkBox\" id=\"hbox\">"
                   "<property name=\"homogeneous\">false</property>"
                   "<property name=\"spacing\">15</property>"
                   "<property name=\"orientation\">1</property>"
                   "<child>"
                   "<object class=\"GtkBox\">"
                   "<property name=\"homogeneous\">false</property>"
                   "<property name=\"spacing\">10</property>"
                   "<child>"
                   "<object class=\"GtkEntry\" id=\"entryData\">"
                   "<property name=\"hexpand\">true</property>"
                   "</object>"
                   "</child>"
                   "<child>"
                   "<object class=\"GtkButton\" id=\"buttonAdd\">"
                   "<property name=\"label\">Añadir</property>"
                   "</object>"
                   "</child>"
                   "</object>"
                   "</child>"
                   "<child>"
                   "<object class=\"GtkScrolledWindow\">"
                   "<property name=\"vexpand\">true</property>"
                   "<child>"
                   "<object class=\"GtkListBox\" id=\"listBox\">"
                   "<style>"
                   "<class name=\"rich-list\"/>"
                   "<class name=\"boxed-list\"/>"
                   "</style>"
                   "</object>"
                   "</child>"
                   "</object>"
                   "</child>"
                   "</object>"
                   "</interface>")
{
    this->m_refBuilder = Gtk::Builder::create_from_string(this->XML);

    this->listBox = m_refBuilder->get_widget<Gtk::ListBox>("listBox");
    this->entryData = m_refBuilder->get_widget<Gtk::Entry>("entryData");
    this->buttonAdd = m_refBuilder->get_widget<Gtk::Button>("buttonAdd");
    this->hbox = m_refBuilder->get_widget<Gtk::Box>("hbox");

    this->entryData->set_placeholder_text("Escribe una tarea.");

    set_margin_bottom(10);
    set_margin_end(10);
    set_margin_start(10);
    set_margin_top(10);

    this->append(*hbox);
}

HomeView::~HomeView()
{
}


Gtk::ListBoxRow *HomeView::newRow(const std::string &id, const std::string &label)
{
    auto taskController = new TaskController(id,label);
    taskController->setCallback([this,taskController]()
    {
        listBox->remove(taskController->view);
    });

    return &taskController->view;
}

// Gtk::ListBoxRow *HomeView::newRow(const std::string &label)
// {
//     Gtk::ListBoxRow *row = new Gtk::ListBoxRow;
//     auto box = new Gtk::Box;
//     auto btnDel = new Gtk::Button;
//     Gtk::Label labelTitle(label);
//     btnDel->set_image_from_icon_name("list-remove-symbolic");
//     btnDel->set_css_classes({"destructive-action"});
//     btnDel->set_hexpand();
//     btnDel->set_halign(Gtk::Align::END);
//     btnDel->set_tooltip_text("Elimina Registro");
//     box->append(labelTitle);
//     box->append(*btnDel);
//     btnDel->signal_clicked().connect([this, row]()
//                                      {this->listBox->remove(*row); });
//     row->set_child(*box);
//     return row;
// }
