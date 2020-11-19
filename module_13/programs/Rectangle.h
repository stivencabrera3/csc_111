#ifndef RECTANGLE_H
#define RECTANGLE_H
class Rectangle
{
    private:
        double width;
        double length;
    public:
        Rectangle(double w, double l)
        {
            width = w;
            length = l;
        }
        void change_width(double w)
        {
            width = w;
        }
        void change_length(double l)
        {
            length = l;
        }
        double get_width() const
        {
            return width;
        }
        double get_length() const
        {
            return length;
        }
        double get_area() const
        {   
            return length * width;
        }
};

#endif