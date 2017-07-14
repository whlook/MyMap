#include "mainwindow.h"
#include "ui_mainwindow.h"
#include  "qdebug.h"
 #include <QDesktopServices>

#include <QUrl>

MainWindow::MainWindow(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::MainWindow)
{



    func1_flag = 1;  // use func1
    write_img_flag = 0; // have no img
    on_dot_flag = 0;

    start_set_flag = 0;
    end_set_flag = 0;
    time_flag = 1;


    ui->setupUi(this);




    // pos
    point.push_back(Point(1274,399));
    point.push_back(Point(1175,384));
    point.push_back(Point(1205,510));
    point.push_back(Point(1259,581));
    point.push_back(Point(988,583));
    point.push_back(Point(1002,733));
    point.push_back(Point(900,562));
    point.push_back(Point(1189,377));
    point.push_back(Point(962,358));
    point.push_back(Point(953,301));
    point.push_back(Point(951,510));
    point.push_back(Point(883,495));
    point.push_back(Point(880,474));
    point.push_back(Point(837,413));
    point.push_back(Point(820,375));
    point.push_back(Point(709,488));
    point.push_back(Point(728,973));
    point.push_back(Point(530,454));
    point.push_back(Point(729,586));
    point.push_back(Point(726,782));
    point.push_back(Point(831,469));
    point.push_back(Point(1307,529));
    point.push_back(Point(475,320));
    point.push_back(Point(477,256));
    point.push_back(Point(468,247));
    point.push_back(Point(415,186));
    point.push_back(Point(396,203));
    point.push_back(Point(351,288));
    point.push_back(Point(308,244));
    point.push_back(Point(220,280));
    point.push_back(Point(248,328));
    point.push_back(Point(269,375));
    point.push_back(Point(282,425));
    point.push_back(Point(210,422));
    point.push_back(Point(139,408));
    point.push_back(Point(354,681));
    point.push_back(Point(1040,542));
    point.push_back(Point(219,467));
    point.push_back(Point(717,523));

    name.push_back("����");
    name.push_back("��ѧ¥10");
    name.push_back("��ѧ¥9");
    name.push_back("��ѧ¥8");
    name.push_back("ͼ���");
    name.push_back("��ѧ¥11");
    name.push_back("����(һ)");
    name.push_back("�й�����ATM");
    name.push_back("��ѧ�������");
    name.push_back("����");
    name.push_back("�������ѧԺ");
    name.push_back("�������");
    name.push_back("������");
    name.push_back("����¥1��");
    name.push_back("����¥2��");
    name.push_back("ԡ��");
    name.push_back("УҽԺ");    // 16
    name.push_back("����������");
    name.push_back("����(һ)");
    name.push_back("��Ӿ��");
    name.push_back("ƹ����ë��");
    name.push_back("������վ");
    name.push_back("����¥5��");
    name.push_back("����¥4��");
    name.push_back("����¥3��");
    name.push_back("����¥10��");
    name.push_back("��������ݴ�");
    name.push_back("3��4�Ų���");
    name.push_back("����¥9��");
    name.push_back("����¥6��");
    name.push_back("����¥7��");
    name.push_back("����¥8��");
    name.push_back("1��2�Ų���");
    name.push_back("����(��)");
    name.push_back("����(��)");
    name.push_back("����ѵ������");
    name.push_back("���컨̳");  // 36
    name.push_back("��ˮ��(��)");
    name.push_back("��ˮ��(һ)");


    file_i.open("road.ini",std::ios::in);  // load road nodes info
    if(file_i.is_open())
    {
        while(!file_i.eof())
        {
         Road_node nr; int id;
         int tempCnt;


         file_i>>nr.i;
         file_i>>nr.self.x>>nr.self.y;
         file_i>>tempCnt;
         for(int i=0;i<tempCnt;i++)
         {
             file_i>>id;
             nr.others_id.push_back(id);
         }
         road.push_back(nr);

        }

        file_i.close();
    }
    road.pop_back();




   // set background color

    QPalette palette(this->palette());
    palette.setColor(QPalette::Background,Qt::white);
    this->setPalette(palette);


    //set window
    img = imread("logo.png");
    cv::resize(img,img,cv::Size(64,64));
    qimg = Mat2QImage(img);
    QIcon *t = new QIcon(QPixmap::fromImage(qimg));
    this->setWindowIcon(*t);
    this->resize(1500,880);
    this->setMinimumSize(1500,880);
    this->setMaximumSize(1500,880);
    centralWidget()->setMouseTracking(1);
    this->setMouseTracking(true);
    ui->pic->setMouseTracking(1);
    this->setWindowTitle("My University !");


    ui->pic->setGeometry(QRect(10,70,1480,800));
    ui->pic->resize(1480,800);


    img = imread("xaut.png");
    ui->label->setGeometry(QRect(670,1,160,55));
    ui->label->resize(160,55);

    cv::resize(img,img,Size(160,55));


    qimg = Mat2QImage(img);


    ui->label->setPixmap(QPixmap::fromImage(qimg));


    for(int i = 0;i<39;i++)
    {
        char a[2];
        itoa(i,a,10);

        std::string name;
        name += a;
        name += ".png";

       Mat pic = imread(name);

        cv::resize(pic,pic,Size(170,120));
       place_img.push_back(pic);



    }






    img = imread("qujiang2.png");


    cv::resize(img,img,Size(1480,800));
    for(int i = 0;i<point.size();i++)
    {
        point[i].x -= 10;
        point[i].y -= 70;
        cv::circle(img,point[i],6,Scalar(200,0,0),-1);

    }
    for(int i = 0;i<road.size();i++)
    {
       //  cv::circle(img,road[i].self,6,Scalar(0,0,0),-1);
    }



    raw = img.clone();
    qimg = Mat2QImage(img);

    qraw = qimg.copy();
    ui->pic->setPixmap(QPixmap::fromImage(qimg));




}

