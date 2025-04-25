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

#ifndef ALIBABACLOUD_ESS_MODEL_DESCRIBESCALINGINSTANCESREQUEST_H_
#define ALIBABACLOUD_ESS_MODEL_DESCRIBESCALINGINSTANCESREQUEST_H_

#include <alibabacloud/ess/EssExport.h>
#include <alibabacloud/core/RpcServiceRequest.h>
#include <string>
#include <vector>
#include <map>

namespace AlibabaCloud {
namespace Ess {
namespace Model {
class ALIBABACLOUD_ESS_EXPORT DescribeScalingInstancesRequest : public RpcServiceRequest {
public:
	DescribeScalingInstancesRequest();
	~DescribeScalingInstancesRequest();
	long getResourceOwnerId() const;
	void setResourceOwnerId(long resourceOwnerId);
	std::string getScalingGroupId() const;
	void setScalingGroupId(const std::string &scalingGroupId);
	std::string getLifecycleState() const;
	void setLifecycleState(const std::string &lifecycleState);
	std::string getCreationType() const;
	void setCreationType(const std::string &creationType);
	int getPageNumber() const;
	void setPageNumber(int pageNumber);
	std::string getAccessKeyId() const;
	void setAccessKeyId(const std::string &accessKeyId);
	std::string getRegionId() const;
	void setRegionId(const std::string &regionId);
	int getPageSize() const;
	void setPageSize(int pageSize);
	std::string getResourceOwnerAccount() const;
	void setResourceOwnerAccount(const std::string &resourceOwnerAccount);
	std::string getOwnerAccount() const;
	void setOwnerAccount(const std::string &ownerAccount);
	long getOwnerId() const;
	void setOwnerId(long ownerId);
	std::string getScalingActivityId() const;
	void setScalingActivityId(const std::string &scalingActivityId);
	std::vector<std::string> getCreationTypes() const;
	void setCreationTypes(const std::vector<std::string> &creationTypes);
	std::string getScalingConfigurationId() const;
	void setScalingConfigurationId(const std::string &scalingConfigurationId);
	std::vector<std::string> getInstanceId() const;
	void setInstanceId(const std::vector<std::string> &instanceId);
	std::string getHealthStatus() const;
	void setHealthStatus(const std::string &healthStatus);
	std::vector<std::string> getLifecycleStates() const;
	void setLifecycleStates(const std::vector<std::string> &lifecycleStates);

private:
	long resourceOwnerId_;
	std::string scalingGroupId_;
	std::string lifecycleState_;
	std::string creationType_;
	int pageNumber_;
	std::string accessKeyId_;
	std::string regionId_;
	int pageSize_;
	std::string resourceOwnerAccount_;
	std::string ownerAccount_;
	long ownerId_;
	std::string scalingActivityId_;
	std::vector<std::string> creationTypes_;
	std::string scalingConfigurationId_;
	std::vector<std::string> instanceId_;
	std::string healthStatus_;
	std::vector<std::string> lifecycleStates_;
};
} // namespace Model
} // namespace Ess
} // namespace AlibabaCloud
#endif // !ALIBABACLOUD_ESS_MODEL_DESCRIBESCALINGINSTANCESREQUEST_H_
