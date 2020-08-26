//
//  main.m
//  ffmpeg4_demo
//
//  Created by tomxiang on 2020/8/13.
//  Copyright © 2020 tomxiang. All rights reserved.
//
#include <iostream>

#ifdef __cplusplus
extern "C" {
#endif
    
#include "libavformat/avformat.h"
#include "libavcodec/avcodec.h"
    
#ifdef __cplusplus
}
#endif

int decodeStream(const char *url) {
    int ret;
    AVFormatContext *ifmtCtx = NULL;
    if ((ret = avformat_open_input(&ifmtCtx,url, NULL, NULL)) < 0) {
        av_log(NULL, AV_LOG_ERROR, "Cannot openinput file\n");
        return ret;
    }
    if ((ret = avformat_find_stream_info(ifmtCtx, NULL))< 0) {
        av_log(NULL, AV_LOG_ERROR, "Cannot findstream information\n");
        return ret;
    }
    
    return 0;
}

int main(int argc, const char * argv[]) {
        // insert code here...
    decodeStream("xxx");
    
    return 0;
}
