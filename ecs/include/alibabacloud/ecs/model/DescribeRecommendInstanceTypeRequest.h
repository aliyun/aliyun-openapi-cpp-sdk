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

#ifndef ALIBABACLOUD_ECS_MODEL_DESCRIBERECOMMENDINSTANCETYPEREQUEST_H_
#define ALIBABACLOUD_ECS_MODEL_DESCRIBERECOMMENDINSTANCETYPEREQUEST_H_

#include <alibabacloud/ecs/EcsExport.h>
#include <alibabacloud/core/RpcServiceRequest.h>
#include <string>
#include <vector>
#include <map>

namespace AlibabaCloud {
namespace Ecs {
namespace Model {
class ALIBABACLOUD_ECS_EXPORT DescribeRecommendInstanceTypeRequest : public RpcServiceRequest {
public:
	DescribeRecommendInstanceTypeRequest();
	~DescribeRecommendInstanceTypeRequest();
	long getResourceOwnerId() const;
	void setResourceOwnerId(long resourceOwnerId);
	std::string getNetworkType() const;
	void setNetworkType(const std::string &networkType);
	std::string getScene() const;
	void setScene(const std::string &scene);
	int getCores() const;
	void setCores(int cores);
	std::string getSystemDiskCategory() const;
	void setSystemDiskCategory(const std::string &systemDiskCategory);
	float getMaxPrice() const;
	void setMaxPrice(float maxPrice);
	long getOwnerId() const;
	void setOwnerId(long ownerId);
	std::string getSpotStrategy() const;
	void setSpotStrategy(const std::string &spotStrategy);
	std::string getInstanceFamilyLevel() const;
	void setInstanceFamilyLevel(const std::string &instanceFamilyLevel);
	std::string getZoneId() const;
	void setZoneId(const std::string &zoneId);
	float getMemory() const;
	void setMemory(float memory);
	std::string getIoOptimized() const;
	void setIoOptimized(const std::string &ioOptimized);
	std::string getRegionId() const;
	void setRegionId(const std::string &regionId);
	std::string getInstanceType() const;
	void setInstanceType(const std::string &instanceType);
	std::string getInstanceChargeType() const;
	void setInstanceChargeType(const std::string &instanceChargeType);
	std::string getResourceOwnerAccount() const;
	void setResourceOwnerAccount(const std::string &resourceOwnerAccount);
	std::string getZoneMatchMode() const;
	void setZoneMatchMode(const std::string &zoneMatchMode);
	std::string getOwnerAccount() const;
	void setOwnerAccount(const std::string &ownerAccount);
	std::vector<std::string> getInstanceTypeFamily() const;
	void setInstanceTypeFamily(const std::vector<std::string> &instanceTypeFamily);
	std::string getPriorityStrategy() const;
	void setPriorityStrategy(const std::string &priorityStrategy);

private:
	long resourceOwnerId_;
	std::string networkType_;
	std::string scene_;
	int cores_;
	std::string systemDiskCategory_;
	float maxPrice_;
	long ownerId_;
	std::string spotStrategy_;
	std::string instanceFamilyLevel_;
	std::string zoneId_;
	float memory_;
	std::string ioOptimized_;
	std::string regionId_;
	std::string instanceType_;
	std::string instanceChargeType_;
	std::string resourceOwnerAccount_;
	std::string zoneMatchMode_;
	std::string ownerAccount_;
	std::vector<std::string> instanceTypeFamily_;
	std::string priorityStrategy_;
};
} // namespace Model
} // namespace Ecs
} // namespace AlibabaCloud
#endif // !ALIBABACLOUD_ECS_MODEL_DESCRIBERECOMMENDINSTANCETYPEREQUEST_H_
