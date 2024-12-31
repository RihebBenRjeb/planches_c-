#ifndef POINT_H
#define POINT_H
//Riheb BEN RJEB CPI2 GRP A
class Point
{
    public:
        Point(double  x=0.0,double y=0.0);
        //constructeur de copie
        Point(const Point& p);
        double getX() const;
        double getY() const;
        void setX(double x);
        void setY(double y);
        void affiche()const;
        static bool comparer(const Point& p1,const Point& p2);
        static double distance(const Point& p1,const Point& p2);
        Point milieu(const Point& p1,const Point& p2);

    private:
        double x,y;
};

#endif // POINT_H
