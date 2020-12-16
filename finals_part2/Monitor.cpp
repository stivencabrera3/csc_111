#include "Monitor.h"
#include <cmath>

// Stiven Cabrera - CSC111

void Monitor::set_brand(string brand_name)
{
    brand = brand_name;
}

void Monitor::set_model(string model_name)
{
    model = model_name;
}

void Monitor::set_width(int w)
{
    width = w;
}

void Monitor::set_ppi(int p)
{
    ppi = p;
}

void Monitor::set_refresh_rate(double rf)
{
    refreshRate = rf;
}

void Monitor::set_speakers(char s)
{
    speakers = s;
}

void Monitor::set_ports(int ports_num)
{
    ports = ports_num;
}

void Monitor::set_port_type(string port_type)
{
    portType = port_type;
}

string Monitor::get_brand()
{
    return brand;
}

string Monitor::get_model()
{
    return model;
}

int Monitor::get_width()
{
    return width;
}

int Monitor::get_height()
{
    return height;
}

int Monitor::get_ppi()
{
    return ppi;
}

double Monitor::get_rerfesh_rate()
{
    return refreshRate;
}

char Monitor::get_speakers()
{
    return speakers;
}

int Monitor::get_ports()
{
    return ports;
}

string Monitor::get_port_type()
{
    return portType;
}

int Monitor::getScreenSize()
{
    int screen_size = sqrt(pow((width/ppi), 2) + pow((height/ppi), 2));

    return screen_size;
}

