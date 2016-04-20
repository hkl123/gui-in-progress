#include "camera.h"
#include <QCamera>
#include <QMediaObject>
#include <QMediaService>
#include <QMediaRecorder>
#include <QCameraViewfinder>
#include <QCameraInfo>
#include <QMediaMetaData>
#include <QtWidgets>


camera::camera()
{
    QCameraInfo::availableCameras();
    QList<QCameraInfo> cameras = QCameraInfo::availableCameras();

    camera = new QCamera;
    viewfinder = new QCameraViewfinder;
    camera::setViewfinder(viewfinder);
    viewfinder->show();

    camera->start(); // to start the viewfinder

    imageCapture = new QCameraImageCapture(camera);

    camera->setCaptureMode(QCamera::CaptureStillImage);
    camera->start(); // Viewfinder frames start flowing

    //on half pressed shutter button
    camera->searchAndLock();

    //on shutter button pressed
    imageCapture->capture();

    //on shutter button released
    camera->unlock();
}
