#ifndef MAINWINDOW_H
#define MAINWINDOW_H

#include <QMainWindow>
#include "pxcsensemanager.h"

class MyHandler : public PXCSenseManager::Handler {
public:

    virtual pxcStatus PXCAPI OnNewSample(pxcUID, PXCCapture::Sample *sample) {
        // work on sample->color

            // return NO ERROR to continue, or any ERROR to exit the loop
            return PXC_STATUS_NO_ERROR;
    }
};

namespace Ui {
class MainWindow;
}

class MainWindow : public QMainWindow
{
    Q_OBJECT

public:
    explicit MainWindow(QWidget *parent = 0);
    ~MainWindow();

private:
    Ui::MainWindow *ui;
};

#endif // MAINWINDOW_H
