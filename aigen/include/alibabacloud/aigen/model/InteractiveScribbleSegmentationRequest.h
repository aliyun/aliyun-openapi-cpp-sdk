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

#ifndef ALIBABACLOUD_AIGEN_MODEL_INTERACTIVESCRIBBLESEGMENTATIONREQUEST_H_
#define ALIBABACLOUD_AIGEN_MODEL_INTERACTIVESCRIBBLESEGMENTATIONREQUEST_H_

#include <alibabacloud/aigen/AigenExport.h>
#include <alibabacloud/core/RpcServiceRequest.h>
#include <string>
#include <vector>
#include <map>

namespace AlibabaCloud {
namespace Aigen {
namespace Model {
class ALIBABACLOUD_AIGEN_EXPORT InteractiveScribbleSegmentationRequest : public RpcServiceRequest {
public:
	InteractiveScribbleSegmentationRequest();
	~InteractiveScribbleSegmentationRequest();
	std::string getPosScribbleImageUrl() const;
	void setPosScribbleImageUrl(const std::string &posScribbleImageUrl);
	std::string getIntegratedMaskUrl() const;
	void setIntegratedMaskUrl(const std::string &integratedMaskUrl);
	std::string getMaskImageUrl() const;
	void setMaskImageUrl(const std::string &maskImageUrl);
	std::string getReturnForm() const;
	void setReturnForm(const std::string &returnForm);
	std::string getNegScribbleImageUrl() const;
	void setNegScribbleImageUrl(const std::string &negScribbleImageUrl);
	std::string getReturnFormat() const;
	void setReturnFormat(const std::string &returnFormat);
	std::string getEdgeFeathering() const;
	void setEdgeFeathering(const std::string &edgeFeathering);
	std::string getImageUrl() const;
	void setImageUrl(const std::string &imageUrl);
	std::string getPostprocessOption() const;
	void setPostprocessOption(const std::string &postprocessOption);

private:
	std::string posScribbleImageUrl_;
	std::string integratedMaskUrl_;
	std::string maskImageUrl_;
	std::string returnForm_;
	std::string negScribbleImageUrl_;
	std::string returnFormat_;
	std::string edgeFeathering_;
	std::string imageUrl_;
	std::string postprocessOption_;
};
} // namespace Model
} // namespace Aigen
} // namespace AlibabaCloud
#endif // !ALIBABACLOUD_AIGEN_MODEL_INTERACTIVESCRIBBLESEGMENTATIONREQUEST_H_
