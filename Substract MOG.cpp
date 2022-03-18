//#include <opencv2/imgcodecs.hpp>
//#include <opencv2/highgui.hpp>
//#include <opencv2/imgproc.hpp>
//#include <opencv2/objdetect.hpp>
//#include <iostream>

#include <iostream>
#include <sstream>
#include <opencv2/imgcodecs.hpp>
#include <opencv2/imgproc.hpp>
#include <opencv2/videoio.hpp>
#include <opencv2/highgui.hpp>
#include <opencv2/video.hpp>

using namespace cv;
using namespace std;

/////////////// Images //////////////////////

void main() {

	string path = "Resources/test_video.mp4";
	 VideoCapture cap(path);
	 Mat img,fgMask;

	Ptr<BackgroundSubtractor> pBackSub;
	pBackSub = createBackgroundSubtractorMOG2();
	
	 while (true) {

	 cap.read(img);
	 pBackSub->apply(img, fgMask);

	 imshow("Image", img);
	 imshow("FG Mask", fgMask);
	 cout << fgMask.type() << endl;
	 waitKey(20);
	 }

}
