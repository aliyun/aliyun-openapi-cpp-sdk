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

#ifndef ALIBABACLOUD_ECS_MODEL_DESCRIBEINSTANCEATTRIBUTERESULT_H_
#define ALIBABACLOUD_ECS_MODEL_DESCRIBEINSTANCEATTRIBUTERESULT_H_

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
			class ALIBABACLOUD_ECS_EXPORT DescribeInstanceAttributeResult : public ServiceResult
			{
			public:
				struct VpcAttributes
				{
					std::vector<std::string> privateIpAddress;
					std::string vpcId;
					std::string vSwitchId;
					std::string natIpAddress;
				};
				struct EipAddress
				{
					int bandwidth;
					std::string allocationId;
					std::string ipAddress;
					std::string internetChargeType;
				};
				struct DedicatedHostAttribute
				{
					std::string dedicatedHostId;
					std::string dedicatedHostName;
				};
				struct LockReason
				{
					std::string lockReason;
				};


				DescribeInstanceAttributeResult();
				explicit DescribeInstanceAttributeResult(const std::string &payload);
				~DescribeInstanceAttributeResult();
				std::string getDescription()const;
				bool getEnableNetworkEncryption()const;
				int getMemory()const;
				std::string getInstanceChargeType()const;
				int getCpu()const;
				std::string getInstanceNetworkType()const;
				std::vector<std::string> getPublicIpAddress()const;
				std::vector<std::string> getInnerIpAddress()const;
				bool getEnableJumboFrame()const;
				std::string getExpiredTime()const;
				EipAddress getEipAddress()const;
				std::string getImageId()const;
				std::string getInstanceType()const;
				std::string getVlanId()const;
				std::string getHostName()const;
				std::string getStatus()const;
				std::string getIoOptimized()const;
				std::string getZoneId()const;
				std::string getClusterId()const;
				std::string getInstanceId()const;
				std::string getStoppedMode()const;
				DedicatedHostAttribute getDedicatedHostAttribute()const;
				VpcAttributes getVpcAttributes()const;
				std::vector<std::string> getSecurityGroupIds()const;
				std::vector<LockReason> getOperationLocks()const;
				std::string getInternetChargeType()const;
				std::string getInstanceName()const;
				int getInternetMaxBandwidthOut()const;
				std::string getSerialNumber()const;
				int getInternetMaxBandwidthIn()const;
				std::string getCreationTime()const;
				std::string getRegionId()const;
				std::string getCreditSpecification()const;

			protected:
				void parse(const std::string &payload);
			private:
				std::string description_;
				bool enableNetworkEncryption_;
				int memory_;
				std::string instanceChargeType_;
				int cpu_;
				std::string instanceNetworkType_;
				std::vector<std::string> publicIpAddress_;
				std::vector<std::string> innerIpAddress_;
				bool enableJumboFrame_;
				std::string expiredTime_;
				EipAddress eipAddress_;
				std::string imageId_;
				std::string instanceType_;
				std::string vlanId_;
				std::string hostName_;
				std::string status_;
				std::string ioOptimized_;
				std::string zoneId_;
				std::string clusterId_;
				std::string instanceId_;
				std::string stoppedMode_;
				DedicatedHostAttribute dedicatedHostAttribute_;
				VpcAttributes vpcAttributes_;
				std::vector<std::string> securityGroupIds_;
				std::vector<LockReason> operationLocks_;
				std::string internetChargeType_;
				std::string instanceName_;
				int internetMaxBandwidthOut_;
				std::string serialNumber_;
				int internetMaxBandwidthIn_;
				std::string creationTime_;
				std::string regionId_;
				std::string creditSpecification_;

			};
		}
	}
}
#endif // !ALIBABACLOUD_ECS_MODEL_DESCRIBEINSTANCEATTRIBUTERESULT_H_