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

#ifndef ALIBABACLOUD_ECS_MODEL_DESCRIBETASKSREQUEST_H_
#define ALIBABACLOUD_ECS_MODEL_DESCRIBETASKSREQUEST_H_

#include <alibabacloud/ecs/EcsExport.h>
#include <alibabacloud/core/RpcServiceRequest.h>
#include <string>
#include <vector>
#include <map>

namespace AlibabaCloud {
namespace Ecs {
namespace Model {
class ALIBABACLOUD_ECS_EXPORT DescribeTasksRequest : public RpcServiceRequest {
public:
	DescribeTasksRequest();
	~DescribeTasksRequest();
	long getResourceOwnerId() const;
	void setResourceOwnerId(long resourceOwnerId);
	std::string getStartTime() const;
	void setStartTime(const std::string &startTime);
	std::string getTaskIds() const;
	void setTaskIds(const std::string &taskIds);
	int getPageNumber() const;
	void setPageNumber(int pageNumber);
	std::string getTaskStatus() const;
	void setTaskStatus(const std::string &taskStatus);
	std::string getRegionId() const;
	void setRegionId(const std::string &regionId);
	int getPageSize() const;
	void setPageSize(int pageSize);
	std::string getResourceOwnerAccount() const;
	void setResourceOwnerAccount(const std::string &resourceOwnerAccount);
	std::string getOwnerAccount() const;
	void setOwnerAccount(const std::string &ownerAccount);
	std::string getEndTime() const;
	void setEndTime(const std::string &endTime);
	long getOwnerId() const;
	void setOwnerId(long ownerId);
	std::string getTaskGroupId() const;
	void setTaskGroupId(const std::string &taskGroupId);
	std::string getTaskAction() const;
	void setTaskAction(const std::string &taskAction);
	std::vector<std::string> getResourceIds() const;
	void setResourceIds(const std::vector<std::string> &resourceIds);

private:
	long resourceOwnerId_;
	std::string startTime_;
	std::string taskIds_;
	int pageNumber_;
	std::string taskStatus_;
	std::string regionId_;
	int pageSize_;
	std::string resourceOwnerAccount_;
	std::string ownerAccount_;
	std::string endTime_;
	long ownerId_;
	std::string taskGroupId_;
	std::string taskAction_;
	std::vector<std::string> resourceIds_;
};
} // namespace Model
} // namespace Ecs
} // namespace AlibabaCloud
#endif // !ALIBABACLOUD_ECS_MODEL_DESCRIBETASKSREQUEST_H_
