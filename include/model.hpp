// model.h
#ifndef MODEL_H
#define MODEL_H

#include <string>
#include <iostream>

class Model
{
public:
    Model() : count(0) {}

    int getData() const
    {
        return count;
    }

    void setData(const  int &newValue)
    {
        count = newValue;
    }

private:
    int count;
};

#endif // MODEL_H