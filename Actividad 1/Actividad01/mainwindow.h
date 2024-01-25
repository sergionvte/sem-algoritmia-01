#ifndef MAINWINDOW_H
#define MAINWINDOW_H

#include <QMainWindow>
#include <list>

QT_BEGIN_NAMESPACE
namespace Ui {
class MainWindow;
}
QT_END_NAMESPACE

class MainWindow : public QMainWindow
{
    Q_OBJECT

public:
    MainWindow(QWidget *parent = nullptr);
    ~MainWindow();

private:
    Ui::MainWindow *ui;
};

// CLASE NEURONA
class Neurona {
private:
    int id;
    float voltaje;
    int posicion_x;
    int posicion_y;
    int red;
    int green;
    int blue;
public:
    Neurona(int, float, int, int, int, int, int);
    ~Neurona();
    void print();
    int get_id();
};

// CLASE LISTANEURONA
class ListaNeuronas {
private:
    std::list<Neurona> lista;
public:
    void insertar_inicio(const Neurona& neurona);
    void insertar_final(const Neurona& neurona);
    void mostrar();

};


#endif // MAINWINDOW_H
