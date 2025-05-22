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

#ifndef ALIBABACLOUD_RDS_MODEL_DESCRIBERCINSTANCEHISTORYEVENTSREQUEST_H_
#define ALIBABACLOUD_RDS_MODEL_DESCRIBERCINSTANCEHISTORYEVENTSREQUEST_H_

#include <alibabacloud/rds/RdsExport.h>
#include <alibabacloud/core/RpcServiceRequest.h>
#include <string>
#include <vector>
#include <map>

namespace AlibabaCloud {
namespace Rds {
namespace Model {
class ALIBABACLOUD_RDS_EXPORT DescribeRCInstanceHistoryEventsRequest : public RpcServiceRequest {
public:
	struct Tag {
		std::string value;
		std::string key;
	};
	DescribeRCInstanceHistoryEventsRequest();
	~DescribeRCInstanceHistoryEventsRequest();
	std::vector<std::string> getEventId() const;
	void setEventId(const std::vector<std::string> &eventId);
	std::string getEventCycleStatus() const;
	void setEventCycleStatus(const std::string &eventCycleStatus);
	std::string getPageNumber() const;
	void setPageNumber(const std::string &pageNumber);
	std::string getAccessKeyId() const;
	void setAccessKeyId(const std::string &accessKeyId);
	std::string getImpactLevel() const;
	void setImpactLevel(const std::string &impactLevel);
	std::string getResourceGroupId() const;
	void setResourceGroupId(const std::string &resourceGroupId);
	std::string getRegionId() const;
	void setRegionId(const std::string &regionId);
	std::string getPageSize() const;
	void setPageSize(const std::string &pageSize);
	std::vector<std::string> getInstanceEventCycleStatus() const;
	void setInstanceEventCycleStatus(const std::vector<std::string> &instanceEventCycleStatus);
	std::vector<Tag> getTag() const;
	void setTag(const std::vector<Tag> &tag);
	std::string getEventPublishTimeEnd() const;
	void setEventPublishTimeEnd(const std::string &eventPublishTimeEnd);
	std::vector<std::string> getResourceId() const;
	void setResourceId(const std::vector<std::string> &resourceId);
	std::vector<std::string> getInstanceEventType() const;
	void setInstanceEventType(const std::vector<std::string> &instanceEventType);
	std::string getNotBeforeStart() const;
	void setNotBeforeStart(const std::string &notBeforeStart);
	std::string getEventPublishTimeStart() const;
	void setEventPublishTimeStart(const std::string &eventPublishTimeStart);
	std::string getInstanceId() const;
	void setInstanceId(const std::string &instanceId);
	std::string getNotBeforeEnd() const;
	void setNotBeforeEnd(const std::string &notBeforeEnd);
	std::string getMaxResults() const;
	void setMaxResults(const std::string &maxResults);
	std::string getEventType() const;
	void setEventType(const std::string &eventType);

private:
	std::vector<std::string> eventId_;
	std::string eventCycleStatus_;
	std::string pageNumber_;
	std::string accessKeyId_;
	std::string impactLevel_;
	std::string resourceGroupId_;
	std::string regionId_;
	std::string pageSize_;
	std::vector<std::string> instanceEventCycleStatus_;
	std::vector<Tag> tag_;
	std::string eventPublishTimeEnd_;
	std::vector<std::string> resourceId_;
	std::vector<std::string> instanceEventType_;
	std::string notBeforeStart_;
	std::string eventPublishTimeStart_;
	std::string instanceId_;
	std::string notBeforeEnd_;
	std::string maxResults_;
	std::string eventType_;
};
} // namespace Model
} // namespace Rds
} // namespace AlibabaCloud
#endif // !ALIBABACLOUD_RDS_MODEL_DESCRIBERCINSTANCEHISTORYEVENTSREQUEST_H_