MainWindow::~MainWindow()
{
    delete ui;
}


/***********************************************************/
void MainWindow::mouseMoveEvent(QMouseEvent * event)
{


    int x = event->pos().x();
    int y = event->pos().y();
    x-=10;  // turn to image pos
    y-=70;

if(func1_flag == 1)
{
   for(int i = 0;i<point.size();i++)
   {
       if((abs(x-point[i].x) <10 )&& (abs(y-point[i].y)<10))
         {  ui->pic->setCursor(Qt::CrossCursor);
           this->setToolTip(name[i]);
           this->setToolTipDuration(1500);
           on_dot_flag = 1;

           if(write_img_flag)  // if have write img
           {
               img = imread("qujiang2_temp.png");
               cv::resize(img,img,Size(1480,800));

               img_add = place_img[i];
               cv::resize(img_add,img_add,Size(170,120));
               img_roi = img(Rect(point[i].x+5,point[i].y-115,170,120));

               Mat mask;
               cv::cvtColor(place_img[i],mask,CV_BGR2GRAY);
               cv::resize(mask,mask,Size(170,120));
               img_add.copyTo(img_roi,mask);


               qimg = Mat2QImage(img);
               ui->pic->setPixmap(QPixmap::fromImage(qimg));
           }
           else
           {
               img = imread("qujiang2.png");
               cv::resize(img,img,Size(1480,800));

               for(int ii = 0;ii<point.size();ii++)  // draw point
               {

                   cv::circle(img,point[ii],6,Scalar(200,0,0),-1);

               }

               img_add = place_img[i];

               img_roi = img(Rect(point[i].x+5,point[i].y-115,170,120));

               Mat mask;
               cv::cvtColor(place_img[i],mask,CV_BGR2GRAY);

               img_add.copyTo(img_roi,mask);

               qimg = Mat2QImage(img);
               ui->pic->setPixmap(QPixmap::fromImage(qimg));

           }


           time_flag = 1;


           break;

       }
       else
        {
            ui->pic->setCursor(Qt::CrossCursor);


            if(time_flag)
            {
                time_flag = 0;
                if(write_img_flag)
                {
                    img = imread("qujiang2_temp.png");
                    cv::resize(img,img,Size(1480,800));
                    qimg = Mat2QImage(img);
                    ui->pic->setPixmap(QPixmap::fromImage(qimg));
                }
                else
                {
                    img = imread("qujiang2.png");
                    cv::resize(img,img,Size(1480,800));


                    for(int ii = 0;ii<point.size();ii++)  // draw point
                    {

                        cv::circle(img,point[ii],6,Scalar(200,0,0),-1);

                    }

                    qimg = Mat2QImage(img);
                    ui->pic->setPixmap(QPixmap::fromImage(qimg));
                }
            }


             this->setToolTip("");
             on_dot_flag = 0;

        }

   }


}

else if(func1_flag != 1)
{
    if((x>10)&& (y>70)&&x<1480&&y<870)
    {
        ui->pic->setCursor(Qt::PointingHandCursor);

    }
}





    //ui->label_2->setText(QString("%1").arg(event->pos().x()));
    //ui->label_4->setText(QString("%1").arg(event->pos().y()));


}






