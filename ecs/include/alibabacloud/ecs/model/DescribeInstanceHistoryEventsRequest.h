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

#ifndef ALIBABACLOUD_ECS_MODEL_DESCRIBEINSTANCEHISTORYEVENTSREQUEST_H_
#define ALIBABACLOUD_ECS_MODEL_DESCRIBEINSTANCEHISTORYEVENTSREQUEST_H_

#include <alibabacloud/ecs/EcsExport.h>
#include <alibabacloud/core/RpcServiceRequest.h>
#include <string>
#include <vector>
#include <map>

namespace AlibabaCloud {
namespace Ecs {
namespace Model {
class ALIBABACLOUD_ECS_EXPORT DescribeInstanceHistoryEventsRequest : public RpcServiceRequest {
public:
	struct Tag {
		std::string key;
		std::string value;
	};
	DescribeInstanceHistoryEventsRequest();
	~DescribeInstanceHistoryEventsRequest();
	long getResourceOwnerId() const;
	void setResourceOwnerId(long resourceOwnerId);
	std::string getImpactLevel() const;
	void setImpactLevel(const std::string &impactLevel);
	std::string getResourceGroupId() const;
	void setResourceGroupId(const std::string &resourceGroupId);
	std::vector<std::string> getInstanceEventCycleStatus() const;
	void setInstanceEventCycleStatus(const std::vector<std::string> &instanceEventCycleStatus);
	std::vector<Tag> getTag() const;
	void setTag(const std::vector<Tag> &tag);
	std::string getNotBeforeStart() const;
	void setNotBeforeStart(const std::string &notBeforeStart);
	long getOwnerId() const;
	void setOwnerId(long ownerId);
	std::string getInstanceId() const;
	void setInstanceId(const std::string &instanceId);
	std::string getNotBeforeEnd() const;
	void setNotBeforeEnd(const std::string &notBeforeEnd);
	long getMaxResults() const;
	void setMaxResults(long maxResults);
	std::string getEventType() const;
	void setEventType(const std::string &eventType);
	std::vector<std::string> getEventId() const;
	void setEventId(const std::vector<std::string> &eventId);
	std::string getEventCycleStatus() const;
	void setEventCycleStatus(const std::string &eventCycleStatus);
	int getPageNumber() const;
	void setPageNumber(int pageNumber);
	std::string getRegionId() const;
	void setRegionId(const std::string &regionId);
	std::string getNextToken() const;
	void setNextToken(const std::string &nextToken);
	int getPageSize() const;
	void setPageSize(int pageSize);
	std::string getEventPublishTimeEnd() const;
	void setEventPublishTimeEnd(const std::string &eventPublishTimeEnd);
	std::vector<std::string> getResourceId() const;
	void setResourceId(const std::vector<std::string> &resourceId);
	std::vector<std::string> getInstanceEventType() const;
	void setInstanceEventType(const std::vector<std::string> &instanceEventType);
	std::string getResourceOwnerAccount() const;
	void setResourceOwnerAccount(const std::string &resourceOwnerAccount);
	std::string getOwnerAccount() const;
	void setOwnerAccount(const std::string &ownerAccount);
	std::string getResourceType() const;
	void setResourceType(const std::string &resourceType);
	std::string getEventPublishTimeStart() const;
	void setEventPublishTimeStart(const std::string &eventPublishTimeStart);

private:
	long resourceOwnerId_;
	std::string impactLevel_;
	std::string resourceGroupId_;
	std::vector<std::string> instanceEventCycleStatus_;
	std::vector<Tag> tag_;
	std::string notBeforeStart_;
	long ownerId_;
	std::string instanceId_;
	std::string notBeforeEnd_;
	long maxResults_;
	std::string eventType_;
	std::vector<std::string> eventId_;
	std::string eventCycleStatus_;
	int pageNumber_;
	std::string regionId_;
	std::string nextToken_;
	int pageSize_;
	std::string eventPublishTimeEnd_;
	std::vector<std::string> resourceId_;
	std::vector<std::string> instanceEventType_;
	std::string resourceOwnerAccount_;
	std::string ownerAccount_;
	std::string resourceType_;
	std::string eventPublishTimeStart_;
};
} // namespace Model
} // namespace Ecs
} // namespace AlibabaCloud
#endif // !ALIBABACLOUD_ECS_MODEL_DESCRIBEINSTANCEHISTORYEVENTSREQUEST_H_
