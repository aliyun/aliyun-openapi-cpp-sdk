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

#ifndef ALIBABACLOUD_CMS_MODEL_DESCRIBESYSTEMEVENTHISTOGRAMREQUEST_H_
#define ALIBABACLOUD_CMS_MODEL_DESCRIBESYSTEMEVENTHISTOGRAMREQUEST_H_

#include <alibabacloud/cms/CmsExport.h>
#include <alibabacloud/core/RpcServiceRequest.h>
#include <string>
#include <vector>
#include <map>

namespace AlibabaCloud {
namespace Cms {
namespace Model {
class ALIBABACLOUD_CMS_EXPORT DescribeSystemEventHistogramRequest : public RpcServiceRequest {
public:
	DescribeSystemEventHistogramRequest();
	~DescribeSystemEventHistogramRequest();
	std::string getStartTime() const;
	void setStartTime(const std::string &startTime);
	std::string getSearchKeywords() const;
	void setSearchKeywords(const std::string &searchKeywords);
	std::string getProduct() const;
	void setProduct(const std::string &product);
	std::string getLevel() const;
	void setLevel(const std::string &level);
	std::string getGroupId() const;
	void setGroupId(const std::string &groupId);
	std::string getEndTime() const;
	void setEndTime(const std::string &endTime);
	std::string getName() const;
	void setName(const std::string &name);
	std::string getEventType() const;
	void setEventType(const std::string &eventType);
	std::string getStatus() const;
	void setStatus(const std::string &status);

private:
	std::string startTime_;
	std::string searchKeywords_;
	std::string product_;
	std::string level_;
	std::string groupId_;
	std::string endTime_;
	std::string name_;
	std::string eventType_;
	std::string status_;
};
} // namespace Model
} // namespace Cms
} // namespace AlibabaCloud
#endif // !ALIBABACLOUD_CMS_MODEL_DESCRIBESYSTEMEVENTHISTOGRAMREQUEST_H_
