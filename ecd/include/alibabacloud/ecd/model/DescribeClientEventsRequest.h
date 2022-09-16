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

#ifndef ALIBABACLOUD_ECD_MODEL_DESCRIBECLIENTEVENTSREQUEST_H_
#define ALIBABACLOUD_ECD_MODEL_DESCRIBECLIENTEVENTSREQUEST_H_

#include <alibabacloud/ecd/EcdExport.h>
#include <alibabacloud/core/RpcServiceRequest.h>
#include <string>
#include <vector>
#include <map>

namespace AlibabaCloud {
namespace Ecd {
namespace Model {
class ALIBABACLOUD_ECD_EXPORT DescribeClientEventsRequest : public RpcServiceRequest {
public:
	DescribeClientEventsRequest();
	~DescribeClientEventsRequest();
	std::string getOfficeSiteId() const;
	void setOfficeSiteId(const std::string &officeSiteId);
	std::vector<std::string> getEventTypes() const;
	void setEventTypes(const std::vector<std::string> &eventTypes);
	std::string getStartTime() const;
	void setStartTime(const std::string &startTime);
	std::string getRegionId() const;
	void setRegionId(const std::string &regionId);
	std::string getNextToken() const;
	void setNextToken(const std::string &nextToken);
	std::string getEndUserId() const;
	void setEndUserId(const std::string &endUserId);
	std::string getDirectoryId() const;
	void setDirectoryId(const std::string &directoryId);
	std::string getDesktopId() const;
	void setDesktopId(const std::string &desktopId);
	std::string getDesktopName() const;
	void setDesktopName(const std::string &desktopName);
	std::string getEndTime() const;
	void setEndTime(const std::string &endTime);
	std::string getOfficeSiteName() const;
	void setOfficeSiteName(const std::string &officeSiteName);
	std::string getDesktopIp() const;
	void setDesktopIp(const std::string &desktopIp);
	int getMaxResults() const;
	void setMaxResults(int maxResults);
	std::string getEventType() const;
	void setEventType(const std::string &eventType);

private:
	std::string officeSiteId_;
	std::vector<std::string> eventTypes_;
	std::string startTime_;
	std::string regionId_;
	std::string nextToken_;
	std::string endUserId_;
	std::string directoryId_;
	std::string desktopId_;
	std::string desktopName_;
	std::string endTime_;
	std::string officeSiteName_;
	std::string desktopIp_;
	int maxResults_;
	std::string eventType_;
};
} // namespace Model
} // namespace Ecd
} // namespace AlibabaCloud
#endif // !ALIBABACLOUD_ECD_MODEL_DESCRIBECLIENTEVENTSREQUEST_H_
