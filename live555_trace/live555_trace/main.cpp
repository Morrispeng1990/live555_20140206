//
//  main.cpp
//  live555_trace
//
//  Created by albert on 2014/6/23.
//  Copyright (c) 2014年 albert. All rights reserved.
//

#include <iostream>
#include "MyRTSPClient.h"

int main(int argc, const char * argv[])
{
    myRTSPClient((char *)"RTSPClient by albert", (char *)"rtsp://192.168.82.71:8554/audioback");
    
    //myRTSPServer();
    return 0;
}

