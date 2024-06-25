#pragma once
#include <gtkmm.h>

class View : public Gtk::Frame {
public:
    View() {
        set_can_focus(false); // Este contenedor no puede recibir el foco.
        this->box.set_orientation(Gtk::Orientation::VERTICAL);
        this->label.set_text("0");
        this->buttonPlus.set_label("+");
        this->buttonMinus.set_label("-");

        this->box.append(this->label);
        this->box.append(this->buttonPlus);
        this->box.append(this->buttonMinus);

        this->set_child(this->box);
    }

    virtual ~View() {}

    Gtk::Box box;
    Gtk::Label label;
    Gtk::Button buttonPlus , buttonMinus;

private:
    // Gtk::Widget* m_child = nullptr;
};