#include <iostream>
#include "Monitor.h"
using namespace std;

// Stiven Cabrera - CSC111

int main()
{
    Monitor Acer(1920, 1080, 70);
    Acer.set_brand("Acer");
    Acer.set_model("H243H");
    Acer.set_port_type("HDMI");
    Acer.set_refresh_rate(60);
    int screen_size = Acer.getScreenSize();

    cout << "Brand: " << Acer.get_brand() << endl 
        << "Model: " << Acer.get_model() << endl
        << "Width: " << Acer.get_width() << "px" << endl
        << "Height: " << Acer.get_height() << "px" << endl
        << "PPI: " << Acer.get_ppi() << endl
        << "Refresh rate: " << Acer.get_rerfesh_rate() << "Hz" << endl
        << "Speakers: " << Acer.get_speakers() << endl
        << "Ports: " << Acer.get_ports() << endl
        << "Port types: " << Acer.get_port_type() << endl;

}