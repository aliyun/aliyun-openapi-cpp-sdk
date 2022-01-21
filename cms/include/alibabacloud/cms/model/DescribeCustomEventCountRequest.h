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

#ifndef ALIBABACLOUD_CMS_MODEL_DESCRIBECUSTOMEVENTCOUNTREQUEST_H_
#define ALIBABACLOUD_CMS_MODEL_DESCRIBECUSTOMEVENTCOUNTREQUEST_H_

#include <alibabacloud/cms/CmsExport.h>
#include <alibabacloud/core/RpcServiceRequest.h>
#include <string>
#include <vector>
#include <map>

namespace AlibabaCloud {
namespace Cms {
namespace Model {
class ALIBABACLOUD_CMS_EXPORT DescribeCustomEventCountRequest : public RpcServiceRequest {
public:
	DescribeCustomEventCountRequest();
	~DescribeCustomEventCountRequest();
	std::string getEventId() const;
	void setEventId(const std::string &eventId);
	std::string getGroupId() const;
	void setGroupId(const std::string &groupId);
	std::string getEndTime() const;
	void setEndTime(const std::string &endTime);
	std::string getStartTime() const;
	void setStartTime(const std::string &startTime);
	std::string getSearchKeywords() const;
	void setSearchKeywords(const std::string &searchKeywords);
	std::string getName() const;
	void setName(const std::string &name);

private:
	std::string eventId_;
	std::string groupId_;
	std::string endTime_;
	std::string startTime_;
	std::string searchKeywords_;
	std::string name_;
};
} // namespace Model
} // namespace Cms
} // namespace AlibabaCloud
#endif // !ALIBABACLOUD_CMS_MODEL_DESCRIBECUSTOMEVENTCOUNTREQUEST_H_
