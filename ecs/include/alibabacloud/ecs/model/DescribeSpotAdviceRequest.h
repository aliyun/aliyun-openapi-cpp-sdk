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

#ifndef ALIBABACLOUD_ECS_MODEL_DESCRIBESPOTADVICEREQUEST_H_
#define ALIBABACLOUD_ECS_MODEL_DESCRIBESPOTADVICEREQUEST_H_

#include <alibabacloud/ecs/EcsExport.h>
#include <alibabacloud/core/RpcServiceRequest.h>
#include <string>
#include <vector>
#include <map>

namespace AlibabaCloud {
namespace Ecs {
namespace Model {
class ALIBABACLOUD_ECS_EXPORT DescribeSpotAdviceRequest : public RpcServiceRequest {
public:
	DescribeSpotAdviceRequest();
	~DescribeSpotAdviceRequest();
	std::string getGpuSpec() const;
	void setGpuSpec(const std::string &gpuSpec);
	long getResourceOwnerId() const;
	void setResourceOwnerId(long resourceOwnerId);
	float getMemory() const;
	void setMemory(float memory);
	std::string getIoOptimized() const;
	void setIoOptimized(const std::string &ioOptimized);
	std::vector<std::string> getInstanceTypes() const;
	void setInstanceTypes(const std::vector<std::string> &instanceTypes);
	int getMinCores() const;
	void setMinCores(int minCores);
	std::string getNetworkType() const;
	void setNetworkType(const std::string &networkType);
	int getCores() const;
	void setCores(int cores);
	std::string getRegionId() const;
	void setRegionId(const std::string &regionId);
	std::string getResourceOwnerAccount() const;
	void setResourceOwnerAccount(const std::string &resourceOwnerAccount);
	std::string getOwnerAccount() const;
	void setOwnerAccount(const std::string &ownerAccount);
	std::string getInstanceTypeFamily() const;
	void setInstanceTypeFamily(const std::string &instanceTypeFamily);
	long getOwnerId() const;
	void setOwnerId(long ownerId);
	std::string getInstanceFamilyLevel() const;
	void setInstanceFamilyLevel(const std::string &instanceFamilyLevel);
	std::string getZoneId() const;
	void setZoneId(const std::string &zoneId);
	int getGpuAmount() const;
	void setGpuAmount(int gpuAmount);
	float getMinMemory() const;
	void setMinMemory(float minMemory);

private:
	std::string gpuSpec_;
	long resourceOwnerId_;
	float memory_;
	std::string ioOptimized_;
	std::vector<std::string> instanceTypes_;
	int minCores_;
	std::string networkType_;
	int cores_;
	std::string regionId_;
	std::string resourceOwnerAccount_;
	std::string ownerAccount_;
	std::string instanceTypeFamily_;
	long ownerId_;
	std::string instanceFamilyLevel_;
	std::string zoneId_;
	int gpuAmount_;
	float minMemory_;
};
} // namespace Model
} // namespace Ecs
} // namespace AlibabaCloud
#endif // !ALIBABACLOUD_ECS_MODEL_DESCRIBESPOTADVICEREQUEST_H_
