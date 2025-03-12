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
	struct PromotionOptions {
		std::string couponNo;
	};
	struct DataDisk {
		long provisionedIops;
		long size;
		std::string performanceLevel;
		std::string category;
	};
	struct RecurrenceRules {
		int endHour;
		int startHour;
		std::string recurrenceValue;
		std::string recurrenceType;
	};
	DescribePriceRequest();
	~DescribePriceRequest();
	int getDataDisk3Size() const;
	void setDataDisk3Size(int dataDisk3Size);
	long getResourceOwnerId() const;
	void setResourceOwnerId(long resourceOwnerId);
	std::string getDataDisk3Category() const;
	void setDataDisk3Category(const std::string &dataDisk3Category);
	std::string getIsp() const;
	void setIsp(const std::string &isp);
	std::string getStartTime() const;
	void setStartTime(const std::string &startTime);
	int getDataDisk4Size() const;
	void setDataDisk4Size(int dataDisk4Size);
	std::string getPriceUnit() const;
	void setPriceUnit(const std::string &priceUnit);
	int getPeriod() const;
	void setPeriod(int period);
	std::string getDataDisk1PerformanceLevel() const;
	void setDataDisk1PerformanceLevel(const std::string &dataDisk1PerformanceLevel);
	std::string getAssuranceTimes() const;
	void setAssuranceTimes(const std::string &assuranceTimes);
	long getOwnerId() const;
	void setOwnerId(long ownerId);
	PromotionOptions getPromotionOptions() const;
	void setPromotionOptions(const PromotionOptions &promotionOptions);
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
	std::string getDataDisk3PerformanceLevel() const;
	void setDataDisk3PerformanceLevel(const std::string &dataDisk3PerformanceLevel);
	std::string getImageId() const;
	void setImageId(const std::string &imageId);
	std::string getIoOptimized() const;
	void setIoOptimized(const std::string &ioOptimized);
	int getInternetMaxBandwidthOut() const;
	void setInternetMaxBandwidthOut(int internetMaxBandwidthOut);
	std::string getSystemDiskCategory() const;
	void setSystemDiskCategory(const std::string &systemDiskCategory);
	std::string getPlatform() const;
	void setPlatform(const std::string &platform);
	int getCapacity() const;
	void setCapacity(int capacity);
	std::string getSystemDiskPerformanceLevel() const;
	void setSystemDiskPerformanceLevel(const std::string &systemDiskPerformanceLevel);
	std::string getDataDisk4Category() const;
	void setDataDisk4Category(const std::string &dataDisk4Category);
	std::string getDataDisk4PerformanceLevel() const;
	void setDataDisk4PerformanceLevel(const std::string &dataDisk4PerformanceLevel);
	std::string getRegionId() const;
	void setRegionId(const std::string &regionId);
	std::string getScope() const;
	void setScope(const std::string &scope);
	std::string getSchedulerOptionsDedicatedHostId() const;
	void setSchedulerOptionsDedicatedHostId(const std::string &schedulerOptionsDedicatedHostId);
	std::string getInstanceType() const;
	void setInstanceType(const std::string &instanceType);
	std::string getDedicatedHostType() const;
	void setDedicatedHostType(const std::string &dedicatedHostType);
	std::string getDataDisk2Category() const;
	void setDataDisk2Category(const std::string &dataDisk2Category);
	int getDataDisk1Size() const;
	void setDataDisk1Size(int dataDisk1Size);
	int getAmount() const;
	void setAmount(int amount);
	std::string getResourceOwnerAccount() const;
	void setResourceOwnerAccount(const std::string &resourceOwnerAccount);
	std::string getOwnerAccount() const;
	void setOwnerAccount(const std::string &ownerAccount);
	int getDataDisk2Size() const;
	void setDataDisk2Size(int dataDisk2Size);
	int getSpotDuration() const;
	void setSpotDuration(int spotDuration);
	std::string getResourceType() const;
	void setResourceType(const std::string &resourceType);
	std::vector<DataDisk> getDataDisk() const;
	void setDataDisk(const std::vector<DataDisk> &dataDisk);
	std::string getDataDisk1Category() const;
	void setDataDisk1Category(const std::string &dataDisk1Category);
	std::string getDataDisk2PerformanceLevel() const;
	void setDataDisk2PerformanceLevel(const std::string &dataDisk2PerformanceLevel);
	int getSystemDiskSize() const;
	void setSystemDiskSize(int systemDiskSize);
	std::string getOfferingType() const;
	void setOfferingType(const std::string &offeringType);
	std::vector<RecurrenceRules> getRecurrenceRules() const;
	void setRecurrenceRules(const std::vector<RecurrenceRules> &recurrenceRules);

private:
	int dataDisk3Size_;
	long resourceOwnerId_;
	std::string dataDisk3Category_;
	std::string isp_;
	std::string startTime_;
	int dataDisk4Size_;
	std::string priceUnit_;
	int period_;
	std::string dataDisk1PerformanceLevel_;
	std::string assuranceTimes_;
	long ownerId_;
	PromotionOptions promotionOptions_;
	int instanceCpuCoreCount_;
	std::string spotStrategy_;
	std::string internetChargeType_;
	std::string zoneId_;
	std::string instanceNetworkType_;
	int instanceAmount_;
	std::vector<std::string> instanceTypeList_;
	std::string dataDisk3PerformanceLevel_;
	std::string imageId_;
	std::string ioOptimized_;
	int internetMaxBandwidthOut_;
	std::string systemDiskCategory_;
	std::string platform_;
	int capacity_;
	std::string systemDiskPerformanceLevel_;
	std::string dataDisk4Category_;
	std::string dataDisk4PerformanceLevel_;
	std::string regionId_;
	std::string scope_;
	std::string schedulerOptionsDedicatedHostId_;
	std::string instanceType_;
	std::string dedicatedHostType_;
	std::string dataDisk2Category_;
	int dataDisk1Size_;
	int amount_;
	std::string resourceOwnerAccount_;
	std::string ownerAccount_;
	int dataDisk2Size_;
	int spotDuration_;
	std::string resourceType_;
	std::vector<DataDisk> dataDisk_;
	std::string dataDisk1Category_;
	std::string dataDisk2PerformanceLevel_;
	int systemDiskSize_;
	std::string offeringType_;
	std::vector<RecurrenceRules> recurrenceRules_;
};
} // namespace Model
} // namespace Ecs
} // namespace AlibabaCloud
#endif // !ALIBABACLOUD_ECS_MODEL_DESCRIBEPRICEREQUEST_H_
