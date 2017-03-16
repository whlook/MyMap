

    int start_id = ui->comboBox->currentIndex();  // get start and end node's id /
    int end_id = ui->comboBox_2->currentIndex();

    for(int i = 0;i<road.size();i++)
    {
        road[i].vistable = 0;  // set all nodes are visitable;
    }

  //  Road_node start_node_temp,end_node_temp;  // temp node

    int road_start_i,road_end_i;
    int road_start_i_temp,road_end_i_temp;


    for(int i = 0;i<road.size();i++) // search which node is on the start/end point;
    {
        if(road[i].i == start_id)
        {
            qDebug()<<"start"<<i;
            start_node = road[i];
            road_start_i = i;  // get the id of start roadnode;
            qDebug()<<"i = "<<start_node.i;
        }
        else if(road[i].i == end_id)
        {
            qDebug()<<"end"<<i;
            end_node = road[i];
            road_end_i = i;  // get the id of end roadnode;
            qDebug()<<"i = "<<end_node.i;
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

                 qDebug()<<"pre_distance = "<<pre_distance;
                 qDebug()<<"now distance = "<<tempx+tempy;
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



        /*
    int pre_distance = 90000000;
    for(int i = 0;i<start_node_temp.others_id.size();i++)  //
    {


     int tempx,tempy;


     tempx = (road[start_node_temp.others_id[i]].self.x- end_node.self.x)*(road[start_node_temp.others_id[i]].self.x - end_node.self.x);
     tempy = (road[start_node_temp.others_id[i]].self.y- end_node.self.y)*(road[start_node_temp.others_id[i]].self.y - end_node.self.y);
     if(pre_distance<(tempx+tempy))
        {

            end_node_temp = road[start_node_temp.others_id[i-1]];

        }
     else {
            end_node_temp = road[start_node_temp.others_id[i]];
            pre_distance = tempx+tempy;
           }



    }

    cv::line(img,start_node_temp.self,end_node_temp.self,cv::Scalar(0,0,0),3);
    qimg = Mat2QImage(img);
    ui->pic->setPixmap(QPixmap::fromImage(qimg)); // flush the pic

    start_node_temp = end_node_temp;
    xx++;*/
   }


    road_temp.push_back(road_end_i_temp);
    for(int i = 0;i<road_temp.size()-1;i++)
    {

        cv::line(img,road[road_temp[i]].self,road[road_temp[i+1]].self,cv::Scalar(0,0,0),3);
        qimg = Mat2QImage(img);
        ui->pic->setPixmap(QPixmap::fromImage(qimg)); // flush the pic
    }
    qDebug()<<road_temp.size();










}