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

#ifndef ALIBABACLOUD_ECS_MODEL_REPORTINSTANCESSTATUSREQUEST_H_
#define ALIBABACLOUD_ECS_MODEL_REPORTINSTANCESSTATUSREQUEST_H_

#include <alibabacloud/ecs/EcsExport.h>
#include <alibabacloud/core/RpcServiceRequest.h>
#include <string>
#include <vector>
#include <map>

namespace AlibabaCloud {
namespace Ecs {
namespace Model {
class ALIBABACLOUD_ECS_EXPORT ReportInstancesStatusRequest : public RpcServiceRequest {
public:
	ReportInstancesStatusRequest();
	~ReportInstancesStatusRequest();
	std::string getReason() const;
	void setReason(const std::string &reason);
	long getResourceOwnerId() const;
	void setResourceOwnerId(long resourceOwnerId);
	std::string getDescription() const;
	void setDescription(const std::string &description);
	std::string getStartTime() const;
	void setStartTime(const std::string &startTime);
	std::string getIssueCategory() const;
	void setIssueCategory(const std::string &issueCategory);
	std::string getRegionId() const;
	void setRegionId(const std::string &regionId);
	std::vector<std::string> getDiskId() const;
	void setDiskId(const std::vector<std::string> &diskId);
	std::string getResourceOwnerAccount() const;
	void setResourceOwnerAccount(const std::string &resourceOwnerAccount);
	std::string getOwnerAccount() const;
	void setOwnerAccount(const std::string &ownerAccount);
	std::string getEndTime() const;
	void setEndTime(const std::string &endTime);
	long getOwnerId() const;
	void setOwnerId(long ownerId);
	std::vector<std::string> getInstanceId() const;
	void setInstanceId(const std::vector<std::string> &instanceId);
	std::vector<std::string> getDevice() const;
	void setDevice(const std::vector<std::string> &device);

private:
	std::string reason_;
	long resourceOwnerId_;
	std::string description_;
	std::string startTime_;
	std::string issueCategory_;
	std::string regionId_;
	std::vector<std::string> diskId_;
	std::string resourceOwnerAccount_;
	std::string ownerAccount_;
	std::string endTime_;
	long ownerId_;
	std::vector<std::string> instanceId_;
	std::vector<std::string> device_;
};
} // namespace Model
} // namespace Ecs
} // namespace AlibabaCloud
#endif // !ALIBABACLOUD_ECS_MODEL_REPORTINSTANCESSTATUSREQUEST_H_
