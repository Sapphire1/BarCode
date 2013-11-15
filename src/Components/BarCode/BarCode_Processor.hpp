/*!
 * \file BarCode_Processor.hpp
 * \brief
 * \author lzmuda
 * \date 2013-11-15
 */

#ifndef BARCODE_PROCESSOR_HPP_
#define BARCODE_PROCESSOR_HPP_

#include "Component_Aux.hpp"
#include "Component.hpp"
#include "DataStream.hpp"
#include "Property.hpp"

#include <opencv2/core/core.hpp>
#include <opencv2/imgproc/imgproc.hpp>
#include <opencv2/highgui/highgui.hpp>

/**
 * \defgroup BarCode BarCode
 * \ingroup Processors
 *
 * Applies a fixed-level threshold to each array element
 *
 *
 *
 * \par Data streams:
 *
 * \streamin{in_img,cv::Mat}
 * Input image
 * \streamout{out_img_N,cv::Mat}
 * Output images, where N is channel number, counting from 0
 *
 *
 * \par Events:
 *
 * \event{newImage}
 * Image split
 *
 *
 * \par Event handlers:
 *
 * \handler{onNewImage}
 * New image arrived
 *
 *
 * \par Properties:
 *
 * \prop{type,string,"binary"}
 * Thresholding type:
 * - THRESH_BINARY
 * - THRESH_BINARY_INV
 * - THRESH_TRUNC
 * - THRESH_TOZERO
 * - THRESH_TOZERO_INV
 * \prop{maxval,double,1.0}
 * Maximum value to use with THRESH_BINARY and THRESH_BINARY_INV thresholding types
 * \prop{thresh,double,0.5}
 * Threshold value
 *
 * \see http://opencv.willowgarage.com/documentation/cpp/miscellaneous_image_transformations.html#threshold
 * @{
 *
 * @}
 */

namespace Processors {
namespace BarCode {

using namespace cv;

/*!
 * \class ThresholdTranslator
 * \brief Translates between the OpenCV enums and their names (string).
 */
class ThresholdTranslator {
public:
	static int fromStr(const std::string & s)
	{
		if (s == "BINARY")
			return THRESH_BINARY;
		else if (s == "BINARY_INV")
			return THRESH_BINARY_INV;
		else if (s == "TRUNC")
			return THRESH_TRUNC;
		else if (s == "TOZERO")
			return THRESH_TOZERO;
		else if (s == "TOZERO_INV")
			return THRESH_TOZERO_INV;
		else
			return THRESH_BINARY;
	}

	static std::string toStr(int t)
	{
		switch (t)
		{
			case THRESH_BINARY:
				return "BINARY";
			case THRESH_BINARY_INV:
				return "BINARY_INV";
			case THRESH_TRUNC:
				return "TRUNC";
			case THRESH_TOZERO:
				return "TOZERO";
			case THRESH_TOZERO_INV:
				return "TOZERO_INV";
			default:
				return "BINARY";
		}
	}
};

/*!
 * \class BarCode_Processor
 * \brief Example processor class.
 */
class BarCode_Processor: public Base::Component
{
public:
	/*!
	 * Constructor.
	 */
	BarCode_Processor(const std::string & name = "");

	/*!
	 * Destructor
	 */
	virtual ~BarCode_Processor();

	/*!
	 * Prepares communication interface.
	 */
	virtual void prepareInterface();

protected:

	/*!
	 * Connects source to given device.
	 */
	bool onInit();

	/*!
	 * Disconnect source from device, closes streams, etc.
	 */
	bool onFinish();

	/*!
	 * Retrieves data from device.
	 */
	bool onStep();

	/*!
	 * Start component
	 */
	bool onStart();

	/*!
	 * Stop component
	 */
	bool onStop();


	/*!
	 * Event handler function.
	 */
	void onNewImage();

	/// Event handler.
	Base::EventHandler <BarCode_Processor> h_onNewImage;

	/// Input data stream
	Base::DataStreamIn <cv::Mat> in_img;

	/// Output data stream - processed image
	Base::DataStreamOut <Mat> out_img;

private:
	/// Type of the performed thresholding operation.
	Base::Property<int, ThresholdTranslator> m_type;

	Base::Property<double> m_thresh;
	Base::Property<double> m_maxval;
};

}//: namespace BarCode
}//: namespace Processors


/*
 * Register processor component.
 */
REGISTER_COMPONENT("BarCode", Processors::BarCode::BarCode_Processor)

#endif /* BARCODE_PROCESSOR_HPP_ */

