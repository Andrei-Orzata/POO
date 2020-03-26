#ifndef VECTOR_H_INCLUDED
#define VECTOR_H_INCLUDED

class Vector {
    private:
        int n;
        float *t;
    public:
        Vector(int n,int x);
        Vector(const Vector &v);
        ~Vector();
        void citire();
        void afisare();
        void reactualizare(int x,int nr);
        float suma();
        void findMAX();
        void sortASC();
        Vector operator=(Vector);
        float operator*(Vector);

};


#endif // VECTOR_H_INCLUDED
