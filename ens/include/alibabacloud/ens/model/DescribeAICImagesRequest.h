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

#ifndef ALIBABACLOUD_ENS_MODEL_DESCRIBEAICIMAGESREQUEST_H_
#define ALIBABACLOUD_ENS_MODEL_DESCRIBEAICIMAGESREQUEST_H_

#include <alibabacloud/ens/EnsExport.h>
#include <alibabacloud/core/RpcServiceRequest.h>
#include <string>
#include <vector>
#include <map>

namespace AlibabaCloud {
namespace Ens {
namespace Model {
class ALIBABACLOUD_ENS_EXPORT DescribeAICImagesRequest : public RpcServiceRequest {
public:
	DescribeAICImagesRequest();
	~DescribeAICImagesRequest();
	std::string getImageType() const;
	void setImageType(const std::string &imageType);
	std::string getStatus() const;
	void setStatus(const std::string &status);
	std::string getImageId() const;
	void setImageId(const std::string &imageId);
	std::string getMaxDate() const;
	void setMaxDate(const std::string &maxDate);
	std::string getDescription() const;
	void setDescription(const std::string &description);
	std::string getPageNumber() const;
	void setPageNumber(const std::string &pageNumber);
	std::string getPageSize() const;
	void setPageSize(const std::string &pageSize);
	std::string getMinDate() const;
	void setMinDate(const std::string &minDate);
	std::string getImageUrl() const;
	void setImageUrl(const std::string &imageUrl);

private:
	std::string imageType_;
	std::string status_;
	std::string imageId_;
	std::string maxDate_;
	std::string description_;
	std::string pageNumber_;
	std::string pageSize_;
	std::string minDate_;
	std::string imageUrl_;
};
} // namespace Model
} // namespace Ens
} // namespace AlibabaCloud
#endif // !ALIBABACLOUD_ENS_MODEL_DESCRIBEAICIMAGESREQUEST_H_
