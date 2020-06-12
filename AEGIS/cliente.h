#ifndef CLIENTE_H_INCLUDED
#define CLIENTE_H_INCLUDED

class Cliente:public Persona{
protected:
    int idCliente;
    int TipodePago;
    int PrefFactura;
    float deuda;

public:
    //metodos;
     void cargar();
     void mostrar():
         int getidCliente(){return idCliente}
         int getTipodePago(){return TipodePago}
         int getPrefFactura(){return PrefFactura}
         float getdeuda(){return deuda}
         void setidCliente(int id){idCliente=id;}
         void setTipodePago(int tipo){TipodePago=tipo;}
         void setPrefFactura(int factura){PrefFactura=factura}
         void setdeuda(float d){deuda=d;}
};

#endif // CLIENTE_H_INCLUDED
