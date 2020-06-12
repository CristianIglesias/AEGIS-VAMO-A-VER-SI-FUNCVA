#ifndef PROVEEDOR_H_INCLUDED
#define PROVEEDOR_H_INCLUDED

class Proveedor:public Persona{
protected:
    int NumeroProveedor;
    float PorcentajeRentabilidad;
    float EstadoCuenta;

public:
    //metodos;
     void cargar();
     void mostrar():
        int getNumeroProveedor(){return  NumeroProveedor}
        float getPorcentajeRentabilidad(){return PorcentajeRentabilidad}
        float getEstadoCuenta(){return EstadoCuenta}
        void setNumeroProveedor(int num){NumeroProveedor=num;}
        void setPorcentajeRentabilidad(float porcentaje){PorcentajeRentabilidad=porcentaje;}
        void setEstadoCuenta(float cuenta){EstadoCuenta=cuenta;}

};


#endif // PROVEEDOR_H_INCLUDED
