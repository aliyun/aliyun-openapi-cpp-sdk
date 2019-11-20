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

#ifndef ALIBABACLOUD_ECS_MODEL_DESCRIBEINSTANCESRESULT_H_
#define ALIBABACLOUD_ECS_MODEL_DESCRIBEINSTANCESRESULT_H_

#include <string>
#include <vector>
#include <utility>
#include <alibabacloud/core/ServiceResult.h>
#include <alibabacloud/ecs/EcsExport.h>

namespace AlibabaCloud
{
	namespace Ecs
	{
		namespace Model
		{
			class ALIBABACLOUD_ECS_EXPORT DescribeInstancesResult : public ServiceResult
			{
			public:
				struct Instance
				{
					struct VpcAttributes
					{
						std::vector<std::string> privateIpAddress;
						std::string vpcId;
						std::string vSwitchId;
						std::string natIpAddress;
					};
					struct EipAddress
					{
						std::string allocationId;
						int bandwidth;
						std::string ipAddress;
						bool isSupportUnassociate;
						std::string internetChargeType;
					};
					struct DedicatedHostAttribute
					{
						std::string dedicatedHostId;
						std::string dedicatedHostName;
					};
					struct EcsCapacityReservationAttr
					{
						std::string capacityReservationPreference;
						std::string capacityReservationId;
					};
					struct DedicatedInstanceAttribute
					{
						std::string tenancy;
						std::string affinity;
					};
					struct CpuOptions
					{
						int threadsPerCore;
						std::string numa;
						int coreCount;
					};
					struct NetworkInterface
					{
						std::string primaryIpAddress;
						std::string networkInterfaceId;
						std::string macAddress;
					};
					struct LockReason
					{
						std::string lockReason;
						std::string lockMsg;
					};
					struct Tag
					{
						std::string tagKey;
						std::string tagValue;
					};
					std::string resourceGroupId;
					int memory;
					std::string instanceChargeType;
					int cpu;
					std::string oSName;
					std::string instanceNetworkType;
					std::vector<std::string> innerIpAddress;
					std::string expiredTime;
					EipAddress eipAddress;
					std::string imageId;
					std::vector<Instance::Tag> tags;
					std::string hostName;
					std::string vlanId;
					std::string status;
					std::string instanceId;
					std::string stoppedMode;
					CpuOptions cpuOptions;
					std::string startTime;
					bool deletionProtection;
					VpcAttributes vpcAttributes;
					std::vector<std::string> securityGroupIds;
					std::string internetChargeType;
					std::string instanceName;
					std::string deploymentSetId;
					int internetMaxBandwidthOut;
					std::string serialNumber;
					std::string oSType;
					std::string creationTime;
					std::string autoReleaseTime;
					std::string description;
					long localStorageCapacity;
					std::string instanceTypeFamily;
					DedicatedInstanceAttribute dedicatedInstanceAttribute;
					int localStorageAmount;
					std::vector<std::string> publicIpAddress;
					std::string gPUSpec;
					std::vector<Instance::NetworkInterface> networkInterfaces;
					float spotPriceLimit;
					std::string saleCycle;
					bool deviceAvailable;
					std::string instanceType;
					std::string oSNameEn;
					std::string spotStrategy;
					std::string keyPairName;
					bool ioOptimized;
					std::string zoneId;
					std::string clusterId;
					std::string hpcClusterId;
					EcsCapacityReservationAttr ecsCapacityReservationAttr;
					DedicatedHostAttribute dedicatedHostAttribute;
					int gPUAmount;
					std::vector<Instance::LockReason> operationLocks;
					std::vector<std::string> rdmaIpAddress;
					int internetMaxBandwidthIn;
					bool recyclable;
					std::string regionId;
					std::string creditSpecification;
				};


				DescribeInstancesResult();
				explicit DescribeInstancesResult(const std::string &payload);
				~DescribeInstancesResult();
				std::vector<Instance> getInstances()const;
				int getTotalCount()const;
				int getPageSize()const;
				int getPageNumber()const;

			protected:
				void parse(const std::string &payload);
			private:
				std::vector<Instance> instances_;
				int totalCount_;
				int pageSize_;
				int pageNumber_;

			};
		}
	}
}
#endif // !ALIBABACLOUD_ECS_MODEL_DESCRIBEINSTANCESRESULT_H_