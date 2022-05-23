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

#ifndef ALIBABACLOUD_ECS_MODEL_DESCRIBEPRICEREQUEST_H_
#define ALIBABACLOUD_ECS_MODEL_DESCRIBEPRICEREQUEST_H_

#include <alibabacloud/ecs/EcsExport.h>
#include <alibabacloud/core/RpcServiceRequest.h>
#include <string>
#include <vector>
#include <map>

namespace AlibabaCloud {
namespace Ecs {
namespace Model {
class ALIBABACLOUD_ECS_EXPORT DescribePriceRequest : public RpcServiceRequest {
public:
	struct SystemDisk {
		int size;
		std::string performanceLevel;
		std::string category;
	};
	struct DataDisk {
		int size;
		std::string performanceLevel;
		std::string category;
	};
	DescribePriceRequest();
	~DescribePriceRequest();
	long getResourceOwnerId() const;
	void setResourceOwnerId(long resourceOwnerId);
	std::string getIsp() const;
	void setIsp(const std::string &isp);
	SystemDisk getSystemDisk() const;
	void setSystemDisk(const SystemDisk &systemDisk);
	std::string getPriceUnit() const;
	void setPriceUnit(const std::string &priceUnit);
	int getPeriod() const;
	void setPeriod(int period);
	std::string getAssuranceTimes() const;
	void setAssuranceTimes(const std::string &assuranceTimes);
	long getOwnerId() const;
	void setOwnerId(long ownerId);
	int getInstanceCpuCoreCount() const;
	void setInstanceCpuCoreCount(int instanceCpuCoreCount);
	std::string getSpotStrategy() const;
	void setSpotStrategy(const std::string &spotStrategy);
	std::string getInternetChargeType() const;
	void setInternetChargeType(const std::string &internetChargeType);
	std::string getZoneId() const;
	void setZoneId(const std::string &zoneId);
	std::string getInstanceNetworkType() const;
	void setInstanceNetworkType(const std::string &instanceNetworkType);
	int getInstanceAmount() const;
	void setInstanceAmount(int instanceAmount);
	std::vector<std::string> getInstanceTypeList() const;
	void setInstanceTypeList(const std::vector<std::string> &instanceTypeList);
	std::string getImageId() const;
	void setImageId(const std::string &imageId);
	std::string getIoOptimized() const;
	void setIoOptimized(const std::string &ioOptimized);
	int getInternetMaxBandwidthOut() const;
	void setInternetMaxBandwidthOut(int internetMaxBandwidthOut);
	std::string getPlatform() const;
	void setPlatform(const std::string &platform);
	int getCapacity() const;
	void setCapacity(int capacity);
	std::string getRegionId() const;
	void setRegionId(const std::string &regionId);
	std::string getScope() const;
	void setScope(const std::string &scope);
	std::string getInstanceType() const;
	void setInstanceType(const std::string &instanceType);
	std::string getDedicatedHostType() const;
	void setDedicatedHostType(const std::string &dedicatedHostType);
	int getAmount() const;
	void setAmount(int amount);
	std::string getResourceOwnerAccount() const;
	void setResourceOwnerAccount(const std::string &resourceOwnerAccount);
	std::string getOwnerAccount() const;
	void setOwnerAccount(const std::string &ownerAccount);
	int getSpotDuration() const;
	void setSpotDuration(int spotDuration);
	std::string getResourceType() const;
	void setResourceType(const std::string &resourceType);
	std::vector<DataDisk> getDataDisk() const;
	void setDataDisk(const std::vector<DataDisk> &dataDisk);
	std::string getOfferingType() const;
	void setOfferingType(const std::string &offeringType);

private:
	long resourceOwnerId_;
	std::string isp_;
	SystemDisk systemDisk_;
	std::string priceUnit_;
	int period_;
	std::string assuranceTimes_;
	long ownerId_;
	int instanceCpuCoreCount_;
	std::string spotStrategy_;
	std::string internetChargeType_;
	std::string zoneId_;
	std::string instanceNetworkType_;
	int instanceAmount_;
	std::vector<std::string> instanceTypeList_;
	std::string imageId_;
	std::string ioOptimized_;
	int internetMaxBandwidthOut_;
	std::string platform_;
	int capacity_;
	std::string regionId_;
	std::string scope_;
	std::string instanceType_;
	std::string dedicatedHostType_;
	int amount_;
	std::string resourceOwnerAccount_;
	std::string ownerAccount_;
	int spotDuration_;
	std::string resourceType_;
	std::vector<DataDisk> dataDisk_;
	std::string offeringType_;
};
} // namespace Model
} // namespace Ecs
} // namespace AlibabaCloud
#endif // !ALIBABACLOUD_ECS_MODEL_DESCRIBEPRICEREQUEST_H_
