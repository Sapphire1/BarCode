/*!
 * \file BarCode_Processor.cpp
 * \brief
 * \author lzmuda
 * \date 2013-11-15
 */

#include <memory>
#include <string>

#include "BarCode_Processor.hpp"
#include "Logger.hpp"

namespace Processors {
namespace BarCode {

BarCode_Processor::BarCode_Processor(const std::string & name) : Base::Component(name),
		m_type("type", CV_THRESH_BINARY, "combo"),
		m_thresh("thresh", 128, "range"),
		m_maxval("maxval", 255, "range")
{
	LOG(LTRACE) << "Hello BarCode_Processor\n";

	m_type.setToolTip("Thresholding type");
	m_type.addConstraint("BINARY");
	m_type.addConstraint("BINARY_INV");
	m_type.addConstraint("TRUNC");
	m_type.addConstraint("TOZERO");
	m_type.addConstraint("TOZERO_INV");

	m_thresh.setToolTip("Threshold level");
	m_thresh.addConstraint("0");
	m_thresh.addConstraint("255");

	m_maxval.setToolTip("Maximum value to use with BINARY and BINARY_INV thresholding types");
	m_maxval.addConstraint("0");
	m_maxval.addConstraint("255");

	// Register properties.
	registerProperty(m_type);
	registerProperty(m_thresh);
	registerProperty(m_maxval);
}

BarCode_Processor::~BarCode_Processor()
{
	LOG(LTRACE) << "Good bye BarCode_Processor\n";
}


void BarCode_Processor::prepareInterface() {
	CLOG(LTRACE) << "BarCode_Processor::prepareInterface\n";

	h_onNewImage.setup(this, &BarCode_Processor::onNewImage);
	registerHandler("onNewImage", &h_onNewImage);

	registerStream("in_img", &in_img);

	registerStream("out_img", &out_img);

	addDependency("onNewImage", &in_img);
}

bool BarCode_Processor::onInit()
{
	LOG(LTRACE) << "BarCode_Processor::initialize\n";

	return true;
}

bool BarCode_Processor::onFinish()
{
	LOG(LTRACE) << "BarCode_Processor::finish\n";

	return true;
}

bool BarCode_Processor::onStep()
{
	LOG(LTRACE) << "BarCode_Processor::step\n";
	return true;
}

bool BarCode_Processor::onStop()
{
	return true;
}

bool BarCode_Processor::onStart()
{
	return true;
}

void BarCode_Processor::onNewImage()
{
	LOG(LNOTICE) << "CvThreshold_Processor::onNewImage\n";
	try {
		cv::Mat img = in_img.read();
		cv::Mat out = img.clone();
		LOG(LTRACE) << "Threshold " << m_thresh;
		cv::threshold(img, out, m_thresh, m_maxval, m_type);
		out_img.write(out);
	} catch (...) {
		LOG(LERROR) << "BarCode::onNewImage failed\n";
	}
}

}//: namespace BarCode
} //: namespace Processors
