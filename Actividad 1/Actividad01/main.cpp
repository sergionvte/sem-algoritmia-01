#include "mainwindow.h"

#include <QApplication>

int main(int argc, char *argv[])
{

    // TEST AREA

    Neurona n1 = Neurona(1, 2.0, 3, 4, 5, 6, 7);
    Neurona n2 = Neurona(2, 9.0, 8, 7, 6, 5, 4);
    Neurona n3 = Neurona(3, 1.5, 3, 3, 3, 3, 3);
    n1.print();
    n2.print();
    n3.print();

    ListaNeuronas l = ListaNeuronas();

    l.insertar_inicio(n1);
    l.insertar_inicio(n3);
    l.insertar_final(n2);

    l.mostrar();

    // END TEST AREA

    QApplication a(argc, argv);
    MainWindow w;
    w.show();
    return a.exec();
}
