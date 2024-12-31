//Riheb BEN RJEB CPI2 GRP A
#ifndef POINT_H
#define POINT_H
class Point
{
    public:
        Point(int x,int y);
        //constructeur de copie
        Point(const Point& p);
        void affiche()const;
        friend bool comparer(const Point& p1,const Point& p2);
        friend float distance(const Point& p1,const Point& p2);
        friend Point milieu(const Point& p1,const Point& p2);

    private:
        int x,y;
};

#endif // POINT_H
