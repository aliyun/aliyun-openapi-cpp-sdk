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

#ifndef ALIBABACLOUD_ECS_MODEL_DESCRIBEINSTANCETYPESREQUEST_H_
#define ALIBABACLOUD_ECS_MODEL_DESCRIBEINSTANCETYPESREQUEST_H_

#include <alibabacloud/ecs/EcsExport.h>
#include <alibabacloud/core/RpcServiceRequest.h>
#include <string>
#include <vector>
#include <map>

namespace AlibabaCloud {
namespace Ecs {
namespace Model {
class ALIBABACLOUD_ECS_EXPORT DescribeInstanceTypesRequest : public RpcServiceRequest {
public:
	DescribeInstanceTypesRequest();
	~DescribeInstanceTypesRequest();
	std::string getGPUSpec() const;
	void setGPUSpec(const std::string &gPUSpec);
	long getResourceOwnerId() const;
	void setResourceOwnerId(long resourceOwnerId);
	int getMaximumCpuCoreCount() const;
	void setMaximumCpuCoreCount(int maximumCpuCoreCount);
	int getMaximumGPUAmount() const;
	void setMaximumGPUAmount(int maximumGPUAmount);
	std::string getLocalStorageCategory() const;
	void setLocalStorageCategory(const std::string &localStorageCategory);
	bool getSupportHotModify() const;
	void setSupportHotModify(bool supportHotModify);
	float getMaximumMemorySize() const;
	void setMaximumMemorySize(float maximumMemorySize);
	std::string getInstanceCategory() const;
	void setInstanceCategory(const std::string &instanceCategory);
	long getMinimumInstancePpsTx() const;
	void setMinimumInstancePpsTx(long minimumInstancePpsTx);
	int getMinimumCpuCoreCount() const;
	void setMinimumCpuCoreCount(int minimumCpuCoreCount);
	std::vector<std::string> getLocalStorageCategories() const;
	void setLocalStorageCategories(const std::vector<std::string> &localStorageCategories);
	int getMinimumPrimaryEniQueueNumber() const;
	void setMinimumPrimaryEniQueueNumber(int minimumPrimaryEniQueueNumber);
	std::vector<std::string> getInstanceTypeFamilies() const;
	void setInstanceTypeFamilies(const std::vector<std::string> &instanceTypeFamilies);
	int getMinimumBaselineCredit() const;
	void setMinimumBaselineCredit(int minimumBaselineCredit);
	int getMinimumSecondaryEniQueueNumber() const;
	void setMinimumSecondaryEniQueueNumber(int minimumSecondaryEniQueueNumber);
	std::vector<std::string> getCpuArchitectures() const;
	void setCpuArchitectures(const std::vector<std::string> &cpuArchitectures);
	int getMinimumInstanceBandwidthTx() const;
	void setMinimumInstanceBandwidthTx(int minimumInstanceBandwidthTx);
	std::vector<std::string> getInstanceCategories() const;
	void setInstanceCategories(const std::vector<std::string> &instanceCategories);
	int getMinimumGPUAmount() const;
	void setMinimumGPUAmount(int minimumGPUAmount);
	float getMaximumCpuSpeedFrequency() const;
	void setMaximumCpuSpeedFrequency(float maximumCpuSpeedFrequency);
	std::string getCpuArchitecture() const;
	void setCpuArchitecture(const std::string &cpuArchitecture);
	long getOwnerId() const;
	void setOwnerId(long ownerId);
	std::vector<std::string> getPhysicalProcessorModels() const;
	void setPhysicalProcessorModels(const std::vector<std::string> &physicalProcessorModels);
	float getMinimumMemorySize() const;
	void setMinimumMemorySize(float minimumMemorySize);
	int getMinimumEniQuantity() const;
	void setMinimumEniQuantity(int minimumEniQuantity);
	std::string getInstanceFamilyLevel() const;
	void setInstanceFamilyLevel(const std::string &instanceFamilyLevel);
	int getMinimumQueuePairNumber() const;
	void setMinimumQueuePairNumber(int minimumQueuePairNumber);
	int getMinimumLocalStorageAmount() const;
	void setMinimumLocalStorageAmount(int minimumLocalStorageAmount);
	long getMaxResults() const;
	void setMaxResults(long maxResults);
	std::string getPhysicalProcessorModel() const;
	void setPhysicalProcessorModel(const std::string &physicalProcessorModel);
	float getMaximumCpuTurboFrequency() const;
	void setMaximumCpuTurboFrequency(float maximumCpuTurboFrequency);
	std::vector<std::string> getInstanceTypes() const;
	void setInstanceTypes(const std::vector<std::string> &instanceTypes);
	long getMinimumInstancePpsRx() const;
	void setMinimumInstancePpsRx(long minimumInstancePpsRx);
	int getMinimumEniIpv6AddressQuantity() const;
	void setMinimumEniIpv6AddressQuantity(int minimumEniIpv6AddressQuantity);
	int getMinimumEriQuantity() const;
	void setMinimumEriQuantity(int minimumEriQuantity);
	int getMinimumDiskQuantity() const;
	void setMinimumDiskQuantity(int minimumDiskQuantity);
	float getMinimumCpuTurboFrequency() const;
	void setMinimumCpuTurboFrequency(float minimumCpuTurboFrequency);
	std::string getNextToken() const;
	void setNextToken(const std::string &nextToken);
	int getMinimumInstanceBandwidthRx() const;
	void setMinimumInstanceBandwidthRx(int minimumInstanceBandwidthRx);
	float getMinimumCpuSpeedFrequency() const;
	void setMinimumCpuSpeedFrequency(float minimumCpuSpeedFrequency);
	std::string getNvmeSupport() const;
	void setNvmeSupport(const std::string &nvmeSupport);
	std::string getResourceOwnerAccount() const;
	void setResourceOwnerAccount(const std::string &resourceOwnerAccount);
	std::string getOwnerAccount() const;
	void setOwnerAccount(const std::string &ownerAccount);
	int getMinimumInitialCredit() const;
	void setMinimumInitialCredit(int minimumInitialCredit);
	std::string getInstanceTypeFamily() const;
	void setInstanceTypeFamily(const std::string &instanceTypeFamily);
	int getMinimumEniPrivateIpAddressQuantity() const;
	void setMinimumEniPrivateIpAddressQuantity(int minimumEniPrivateIpAddressQuantity);
	std::vector<std::string> getGpuSpecs() const;
	void setGpuSpecs(const std::vector<std::string> &gpuSpecs);
	long getMinimumLocalStorageCapacity() const;
	void setMinimumLocalStorageCapacity(long minimumLocalStorageCapacity);

private:
	std::string gPUSpec_;
	long resourceOwnerId_;
	int maximumCpuCoreCount_;
	int maximumGPUAmount_;
	std::string localStorageCategory_;
	bool supportHotModify_;
	float maximumMemorySize_;
	std::string instanceCategory_;
	long minimumInstancePpsTx_;
	int minimumCpuCoreCount_;
	std::vector<std::string> localStorageCategories_;
	int minimumPrimaryEniQueueNumber_;
	std::vector<std::string> instanceTypeFamilies_;
	int minimumBaselineCredit_;
	int minimumSecondaryEniQueueNumber_;
	std::vector<std::string> cpuArchitectures_;
	int minimumInstanceBandwidthTx_;
	std::vector<std::string> instanceCategories_;
	int minimumGPUAmount_;
	float maximumCpuSpeedFrequency_;
	std::string cpuArchitecture_;
	long ownerId_;
	std::vector<std::string> physicalProcessorModels_;
	float minimumMemorySize_;
	int minimumEniQuantity_;
	std::string instanceFamilyLevel_;
	int minimumQueuePairNumber_;
	int minimumLocalStorageAmount_;
	long maxResults_;
	std::string physicalProcessorModel_;
	float maximumCpuTurboFrequency_;
	std::vector<std::string> instanceTypes_;
	long minimumInstancePpsRx_;
	int minimumEniIpv6AddressQuantity_;
	int minimumEriQuantity_;
	int minimumDiskQuantity_;
	float minimumCpuTurboFrequency_;
	std::string nextToken_;
	int minimumInstanceBandwidthRx_;
	float minimumCpuSpeedFrequency_;
	std::string nvmeSupport_;
	std::string resourceOwnerAccount_;
	std::string ownerAccount_;
	int minimumInitialCredit_;
	std::string instanceTypeFamily_;
	int minimumEniPrivateIpAddressQuantity_;
	std::vector<std::string> gpuSpecs_;
	long minimumLocalStorageCapacity_;
};
} // namespace Model
} // namespace Ecs
} // namespace AlibabaCloud
#endif // !ALIBABACLOUD_ECS_MODEL_DESCRIBEINSTANCETYPESREQUEST_H_