// press event
void MainWindow::mousePressEvent(QMouseEvent *event)
{

    int x = event->x() - 10;   // get posation
    int y = event->y() -70;

   if (func1_flag == 2)
    {
        if(x>10&&y>70&&x<1480&&y<870)
        {
           QDesktopServices::openUrl(QUrl("http://www.xaut.edu.cn/about/"));
        }
    }
   if (func1_flag == 3)
    {
        if(x>10&&y>70&&x<1480&&y<870)
        {
           QDesktopServices::openUrl(QUrl("http://www.xaut.edu.cn/xaut/xaut-10/"));
        }
    }
    x;y;

}


void MainWindow::on_pushButton_4_clicked()
{

    if(func1_flag == 1)
    {
    int start_id = ui->comboBox->currentIndex();  // get start and end node's id /
    int end_id = ui->comboBox_2->currentIndex();


    if(start_id!=16&&start_id!=36&&end_id!=16&&end_id!=36 )
    {


    for(int i = 0;i<road.size();i++)
    {
        if(point[start_id].x<600||point[end_id].x<600)
        {
           road[i].vistable = 0;  // set all nodes are visitable;
        }
        else
        {

        if(point[start_id].x < point[end_id].x)
        {
            if(road[i].self.x<(point[start_id].x-80)||road[i].self.x>(point[end_id].x+80))
                road[i].vistable = 1;
            else
                road[i].vistable = 0;  // set all nodes are visitable;
        }
        else
        {
            if(road[i].self.x>(point[start_id].x+80)||road[i].self.x<(point[end_id].x-80))
                road[i].vistable = 1;
            else
                road[i].vistable = 0;  // set all nodes are visitable;
        }
        }



    }


  //  Road_node start_node_temp,end_node_temp;  // temp node

    int road_start_i,road_end_i;
    int road_start_i_temp,road_end_i_temp;


    for(int i = 0;i<road.size();i++) // search which node is on the start/end point;
    {
        if(road[i].i == start_id)
        {

            start_node = road[i];
            road_start_i = i;  // get the id of start roadnode;

        }
        else if(road[i].i == end_id)
        {

            end_node = road[i];
            road_end_i = i;  // get the id of end roadnode;

        }

    }

    /***********/

    road_start_i_temp = road_start_i;
    road_end_i_temp = road_start_i;

   // start_node_temp = start_node;
    //end_node_temp = start_node_temp;

    std::vector<int> road_temp;

    int pre_distance = 9000000;
    while(road[road_end_i_temp].i!= end_id)
    //for(int xx = 0;xx<10;xx++)
    {

        int useable_flag = 0;
        for(int i = 0;i<road[road_end_i_temp].others_id.size();i++)   // if the current endpoint to have next point
        {
            if(road[road[road_end_i_temp].others_id[i]].vistable == 0)
                useable_flag = 1;  // have useable point

        }
        if(useable_flag)   // have  useable next node
        {
           // start_node_temp = end_node_temp;
            road_start_i_temp = road_end_i_temp;
            road[road_start_i_temp].vistable = 1; // have visited it;

            //start_node_temp.vistable = 1; // have visited it;

            road_temp.push_back(road_start_i_temp);   // record the walked node

            int temp_min_id;
            for(int i = 0;i<road[road_start_i_temp].others_id.size();i++)  // find the min dis node   // int these next points
            {
                if(road[road[road_start_i_temp].others_id[i]].vistable == 0 )  // if this node have not visited;
                {

             int tempx,tempy;


             tempx = (road[road[road_start_i_temp].others_id[i]].self.x- end_node.self.x)*(road[road[road_start_i_temp].others_id[i]].self.x - end_node.self.x);
             tempy = (road[road[road_start_i_temp].others_id[i]].self.y- end_node.self.y)*(road[road[road_start_i_temp].others_id[i]].self.y - end_node.self.y);
             if(pre_distance<(tempx+tempy))
                {


                  //  end_node_temp = road[road[road_start_i_temp].others_id[i-1]];
                    road_end_i_temp = road[road_start_i_temp].others_id[temp_min_id];

                }
             else {
                    //end_node_temp = road[start_node_temp.others_id[i]];
                    road_end_i_temp = road[road_start_i_temp].others_id[i];
                    temp_min_id = i;

                    pre_distance = tempx+tempy;
                   }
                }

            }

            pre_distance = 9000000;





        }
   else // have no useable next node
        {
            road[road_end_i_temp].vistable = 1;
          loop:    for(int i = 0;i<road[road_start_i_temp].others_id.size();i++)  // if have other useable nodes
            {
                if(road[road[road_start_i_temp].others_id[i]].vistable == 0)
                    useable_flag = 1;  // have useable point

            }

            if(useable_flag)
            {
                int temp_min_id;
                for(int i = 0;i<road[road_start_i_temp].others_id.size();i++)  // fine the min dis node
                {
                    if(road[road[road_start_i_temp].others_id[i]].vistable == 0 )  // if this node have not visited;
                    {

                 int tempx,tempy;


                 tempx = (road[road[road_start_i_temp].others_id[i]].self.x- end_node.self.x)*(road[road[road_start_i_temp].others_id[i]].self.x - end_node.self.x);
                 tempy = (road[road[road_start_i_temp].others_id[i]].self.y- end_node.self.y)*(road[road[road_start_i_temp].others_id[i]].self.y - end_node.self.y);
                 if(pre_distance<(tempx+tempy))
                    {

                        //end_node_temp = road[road[road_start_i_temp].others_id[i-1]];
                        road_end_i_temp = road[road_start_i_temp].others_id[temp_min_id];

                    }
                 else {
                        //end_node_temp = road[start_node_temp.others_id[i]];
                        road_end_i_temp = road[road_start_i_temp].others_id[i];

                        temp_min_id = i;
                        pre_distance = tempx+tempy;
                       }
                    }

                }
                pre_distance = 9000000;

            }
            else
            {

                road_temp.pop_back(); // drop this start_temp node
                road_start_i_temp = road_temp[road_temp.size()-1];
                goto loop;
            }
        }








   }


    road_temp.push_back(road_end_i_temp);
    img = imread("qujiang2.png");

    cv::resize(img,img,Size(1480,800));





    for(int i = 0;i<point.size();i++)
    {
        cv::circle(img,point[i],6,Scalar(200,0,0),-1);

    }

    for(int i = 0;i<road_temp.size()-1;i++)
    {
        cv::line(img,road[road_temp[i]].self,road[road_temp[i+1]].self,cv::Scalar(0,140,0),5);

    }

    cv::circle(img,point[start_id],6,cv::Scalar(0,190,0),-1);
    cv::circle(img,point[end_id],6,cv::Scalar(0,222,0),-1);

    img_add = imread("here.png");
    cv::resize(img_add,img_add,Size(30,40));
    img_roi = img(Rect(point[start_id].x-15,point[start_id].y-45,30,40));

    Mat mask = imread("here.png",0);
    cv::resize(mask,mask,Size(30,40));
    img_add.copyTo(img_roi,mask);


    img_add = imread("dst.png");
    cv::resize(img_add,img_add,Size(30,35));
    img_roi = img(Rect(point[end_id].x,point[end_id].y-35,30,35));

    mask = imread("dst.png",0);
    cv::resize(mask,mask,Size(30,35));
    img_add.copyTo(img_roi,mask);

    cv::imwrite("qujiang2_temp.png",img);  // write a img for
    write_img_flag = 1;

    qimg = Mat2QImage(img);
    ui->pic->setPixmap(QPixmap::fromImage(qimg)); // flush the pic



    }

    }


}

