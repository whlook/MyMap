#ifndef MAINWINDOW_H
#define MAINWINDOW_H

#include <QMainWindow>
#include <QCursor>
#include <QMoveEvent>
#include <QPoint>
#include "opencv.hpp"
#include <QImage>
#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QMenuBar>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QTextBrowser>
#include <QtWidgets/QWidget>
#include <QDialog>
#include <QMessageBox>
#include <fstream>
#pragma execution_character_set("utf-8")
using namespace cv;
namespace Ui {
class MainWindow;
}

class MainWindow : public QMainWindow
{
    Q_OBJECT

public:
    explicit MainWindow(QWidget *parent = 0);

    void mouseMoveEvent(QMouseEvent * event);

    bool eventFilter(QObject* o,QEvent*e);

    QImage Mat2QImage(cv::Mat cvImg);

    void mousePressEvent(QMouseEvent * event);



    ~MainWindow();

private slots:


    void on_pushButton_4_clicked();

    void on_pushButton_5_clicked();



    void on_pushButton_clicked();

    void on_pushButton_2_clicked();

    void on_pushButton_3_clicked();

    void on_pushButton_6_clicked();

private:
    Ui::MainWindow *ui;


private:


    typedef struct road_dot{
        int i;   // which place
        int vistable;
        cv::Point self;
        std::vector<size_t> others_id;  // save other point connected;
    }Road_node;


    std::vector<Road_node> road;

    std::ofstream file_o;
    std::ifstream file_i;

    std::vector<QString> name;
    std::vector<cv::Point> point;
    int time_flag;    // if mouse move and draw  flag



    Mat img,raw;

    int write_img_flag;  // if have road and write to file

    int func1_flag; // if func1(map) can use  0-cant  1-can



    QImage qimg,qraw;


    Road_node start_node;
    int start_set_flag;

    Road_node end_node;
    int end_set_flag;

    int on_dot_flag;

    Mat img_roi;
    Mat img_add;

    QMessageBox *msg;

    std::vector<cv::Mat> place_img;






};

#endif // MAINWINDOW_H
