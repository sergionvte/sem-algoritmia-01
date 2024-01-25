#include "mainwindow.h"
#include "./ui_mainwindow.h"
#include <iostream>

MainWindow::MainWindow(QWidget *parent)
    : QMainWindow(parent)
    , ui(new Ui::MainWindow)
{
    ui->setupUi(this);
}

MainWindow::~MainWindow()
{
    delete ui;
}


Neurona::Neurona(int _id, float _voltaje, int _posicion_x, int _posicion_y, int _red, int _green, int _blue) {
    id = _id;
    voltaje = _voltaje;
    posicion_x = _posicion_x;
    posicion_y = _posicion_y;
    red = _red;
    green = _green;
    blue = _blue;
}

Neurona::~Neurona() {}

void Neurona::print() {
    std::cout << "NEURONA " << id << std::endl << std::endl
              << "voltaje: " << voltaje << std::endl
              << "posicion x: " << posicion_x << std::endl
              << "posicion y" << posicion_y << std::endl
              << "red: " << red << std::endl
              << "green: " << green << std::endl
              << "blue: " << blue << std::endl
              << std::endl;
}

int Neurona::get_id() {
    return id;
}

void ListaNeuronas::insertar_inicio(const Neurona& neurona) {
    lista.push_front(neurona);
}

void ListaNeuronas::insertar_final(const Neurona& neurona) {
    lista.push_back(neurona);
}

void ListaNeuronas::mostrar() {
    for (std::list<Neurona>::iterator it = lista.begin(); it != lista.end(); ++it) {
        int id_actual = it ->get_id();
        std::cout << "Neurona " << id_actual << std::endl;
    }
}
