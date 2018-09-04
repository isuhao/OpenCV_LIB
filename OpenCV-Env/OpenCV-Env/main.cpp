//
//  main.cpp
//  OpenCV-Env
//
//  Created by charles on 2018/9/4.
//  Copyright © 2018年 lizhonghuan. All rights reserved.
//

#include <iostream>
#include <opencv2/opencv.hpp>

using namespace cv;

void help(char** argv ) {
    std::cout << "\n"
    << "A simple OpenCV program that loads and displays an image from disk\n"
    << argv[0] <<" <path/filename>\n"
    << "For example:\n"
    << argv[0] << " ../fruits.jpg\n"
    << std::endl;
}


int main( int argc, char** argv ) {
    
    std::cout << "argc:" << argc << std::endl;
    std::cout << "argv:" << argv[0] << std::endl;
    
    
    if (argc != 2) {
        help(argv);
        return 0;
    }
    
    cv::Mat img = cv::imread( argv[1], -1 );
    
    if( img.empty() ) return -1;
    
    cv::namedWindow( "Example 2-1", cv::WINDOW_AUTOSIZE );
    cv::imshow( "Example 2-1", img);
    cv::waitKey( 0 );
    cv::destroyWindow( "Example 2-1" );
    
    return 0;
}