void MainWindow::on_pushButton_5_clicked()
{
    // clear

    if(func1_flag == 1)
    {
    qimg = qraw.copy();
    ui->pic->setPixmap(QPixmap::fromImage(qimg));
    img = raw.clone();


    write_img_flag = 0;
    }


}


 // three func pushbtn

void MainWindow::on_pushButton_clicked()
{
    func1_flag = 1;
    ui->pushButton_5->setDisabled(false);
    ui->pushButton_4->setDisabled(false);
    ui->comboBox->setDisabled(false);
    ui->comboBox_2->setDisabled(false);

    if(write_img_flag)
    {
        img = imread("qujiang2_temp.png");
        cv::resize(img,img,Size(1480,800));
        qimg = Mat2QImage(img);
        ui->pic->setPixmap(QPixmap::fromImage(qimg));
    }
    else
    {
        img = imread("qujiang2.png");
        cv::resize(img,img,Size(1480,800));


        for(int ii = 0;ii<point.size();ii++)  // draw point
        {

            cv::circle(img,point[ii],6,Scalar(200,0,0),-1);

        }

        qimg = Mat2QImage(img);
        ui->pic->setPixmap(QPixmap::fromImage(qimg));
    }
}

void MainWindow::on_pushButton_2_clicked()
{
    func1_flag = 3;
    ui->pushButton_5->setDisabled(true);
    ui->pushButton_4->setDisabled(true);
    ui->comboBox->setDisabled(true);
    ui->comboBox_2->setDisabled(true);


    img = imread("lianxi.png");
    cv::resize(img,img,Size(1480,800));

    qimg = Mat2QImage(img);
    ui->pic->setPixmap(QPixmap::fromImage(qimg));

}

