#include "MainWindow.h"

#include <QLabel>

MainWindow::MainWindow(QWidget *parent)
    : QMainWindow(parent)
{
    setWindowTitle("HomeDigitalCenter");
    resize(1200, 800);

    auto *label = new QLabel("HomeDigitalCenter Qt6 Framework", this);
    setCentralWidget(label);
}
