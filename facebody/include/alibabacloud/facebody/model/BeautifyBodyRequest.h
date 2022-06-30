/*
 * Copyright 2009-2017 Alibaba Cloud All rights reserved.
 *
 * Licensed under the Apache License, Version 2.0 (the "License");
 * you may not use this file except in compliance with the License.
 * You may obtain a copy of the License at
 *
 *      http://www.apache.org/licenses/LICENSE-2.0
 *
 * Unless required by applicable law or agreed to in writing, software
 * distributed under the License is distributed on an "AS IS" BASIS,
 * WITHOUT WARRANTIES OR CONDITIONS OF ANY KIND, either express or implied.
 * See the License for the specific language governing permissions and
 * limitations under the License.
 */

#ifndef ALIBABACLOUD_FACEBODY_MODEL_BEAUTIFYBODYREQUEST_H_
#define ALIBABACLOUD_FACEBODY_MODEL_BEAUTIFYBODYREQUEST_H_

#include <alibabacloud/facebody/FacebodyExport.h>
#include <alibabacloud/core/RpcServiceRequest.h>
#include <string>
#include <vector>
#include <map>

namespace AlibabaCloud {
namespace Facebody {
namespace Model {
class ALIBABACLOUD_FACEBODY_EXPORT BeautifyBodyRequest : public RpcServiceRequest {
public:
	struct BodyBoxes {
		float x;
		float width;
		float y;
		float height;
	};
	struct FaceList {
		long gender;
		struct FaceBox {
			float x;
			float width;
			float y;
			float height;
		};
		FaceBox faceBox;
		long age;
	};
	struct AgeRange {
		long ageMax;
		long ageMinimum;
	};
	struct PoseList {
		struct PoseItem {
			float score;
			long x;
			long y;
		};
		PoseItem poseItem;
		std::vector<PoseItem> pose;
	};
	BeautifyBodyRequest();
	~BeautifyBodyRequest();
	std::vector<BodyBoxes> getBodyBoxes() const;
	void setBodyBoxes(const std::vector<BodyBoxes> &bodyBoxes);
	float getLengthenDegree() const;
	void setLengthenDegree(float lengthenDegree);
	float getMaleLiquifyDegree() const;
	void setMaleLiquifyDegree(float maleLiquifyDegree);
	bool getFormatResultToJson() const;
	void setFormatResultToJson(bool formatResultToJson);
	long getOriginalWidth() const;
	void setOriginalWidth(long originalWidth);
	bool getIsPregnant() const;
	void setIsPregnant(bool isPregnant);
	std::vector<FaceList> getFaceList() const;
	void setFaceList(const std::vector<FaceList> &faceList);
	std::string getOssFile() const;
	void setOssFile(const std::string &ossFile);
	AgeRange getAgeRange() const;
	void setAgeRange(const AgeRange &ageRange);
	long getCustom() const;
	void setCustom(long custom);
	std::string getRequestProxyBy() const;
	void setRequestProxyBy(const std::string &requestProxyBy);
	long getOriginalHeight() const;
	void setOriginalHeight(long originalHeight);
	std::string getImageURL() const;
	void setImageURL(const std::string &imageURL);
	float getFemaleLiquifyDegree() const;
	void setFemaleLiquifyDegree(float femaleLiquifyDegree);
	std::vector<PoseList> getPoseList() const;
	void setPoseList(const std::vector<PoseList> &poseList);

private:
	std::vector<BodyBoxes> bodyBoxes_;
	float lengthenDegree_;
	float maleLiquifyDegree_;
	bool formatResultToJson_;
	long originalWidth_;
	bool isPregnant_;
	std::vector<FaceList> faceList_;
	std::string ossFile_;
	AgeRange ageRange_;
	long custom_;
	std::string requestProxyBy_;
	long originalHeight_;
	std::string imageURL_;
	float femaleLiquifyDegree_;
	std::vector<PoseList> poseList_;
};
} // namespace Model
} // namespace Facebody
} // namespace AlibabaCloud
#endif // !ALIBABACLOUD_FACEBODY_MODEL_BEAUTIFYBODYREQUEST_H_
