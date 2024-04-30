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

#ifndef ALIBABACLOUD_RDS_MODEL_DESCRIBEHISTORYEVENTSREQUEST_H_
#define ALIBABACLOUD_RDS_MODEL_DESCRIBEHISTORYEVENTSREQUEST_H_

#include <alibabacloud/rds/RdsExport.h>
#include <alibabacloud/core/RpcServiceRequest.h>
#include <string>
#include <vector>
#include <map>

namespace AlibabaCloud {
namespace Rds {
namespace Model {
class ALIBABACLOUD_RDS_EXPORT DescribeHistoryEventsRequest : public RpcServiceRequest {
public:
	DescribeHistoryEventsRequest();
	~DescribeHistoryEventsRequest();
	std::string getEventId() const;
	void setEventId(const std::string &eventId);
	std::string getToStartTime() const;
	void setToStartTime(const std::string &toStartTime);
	int getPageNumber() const;
	void setPageNumber(int pageNumber);
	std::string getAccessKeyId() const;
	void setAccessKeyId(const std::string &accessKeyId);
	std::string getResourceGroupId() const;
	void setResourceGroupId(const std::string &resourceGroupId);
	std::string getSecurityToken() const;
	void setSecurityToken(const std::string &securityToken);
	std::string getRegionId() const;
	void setRegionId(const std::string &regionId);
	int getPageSize() const;
	void setPageSize(int pageSize);
	std::string getTaskId() const;
	void setTaskId(const std::string &taskId);
	std::string getFromStartTime() const;
	void setFromStartTime(const std::string &fromStartTime);
	std::string getResourceType() const;
	void setResourceType(const std::string &resourceType);
	std::string getArchiveStatus() const;
	void setArchiveStatus(const std::string &archiveStatus);
	std::string getInstanceId() const;
	void setInstanceId(const std::string &instanceId);
	std::string getEventLevel() const;
	void setEventLevel(const std::string &eventLevel);
	std::string getEventCategory() const;
	void setEventCategory(const std::string &eventCategory);
	std::string getEventType() const;
	void setEventType(const std::string &eventType);
	std::string getEventStatus() const;
	void setEventStatus(const std::string &eventStatus);

private:
	std::string eventId_;
	std::string toStartTime_;
	int pageNumber_;
	std::string accessKeyId_;
	std::string resourceGroupId_;
	std::string securityToken_;
	std::string regionId_;
	int pageSize_;
	std::string taskId_;
	std::string fromStartTime_;
	std::string resourceType_;
	std::string archiveStatus_;
	std::string instanceId_;
	std::string eventLevel_;
	std::string eventCategory_;
	std::string eventType_;
	std::string eventStatus_;
};
} // namespace Model
} // namespace Rds
} // namespace AlibabaCloud
#endif // !ALIBABACLOUD_RDS_MODEL_DESCRIBEHISTORYEVENTSREQUEST_H_
