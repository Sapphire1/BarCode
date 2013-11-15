/*
 * MatrixTranslator.hpp
 *
 *  Created on: Dec 15, 2012
 *      Author: maciej
 */

#ifndef MATRIXTRANSLATOR_HPP_
#define MATRIXTRANSLATOR_HPP_

#include <opencv2/core/core.hpp>

#include <vector>
#include <string>

#include <boost/lexical_cast.hpp>
#include <boost/algorithm/string.hpp>

namespace Types {

class MatrixTranslator {
public:
    static cv::Mat fromStr(const std::string & s) {
        std::vector<double> values;

        typedef std::vector< std::string > split_vector_type;

        split_vector_type rows; // #2: Search for tokens
        boost::split( rows, s, boost::is_any_of(";"), boost::token_compress_on );

        std::vector<split_vector_type> mat;
        mat.resize(rows.size());
        for (int i = 0; i < rows.size(); ++i) {
                boost::trim( rows[i] );
                boost::split( mat[i], rows[i], boost::is_any_of(" ,"), boost::token_compress_on );
        }

        int r = rows.size();
        int c = mat[0].size();

        cv::Mat ret(r, c, CV_32FC1);
        for (int rr = 0; rr < r; ++rr) {
                for (int cc = 0; cc < c; ++cc) {
                        ret.at<float>(rr, cc) = boost::lexical_cast<float>(mat[rr][cc]);
                }
        }

        return ret;
    }

    static std::string toStr(cv::Mat m) {
            std::stringstream ss;
            std::string delim = "";
        for(int r = 0; r < m.rows; ++r) {
                ss << delim;
                for(int c = 0; c < m.cols; ++c) {
                        ss << m.at<float>(r, c) << " ";
                }
                delim = ";";
        }

        return ss.str();
    }
};

}

#endif /* MATRIXTRANSLATOR_HPP_ */