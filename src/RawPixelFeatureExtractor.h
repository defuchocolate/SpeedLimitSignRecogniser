/*
 * RawPixelFeatureExtractor.h
 *
 *  Created on: 2015. okt. 3.
 *      Author: �kos
 */

#ifndef RAWPIXELFEATUREEXTRACTOR_H_
#define RAWPIXELFEATUREEXTRACTOR_H_

#include "IFeatureExtractor.h"

namespace slsr {

class RawPixelFeatureExtractor: public IFeatureExtractor {
public:
	RawPixelFeatureExtractor();
	virtual ~RawPixelFeatureExtractor();
	virtual std::vector<float> extractFeatures(cv::Mat source) override;

	bool isConvertToGrayPixles() const {
		return m_convertToGrayPixles;
	}

	void setConvertToGrayPixles(bool convertToGrayPixles) {
		m_convertToGrayPixles = convertToGrayPixles;
	}

private:
	bool m_convertToGrayPixles;
};

} /* namespace slsr */

#endif /* RAWPIXELFEATUREEXTRACTOR_H_ */