void MainWindow::on_pushButton_3_clicked()
{
    func1_flag = 2;
    ui->pushButton_5->setDisabled(true);
    ui->pushButton_4->setDisabled(true);
    ui->comboBox->setDisabled(true);
    ui->comboBox_2->setDisabled(true);

    img = imread("jieshao.png");
    cv::resize(img,img,Size(1480,740));

    qimg = Mat2QImage(img);
    ui->pic->setPixmap(QPixmap::fromImage(qimg));


}








    /**********************************  UNDER ARE NOT HOT CODES  ***********************************/



QImage MainWindow::Mat2QImage(cv::Mat cvImg)
{

        QImage qImg;
        if(cvImg.channels()==3)                             //3 channels color image
        {

            cv::cvtColor(cvImg,cvImg,CV_BGR2RGB);
            qImg =QImage((const unsigned char*)(cvImg.data),
                        cvImg.cols, cvImg.rows,
                        cvImg.cols*cvImg.channels(),
                        QImage::Format_RGB888);
        }
        else if(cvImg.channels()==1)                    //grayscale image
        {
            qImg =QImage((const unsigned char*)(cvImg.data),
                        cvImg.cols,cvImg.rows,
                        cvImg.cols*cvImg.channels(),
                        QImage::Format_Indexed8);
        }
        else
        {
            qImg =QImage((const unsigned char*)(cvImg.data),
                        cvImg.cols,cvImg.rows,
                        cvImg.cols*cvImg.channels(),
                        QImage::Format_RGB888);
        }
        return qImg;
}

bool MainWindow::eventFilter(QObject *o, QEvent *e)
{

o;
e;

    return false;

}




