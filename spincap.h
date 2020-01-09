#ifndef spincap_H
#define spincap_H
#include "spinnaker/Spinnaker.h"
#include "spinnaker/SpinGenApi/SpinnakerGenApi.h"
#include <iostream>
#include <sstream>
#include "SpinVideo.h"
#include "SpinVideoDefs.h"

#include <opencv2/core/core.hpp>
#include <opencv2/highgui/highgui.hpp>
#include <opencv/cv.hpp>
#include <QDebug>
#include "opencv2/opencv.hpp"
#include "opencv2/videoio.hpp"
#include "opencv2/video/background_segm.hpp"
#include <QObject>

using namespace Spinnaker;
using namespace Spinnaker::GenApi;
using namespace Spinnaker::GenICam;
using namespace Spinnaker::Video;
using namespace std;
using namespace cv;

class spincap : public QObject
{
    Q_OBJECT
public:
    spincap(QObject *parent = 0);
    //int printDeviceInfo(INodeMap &nodeMap, unsigned int camList);
   // int ConfigureCustomImageSettings(INodeMap & nodeMap);
   // int SaveVectorToVideo(INodeMap & nodeMap, INodeMap & nodeMapTLDevice, vector<ImagePtr> & images);
    //int acquireImages(CameraList camList);
    bool isInitialized = false;
    unsigned int width = 0;
    unsigned int height = 0;
    float exposureTime = 0;
    int64_t pixelFormat; //PixelFormat_BGR8
   // SpinVideo video;
    ~spincap();
private:
    CameraPtr pCam;
    INodeMap* nodeMapTLDevice;
    INodeMap* nodeMap;
    SystemPtr system;
    CameraList camList;
   // SpinVideo Video;

signals:
    void sendFrame(cv::Mat);
public slots:
    //int configureExposure(double exposureTimeToSet,INodeMap nodeMap);
    //int acquireImages(unsigned int nImagesToCapture);
    //int acquireImages(CameraList camList);
};

#endif // spincap_H
