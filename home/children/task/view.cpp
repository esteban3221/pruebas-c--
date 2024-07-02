#include "home/children/task/view.hpp"

TaskView::TaskView(/* args */)
{
    this->hbox.set_orientation(Gtk::Orientation::HORIZONTAL);

    this->hbox.append(this->labelTask);
    this->hbox.append(this->buttonTask);

    this->buttonTask.set_image_from_icon_name("list-remove-symbolic");
    this->labelTask.set_halign(Gtk::Align::START);
    this->labelTask.set_hexpand();
    this->buttonTask.set_halign(Gtk::Align::END);

    this->set_child(hbox);
}

TaskView::~TaskView()
{
}
