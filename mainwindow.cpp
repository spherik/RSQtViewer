#include "mainwindow.h"
#include "ui_mainwindow.h"

MainWindow::MainWindow(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::MainWindow)
{
    ui->setupUi(this);

    // Create a SenseManager instance
        PXCSenseManager *sm = PXCSenseManager::CreateInstance();

        // Select the color and depth streams
        PXCVideoModule::DataDesc ddesc = {};
        ddesc.deviceInfo.streams = PXCCapture::STREAM_TYPE_COLOR | PXCCapture::STREAM_TYPE_DEPTH;
        sm->EnableStreams(&ddesc);

        // Initialize my event handler
        MyHandler handler;
        sm->Init(&handler);

            // Stream depth samples
            sm->StreamFrames(true);

        // Clean up
        sm->Close();
        sm->Release();

}

MainWindow::~MainWindow()
{
    delete ui;
}
