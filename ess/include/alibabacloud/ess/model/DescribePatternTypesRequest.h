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

#ifndef ALIBABACLOUD_ESS_MODEL_DESCRIBEPATTERNTYPESREQUEST_H_
#define ALIBABACLOUD_ESS_MODEL_DESCRIBEPATTERNTYPESREQUEST_H_

#include <alibabacloud/ess/EssExport.h>
#include <alibabacloud/core/RpcServiceRequest.h>
#include <string>
#include <vector>
#include <map>

namespace AlibabaCloud {
namespace Ess {
namespace Model {
class ALIBABACLOUD_ESS_EXPORT DescribePatternTypesRequest : public RpcServiceRequest {
public:
	DescribePatternTypesRequest();
	~DescribePatternTypesRequest();
	int getMaximumCpuCoreCount() const;
	void setMaximumCpuCoreCount(int maximumCpuCoreCount);
	int getMaximumGpuAmount() const;
	void setMaximumGpuAmount(int maximumGpuAmount);
	float getMaximumMemorySize() const;
	void setMaximumMemorySize(float maximumMemorySize);
	int getMinimumCpuCoreCount() const;
	void setMinimumCpuCoreCount(int minimumCpuCoreCount);
	int getCores() const;
	void setCores(int cores);
	std::vector<std::string> getInstanceTypeFamilies() const;
	void setInstanceTypeFamilies(const std::vector<std::string> &instanceTypeFamilies);
	int getMinimumBaselineCredit() const;
	void setMinimumBaselineCredit(int minimumBaselineCredit);
	std::vector<std::string> getCpuArchitectures() const;
	void setCpuArchitectures(const std::vector<std::string> &cpuArchitectures);
	std::vector<std::string> getInstanceCategories() const;
	void setInstanceCategories(const std::vector<std::string> &instanceCategories);
	float getMaxPrice() const;
	void setMaxPrice(float maxPrice);
	int getMinimumGpuAmount() const;
	void setMinimumGpuAmount(int minimumGpuAmount);
	std::string getBurstablePerformance() const;
	void setBurstablePerformance(const std::string &burstablePerformance);
	std::vector<std::string> getPhysicalProcessorModels() const;
	void setPhysicalProcessorModels(const std::vector<std::string> &physicalProcessorModels);
	std::string getSpotStrategy() const;
	void setSpotStrategy(const std::string &spotStrategy);
	std::vector<std::string> getVSwitchId() const;
	void setVSwitchId(const std::vector<std::string> &vSwitchId);
	int getMinimumEniQuantity() const;
	void setMinimumEniQuantity(int minimumEniQuantity);
	float getMinimumMemorySize() const;
	void setMinimumMemorySize(float minimumMemorySize);
	std::string getInstanceFamilyLevel() const;
	void setInstanceFamilyLevel(const std::string &instanceFamilyLevel);
	std::vector<std::string> getZoneId() const;
	void setZoneId(const std::vector<std::string> &zoneId);
	std::vector<float> getMemoryList() const;
	void setMemoryList(const std::vector<float> &memoryList);
	float getMemory() const;
	void setMemory(float memory);
	int getMinimumEniIpv6AddressQuantity() const;
	void setMinimumEniIpv6AddressQuantity(int minimumEniIpv6AddressQuantity);
	std::string getAccessKeyId() const;
	void setAccessKeyId(const std::string &accessKeyId);
	std::vector<int> getCoresList() const;
	void setCoresList(const std::vector<int> &coresList);
	std::string getRegionId() const;
	void setRegionId(const std::string &regionId);
	std::vector<std::string> getArchitecture() const;
	void setArchitecture(const std::vector<std::string> &architecture);
	int getMinimumInitialCredit() const;
	void setMinimumInitialCredit(int minimumInitialCredit);
	std::vector<std::string> getExcludedInstanceType() const;
	void setExcludedInstanceType(const std::vector<std::string> &excludedInstanceType);
	int getMinimumEniPrivateIpAddressQuantity() const;
	void setMinimumEniPrivateIpAddressQuantity(int minimumEniPrivateIpAddressQuantity);
	std::vector<std::string> getGpuSpecs() const;
	void setGpuSpecs(const std::vector<std::string> &gpuSpecs);
	long getChannelId() const;
	void setChannelId(long channelId);

private:
	int maximumCpuCoreCount_;
	int maximumGpuAmount_;
	float maximumMemorySize_;
	int minimumCpuCoreCount_;
	int cores_;
	std::vector<std::string> instanceTypeFamilies_;
	int minimumBaselineCredit_;
	std::vector<std::string> cpuArchitectures_;
	std::vector<std::string> instanceCategories_;
	float maxPrice_;
	int minimumGpuAmount_;
	std::string burstablePerformance_;
	std::vector<std::string> physicalProcessorModels_;
	std::string spotStrategy_;
	std::vector<std::string> vSwitchId_;
	int minimumEniQuantity_;
	float minimumMemorySize_;
	std::string instanceFamilyLevel_;
	std::vector<std::string> zoneId_;
	std::vector<float> memoryList_;
	float memory_;
	int minimumEniIpv6AddressQuantity_;
	std::string accessKeyId_;
	std::vector<int> coresList_;
	std::string regionId_;
	std::vector<std::string> architecture_;
	int minimumInitialCredit_;
	std::vector<std::string> excludedInstanceType_;
	int minimumEniPrivateIpAddressQuantity_;
	std::vector<std::string> gpuSpecs_;
	long channelId_;
};
} // namespace Model
} // namespace Ess
} // namespace AlibabaCloud
#endif // !ALIBABACLOUD_ESS_MODEL_DESCRIBEPATTERNTYPESREQUEST_H_
