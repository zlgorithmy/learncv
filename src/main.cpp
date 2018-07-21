#include "iostream"
#include <opencv2/opencv.hpp>
using namespace std;
using namespace cv;

int main()
{
    Mat img = imread("build/tst.jpg");
    if (img.empty())
    {
        cout << "Error" << endl;
        return -1;
    }
    imshow("Lena", img);
    waitKey();
    return 0;
}