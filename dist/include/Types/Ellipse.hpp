/*!
 * \file Ellipse.hpp
 * \brief File containing Ellipse type
 *
 * \author mstefanc
 * \date 20.08.2010
 */

#ifndef ELLIPSE_HPP_
#define ELLIPSE_HPP_

#include "Drawable.hpp"

#include <cv.h>

#include <iostream>

namespace Types {

class Ellipse : public Drawable {
public:
	Ellipse(const cv::Point2f& _center, const cv::Size2f& _size, float _angle = 0.0f) : rect_(_center, _size, _angle)
	{}

    Ellipse(const CvBox2D& box) : rect_(box) {};

    Ellipse(const cv::RotatedRect & rhs) : rect_(rhs) {};

    Ellipse(const Ellipse & rhs) : rect_(rhs.rect_) {};

	virtual ~Ellipse() {}

	virtual void draw(cv::Mat & image, CvScalar color, int offsetX = 0, int offsetY = 0) {
		//cv::ellipse(image, rect_, color);
		cv::ellipse(image, cv::Point(rect_.center.x, rect_.center.y), cv::Size(rect_.size.width, rect_.size.height), rect_.angle, 0, 360, getCol(), 2);
		//cv::ellipse(image, rect_, getCol(), 2);
	}

	virtual Drawable * clone() {
		Ellipse * ret = new Ellipse(*this);
		ret->setCol(m_col);
		return ret;
	}

	/// Returns area (based on width and height, not number of pixels).
	uint32_t getArea() const {
		return rect_.size.width * rect_.size.height;
	}

/*	/// Set data basing on given rotated rectangle.
	Ellipse & operator=(const cv::RotatedRect &rhs) {
		rect_.center.x = rhs.center.x;
		rect_.center.y = rhs.center.y;
		rect_.size.width = rhs.size.width;
		rect_.size.height = rhs.size.height;
		rect_.angle = rhs.angle;
	}*/

private:
	const cv::RotatedRect rect_;
};

} //: namespace Types

#endif /* ELLIPSE_HPP_ */
