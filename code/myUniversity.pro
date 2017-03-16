#-------------------------------------------------
#
# Project created by QtCreator 2016-10-26T14:43:10
#
#-------------------------------------------------

QT       += core gui

greaterThan(QT_MAJOR_VERSION, 4): QT += widgets

TARGET = myUniversity
TEMPLATE = app

RC_FILE = rc.rc

SOURCES += main.cpp\
        mainwindow.cpp

HEADERS  += mainwindow.h

FORMS    += mainwindow.ui

INCLUDEPATH += G:/OpenCV2/opencv/build/include/opencv2\
               G:/OpenCV2/opencv/build/include/opencv\
               G:/OpenCV2/opencv/build/include\
                           G:/OpenCV/libfacedetection-master/include


LIBS += G:\OpenCV2\opencv\build\x64\vc12\lib\opencv_calib3d2413.lib
LIBS += G:\OpenCV2\opencv\build\x64\vc12\lib\opencv_contrib2413.lib
LIBS += G:\OpenCV2\opencv\build\x64\vc12\lib\opencv_core2413.lib
LIBS += G:\OpenCV2\opencv\build\x64\vc12\lib\opencv_features2d2413.lib
LIBS += G:\OpenCV2\opencv\build\x64\vc12\lib\opencv_flann2413.lib
LIBS += G:\OpenCV2\opencv\build\x64\vc12\lib\opencv_gpu2413.lib
LIBS += G:\OpenCV2\opencv\build\x64\vc12\lib\opencv_highgui2413.lib
LIBS += G:\OpenCV2\opencv\build\x64\vc12\lib\opencv_imgproc2413.lib
LIBS += G:\OpenCV2\opencv\build\x64\vc12\lib\opencv_legacy2413.lib
LIBS += G:\OpenCV2\opencv\build\x64\vc12\lib\opencv_ml2413.lib
LIBS += G:\OpenCV2\opencv\build\x64\vc12\lib\opencv_nonfree2413.lib
LIBS += G:\OpenCV2\opencv\build\x64\vc12\lib\opencv_objdetect2413.lib
LIBS += G:\OpenCV2\opencv\build\x64\vc12\lib\opencv_ocl2413.lib
LIBS += G:\OpenCV2\opencv\build\x64\vc12\lib\opencv_photo2413.lib
LIBS += G:\OpenCV2\opencv\build\x64\vc12\lib\opencv_stitching2413.lib
LIBS += G:\OpenCV2\opencv\build\x64\vc12\lib\opencv_superres2413.lib
LIBS += G:\OpenCV2\opencv\build\x64\vc12\lib\opencv_ts2413.lib
LIBS += G:\OpenCV2\opencv\build\x64\vc12\lib\opencv_video2413.lib
LIBS += G:\OpenCV2\opencv\build\x64\vc12\lib\opencv_videostab2413.lib
LIBS += G:\OpenCV\libfacedetection-master\lib\libfacedetect.lib
LIBS += G:\OpenCV\libfacedetection-master\lib\libfacedetect-x64.lib

RESOURCES += \
    mysources.qrc

DISTFILES +=
