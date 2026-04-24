#pragma once
#include <EstadoFoco.hpp>

class Foco
{
private:
    EstadoFoco encendido;
    

public:
    Foco() 
    {
        this->encendido = true;
        this->encendido = "-";
    }
    ~Foco() {}
    void Encender() 
    {
        this->encendido = true;
        this->encendido = "+";
    }
    void Apagar() 
    {
        this->encendido = false;
        this->encendido = "-";
    }

    EstadoFoco LeerEstado() {
        return this->encendido;
    }