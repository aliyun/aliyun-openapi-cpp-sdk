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

#ifndef ALIBABACLOUD_DCDN_MODEL_DESCRIBEDCDNDOMAINCCACTIVITYLOGREQUEST_H_
#define ALIBABACLOUD_DCDN_MODEL_DESCRIBEDCDNDOMAINCCACTIVITYLOGREQUEST_H_

#include <alibabacloud/dcdn/DcdnExport.h>
#include <alibabacloud/core/RpcServiceRequest.h>
#include <string>
#include <vector>
#include <map>

namespace AlibabaCloud {
namespace Dcdn {
namespace Model {
class ALIBABACLOUD_DCDN_EXPORT DescribeDcdnDomainCcActivityLogRequest : public RpcServiceRequest {
public:
	DescribeDcdnDomainCcActivityLogRequest();
	~DescribeDcdnDomainCcActivityLogRequest();
	std::string getDomainName() const;
	void setDomainName(const std::string &domainName);
	long getPageSize() const;
	void setPageSize(long pageSize);
	std::string getEndTime() const;
	void setEndTime(const std::string &endTime);
	std::string getRuleName() const;
	void setRuleName(const std::string &ruleName);
	std::string getStartTime() const;
	void setStartTime(const std::string &startTime);
	std::string getTriggerObject() const;
	void setTriggerObject(const std::string &triggerObject);
	std::string getValue() const;
	void setValue(const std::string &value);
	long getPageNumber() const;
	void setPageNumber(long pageNumber);

private:
	std::string domainName_;
	long pageSize_;
	std::string endTime_;
	std::string ruleName_;
	std::string startTime_;
	std::string triggerObject_;
	std::string value_;
	long pageNumber_;
};
} // namespace Model
} // namespace Dcdn
} // namespace AlibabaCloud
#endif // !ALIBABACLOUD_DCDN_MODEL_DESCRIBEDCDNDOMAINCCACTIVITYLOGREQUEST_H_
