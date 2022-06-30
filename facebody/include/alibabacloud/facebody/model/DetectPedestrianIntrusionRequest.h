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

#ifndef ALIBABACLOUD_FACEBODY_MODEL_DETECTPEDESTRIANINTRUSIONREQUEST_H_
#define ALIBABACLOUD_FACEBODY_MODEL_DETECTPEDESTRIANINTRUSIONREQUEST_H_

#include <alibabacloud/facebody/FacebodyExport.h>
#include <alibabacloud/core/RpcServiceRequest.h>
#include <string>
#include <vector>
#include <map>

namespace AlibabaCloud {
namespace Facebody {
namespace Model {
class ALIBABACLOUD_FACEBODY_EXPORT DetectPedestrianIntrusionRequest : public RpcServiceRequest {
public:
	struct DetectRegion {
		struct Rect {
			long top;
			long left;
			long bottom;
			long right;
		};
		Rect rect;
		struct Line {
			long y1;
			long x1;
			long y2;
			long x2;
		};
		Line line;
	};
	DetectPedestrianIntrusionRequest();
	~DetectPedestrianIntrusionRequest();
	std::vector<DetectRegion> getDetectRegion() const;
	void setDetectRegion(const std::vector<DetectRegion> &detectRegion);
	std::string getRegionType() const;
	void setRegionType(const std::string &regionType);
	bool getFormatResultToJson() const;
	void setFormatResultToJson(bool formatResultToJson);
	std::string getOssFile() const;
	void setOssFile(const std::string &ossFile);
	std::string getRequestProxyBy() const;
	void setRequestProxyBy(const std::string &requestProxyBy);
	std::string getImageURL() const;
	void setImageURL(const std::string &imageURL);

private:
	std::vector<DetectRegion> detectRegion_;
	std::string regionType_;
	bool formatResultToJson_;
	std::string ossFile_;
	std::string requestProxyBy_;
	std::string imageURL_;
};
} // namespace Model
} // namespace Facebody
} // namespace AlibabaCloud
#endif // !ALIBABACLOUD_FACEBODY_MODEL_DETECTPEDESTRIANINTRUSIONREQUEST_H_
