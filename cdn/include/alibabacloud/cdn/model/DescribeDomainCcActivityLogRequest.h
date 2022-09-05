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

#ifndef ALIBABACLOUD_CDN_MODEL_DESCRIBEDOMAINCCACTIVITYLOGREQUEST_H_
#define ALIBABACLOUD_CDN_MODEL_DESCRIBEDOMAINCCACTIVITYLOGREQUEST_H_

#include <alibabacloud/cdn/CdnExport.h>
#include <alibabacloud/core/RpcServiceRequest.h>
#include <string>
#include <vector>
#include <map>

namespace AlibabaCloud {
namespace Cdn {
namespace Model {
class ALIBABACLOUD_CDN_EXPORT DescribeDomainCcActivityLogRequest : public RpcServiceRequest {
public:
	DescribeDomainCcActivityLogRequest();
	~DescribeDomainCcActivityLogRequest();
	std::string getRuleName() const;
	void setRuleName(const std::string &ruleName);
	std::string getStartTime() const;
	void setStartTime(const std::string &startTime);
	std::string getTriggerObject() const;
	void setTriggerObject(const std::string &triggerObject);
	long getPageNumber() const;
	void setPageNumber(long pageNumber);
	long getPageSize() const;
	void setPageSize(long pageSize);
	std::string getValue() const;
	void setValue(const std::string &value);
	std::string getDomainName() const;
	void setDomainName(const std::string &domainName);
	std::string getEndTime() const;
	void setEndTime(const std::string &endTime);
	long getOwnerId() const;
	void setOwnerId(long ownerId);

private:
	std::string ruleName_;
	std::string startTime_;
	std::string triggerObject_;
	long pageNumber_;
	long pageSize_;
	std::string value_;
	std::string domainName_;
	std::string endTime_;
	long ownerId_;
};
} // namespace Model
} // namespace Cdn
} // namespace AlibabaCloud
#endif // !ALIBABACLOUD_CDN_MODEL_DESCRIBEDOMAINCCACTIVITYLOGREQUEST_H_
