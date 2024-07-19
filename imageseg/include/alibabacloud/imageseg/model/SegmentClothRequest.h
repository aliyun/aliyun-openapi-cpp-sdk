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

#ifndef ALIBABACLOUD_IMAGESEG_MODEL_SEGMENTCLOTHREQUEST_H_
#define ALIBABACLOUD_IMAGESEG_MODEL_SEGMENTCLOTHREQUEST_H_

#include <alibabacloud/imageseg/ImagesegExport.h>
#include <alibabacloud/core/RpcServiceRequest.h>
#include <string>
#include <vector>
#include <map>

namespace AlibabaCloud {
namespace Imageseg {
namespace Model {
class ALIBABACLOUD_IMAGESEG_EXPORT SegmentClothRequest : public RpcServiceRequest {
public:
	SegmentClothRequest();
	~SegmentClothRequest();
	std::vector<std::string> getClothClass() const;
	void setClothClass(const std::vector<std::string> &clothClass);
	std::string getReturnForm() const;
	void setReturnForm(const std::string &returnForm);
	std::string getOssFile() const;
	void setOssFile(const std::string &ossFile);
	long getOutMode() const;
	void setOutMode(long outMode);
	std::string getRequestProxyBy() const;
	void setRequestProxyBy(const std::string &requestProxyBy);
	std::string getImageURL() const;
	void setImageURL(const std::string &imageURL);

private:
	std::vector<std::string> clothClass_;
	std::string returnForm_;
	std::string ossFile_;
	long outMode_;
	std::string requestProxyBy_;
	std::string imageURL_;
};
} // namespace Model
} // namespace Imageseg
} // namespace AlibabaCloud
#endif // !ALIBABACLOUD_IMAGESEG_MODEL_SEGMENTCLOTHREQUEST_H_