/************************************************************************************************
 *
 * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * *
 *   These under codes construct a tool to get the road nodes infomation , they are        *
 *   very important . Dont remove them!                                                    *
 *   <2016-10-29><wuhui>                                                                   *
 * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * *
 *
 void MainWindow::mousePressEvent(QMouseEvent *event)
{

    if(0<x&&x<1480&&0<y&&y<800)  // if on the pic
    {



         Road_node new_node;
         new_node.self = Point(x,y);
         new_node.i = 200;  // not a pos

         cv::circle(img,Point(x,y),6,cv::Scalar(255,0,255),-1);
         qimg = Mat2QImage(img);
         ui->pic->setPixmap(QPixmap::fromImage(qimg));




         if(!first_node)
         {start_node = new_node;start_set_flag = 1; first_node =2;pre_nodes_id = 0;}

         for(int i = 0;i<point.size();i++)
         {
             if((abs(x-point[i].x) <10 )&& (abs(y-point[i].y)<10))  // if at pos
               {
                 new_node.i = i;
                 qDebug()<<"this is pos "<<i;
                 break;
               }
         }

         road.push_back(new_node);// record this new node ;


       for(int i = 0;i<road.size()-1;i++)
       {
           if((abs(x-road[i].self.x) <10 )&& (abs(y-road[i].self.y)<10))  // if at node
           {  // yes

               road.pop_back();  // drop this node


               if(event->button() == Qt::LeftButton)   // if leftButton
                {

                   start_node = road[i];  // set start node
                   start_set_flag = 1;

                   pre_nodes_id = i;

                }
               else if(event->button() == Qt::RightButton)
               {

                   start_node = road[pre_nodes_id];   // this is start
                   start_set_flag = 1;

                   end_node = road[i];
                   end_set_flag = 1;

                   road[i].others_id.push_back(pre_nodes_id);
                   road[pre_nodes_id].others_id.push_back(i);

                    pre_nodes_id = i;
               }

               qDebug()<<"this node's others.size = "<<road[i].others_id.size();



               break;
            }
           else if(i == road.size() - 2)
           {  // no

               if(!start_set_flag) // if have no start_node
               {
                   start_node = road[pre_nodes_id];
                   start_set_flag = 1;
               }
               if(!end_set_flag)
               {
                   end_node = road[road.size()-1];
                   end_set_flag = 1;
               }

               road[pre_nodes_id].others_id.push_back(road.size()-1);  // push now node
               road[road.size()-1].others_id.push_back(pre_nodes_id);
               qDebug()<<"this node's others.size = "<<road[road.size()-1].others_id.size();
               pre_nodes_id = road.size()-1;
               break;

           }
       }



       if(end_set_flag && start_set_flag)
       {

           end_set_flag = 0;
           start_set_flag = 0;
           cv::line(img,start_node.self,end_node.self,cv::Scalar(0,0,0),3);
           qimg = Mat2QImage(img);
           ui->pic->setPixmap(QPixmap::fromImage(qimg)); // flush the pic

       }


     qDebug()<<"road.size"<<road.size();
    }


}  // :)

 ***********************************************************************************************/






/* ********************************************************************************
 *   these under codes construct a tool to save and load file , just a test part,
 *   but dont remove them .
 *
 *
 * *******************************************************************************/
 /*
 void MainWindow::on_pushButton_6_clicked()
{
    //std::vector<Road_node> roadTemp;

/*
    file_o.open("road.ini",std::ios::out);
    if(file_o.is_open())
    {

         for(int i = 0;i<road.size();i++)
    {
        qDebug()<<"writing...";
        file_o<<road[i].i;
        file_o<<"\n";
        file_o<<road[i].self.x<<"\n"<<road[i].self.y;
        file_o<<"\n";
        int tempCnt = road[i].others_id.size();
        file_o<<tempCnt;
        file_o<<"\n";
        for(int j= 0;j<tempCnt;j++)
        {
            file_o<<road[i].others_id[j];
            file_o<<"\n";
        }
    }
        file_o.close();
    }*/
/*
    file_i.open("road.txt",std::ios::in);
    if(file_i.is_open())
    {
        Road_node nr; int id;
         qDebug()<<"reading...";
         file_i>>nr.i;
         file_i>>nr.self.x>>nr.self.y;
         file_i>>id;
         nr.others_id.push_back(id);
         file_i>>id;
         nr.others_id.push_back(id);
         roadTemp.push_back(nr);

         qDebug()<<roadTemp[0].i;
         qDebug()<<roadTemp[0].self.x<<roadTemp[0].self.y;
         qDebug()<<roadTemp[0].others_id[0]<<roadTemp[0].others_id[1];

    }
*/


/*
}
*/
/*******************************************************************/






void MainWindow::on_pushButton_6_clicked()
{
    msg = new QMessageBox;
    msg->resize(500,500);

    img = imread("logo.png");
    cv::resize(img,img,cv::Size(64,64));
    qimg = Mat2QImage(img);
    QIcon *t = new QIcon(QPixmap::fromImage(qimg));
    msg->setWindowIcon(*t);

    msg->setWindowTitle(" ");

    QPalette palete(msg->palette());
    palete.setColor(QPalette::Background,Qt::white);
    msg->setPalette(palete);

    msg->setText("\n  ��лʹ�� My University !\t\t\n\n  �汾: test 1.0\t\t\n");
    msg->exec();
}
