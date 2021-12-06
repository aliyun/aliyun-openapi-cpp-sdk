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

#ifndef ALIBABACLOUD_ECS_MODEL_DESCRIBEINSTANCESFULLSTATUSREQUEST_H_
#define ALIBABACLOUD_ECS_MODEL_DESCRIBEINSTANCESFULLSTATUSREQUEST_H_

#include <alibabacloud/ecs/EcsExport.h>
#include <alibabacloud/core/RpcServiceRequest.h>
#include <string>
#include <vector>
#include <map>

namespace AlibabaCloud {
namespace Ecs {
namespace Model {
class ALIBABACLOUD_ECS_EXPORT DescribeInstancesFullStatusRequest : public RpcServiceRequest {
public:
	DescribeInstancesFullStatusRequest();
	~DescribeInstancesFullStatusRequest();
	std::vector<std::string> getEventId() const;
	void setEventId(const std::vector<std::string> &eventId);
	long getResourceOwnerId() const;
	void setResourceOwnerId(long resourceOwnerId);
	int getPageNumber() const;
	void setPageNumber(int pageNumber);
	std::string getRegionId() const;
	void setRegionId(const std::string &regionId);
	int getPageSize() const;
	void setPageSize(int pageSize);
	std::string getEventPublishTimeEnd() const;
	void setEventPublishTimeEnd(const std::string &eventPublishTimeEnd);
	std::vector<std::string> getInstanceEventType() const;
	void setInstanceEventType(const std::vector<std::string> &instanceEventType);
	std::string getResourceOwnerAccount() const;
	void setResourceOwnerAccount(const std::string &resourceOwnerAccount);
	std::string getOwnerAccount() const;
	void setOwnerAccount(const std::string &ownerAccount);
	std::string getNotBeforeStart() const;
	void setNotBeforeStart(const std::string &notBeforeStart);
	long getOwnerId() const;
	void setOwnerId(long ownerId);
	std::string getEventPublishTimeStart() const;
	void setEventPublishTimeStart(const std::string &eventPublishTimeStart);
	std::vector<std::string> getInstanceId() const;
	void setInstanceId(const std::vector<std::string> &instanceId);
	std::string getNotBeforeEnd() const;
	void setNotBeforeEnd(const std::string &notBeforeEnd);
	std::string getHealthStatus() const;
	void setHealthStatus(const std::string &healthStatus);
	std::string getEventType() const;
	void setEventType(const std::string &eventType);
	std::string getStatus() const;
	void setStatus(const std::string &status);

private:
	std::vector<std::string> eventId_;
	long resourceOwnerId_;
	int pageNumber_;
	std::string regionId_;
	int pageSize_;
	std::string eventPublishTimeEnd_;
	std::vector<std::string> instanceEventType_;
	std::string resourceOwnerAccount_;
	std::string ownerAccount_;
	std::string notBeforeStart_;
	long ownerId_;
	std::string eventPublishTimeStart_;
	std::vector<std::string> instanceId_;
	std::string notBeforeEnd_;
	std::string healthStatus_;
	std::string eventType_;
	std::string status_;
};
} // namespace Model
} // namespace Ecs
} // namespace AlibabaCloud
#endif // !ALIBABACLOUD_ECS_MODEL_DESCRIBEINSTANCESFULLSTATUSREQUEST_H_
