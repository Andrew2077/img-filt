#ifndef FOURIER_TRANSFORM_H
#define FOURIER_TRANSFORM_H
#include "opencv2/core.hpp"
#include "opencv2/imgproc.hpp"
#include "opencv2/imgcodecs.hpp"
#include "opencv2/highgui.hpp"
#include <array>

cv::Mat convertToFourier(const cv::Mat& I);
cv::Mat adjustSize(const cv::Mat& I);
cv::Mat constructComplexNumbers(const cv::Mat planes[]);
cv::Mat prepareMagnitude(const cv::Mat planes[]);
std::array<cv::Mat,4> makeQuarters(const cv::Mat& magI);
std::array<cv::Mat,4> reArrangeQuarters(const std::array<cv::Mat,4>& quarters);
cv::Mat prepMatForConverting(const cv::Mat& src);
#endif // FOURIER_TRANSFORM_H
