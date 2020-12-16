#ifndef MONITOR_H
#define MONITOR_H
#include <string>
using namespace std;

// Stiven Cabrera - CSC111

class Monitor
{
    private:
        string brand;
        string model;
        int width;
        int height;
        int ppi;
        double refreshRate;
        char speakers;
        int ports;
        string portType;
    
    public:
        Monitor()
        {
            width = 0;
            height = 0;
            ppi = 0;
            refreshRate = 0;
            ports = 0;

        }

        Monitor(int w, int h, int p)
        {
            width = w;
            height = h;
            ppi = p;
            brand = "Generic";
            model = "Basic";
            refreshRate = 60; 
            speakers = 'N';
            ports = 1; 
            portType = "HDMI";

        }

        ~Monitor(){}

        void set_brand(string brand_name);
        
        void set_model(string model_name);
    
        void set_width(int w);
        
        void set_height(int h);

        void set_ppi(int p);

        void set_refresh_rate(double rf);
        
        void set_speakers(char s);
        
        void set_ports(int ports_num);
        
        void set_port_type(string port_type);

        string get_brand();

        string get_model();
        
        int get_width();

        int get_height();

        int get_ppi();

        double get_rerfesh_rate();

        char get_speakers();

        int get_ports();

        string get_port_type();

        int getScreenSize();

};

#endif
