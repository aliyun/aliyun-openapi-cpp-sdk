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
					std::string allocationId;
					int bandwidth;
					std::string ipAddress;
					std::string internetChargeType;
				};
				struct LockReason
				{
					std::string lockReason;
				};


				DescribeInstanceAttributeResult();
				explicit DescribeInstanceAttributeResult(const std::string &payload);
				~DescribeInstanceAttributeResult();
				std::string getDescription()const;
				void setDescription(const std::string& description);
				int getMemory()const;
				void setMemory(int memory);
				std::string getInstanceChargeType()const;
				void setInstanceChargeType(const std::string& instanceChargeType);
				int getCpu()const;
				void setCpu(int cpu);
				std::string getInstanceNetworkType()const;
				void setInstanceNetworkType(const std::string& instanceNetworkType);
				std::vector<std::string> getPublicIpAddress()const;
				void setPublicIpAddress(const std::vector<std::string>& publicIpAddress);
				std::vector<std::string> getInnerIpAddress()const;
				void setInnerIpAddress(const std::vector<std::string>& innerIpAddress);
				std::string getExpiredTime()const;
				void setExpiredTime(const std::string& expiredTime);
				std::vector<EipAddress> getEipAddress()const;
				void setEipAddress(const std::vector<EipAddress>& eipAddress);
				std::string getImageId()const;
				void setImageId(const std::string& imageId);
				std::string getInstanceType()const;
				void setInstanceType(const std::string& instanceType);
				std::string getHostName()const;
				void setHostName(const std::string& hostName);
				std::string getVlanId()const;
				void setVlanId(const std::string& vlanId);
				std::string getStatus()const;
				void setStatus(const std::string& status);
				std::string getIoOptimized()const;
				void setIoOptimized(const std::string& ioOptimized);
				std::string getZoneId()const;
				void setZoneId(const std::string& zoneId);
				std::string getInstanceId()const;
				void setInstanceId(const std::string& instanceId);
				std::string getClusterId()const;
				void setClusterId(const std::string& clusterId);
				std::string getStoppedMode()const;
				void setStoppedMode(const std::string& stoppedMode);
				std::vector<VpcAttributes> getVpcAttributes()const;
				void setVpcAttributes(const std::vector<VpcAttributes>& vpcAttributes);
				std::vector<std::string> getSecurityGroupIds()const;
				void setSecurityGroupIds(const std::vector<std::string>& securityGroupIds);
				std::vector<LockReason> getOperationLocks()const;
				void setOperationLocks(const std::vector<LockReason>& operationLocks);
				std::string getInternetChargeType()const;
				void setInternetChargeType(const std::string& internetChargeType);
				std::string getInstanceName()const;
				void setInstanceName(const std::string& instanceName);
				int getInternetMaxBandwidthOut()const;
				void setInternetMaxBandwidthOut(int internetMaxBandwidthOut);
				int getInternetMaxBandwidthIn()const;
				void setInternetMaxBandwidthIn(int internetMaxBandwidthIn);
				std::string getSerialNumber()const;
				void setSerialNumber(const std::string& serialNumber);
				std::string getCreationTime()const;
				void setCreationTime(const std::string& creationTime);
				std::string getRegionId()const;
				void setRegionId(const std::string& regionId);

			protected:
				void parse(const std::string &payload);
			private:
				std::string description_;
				int memory_;
				std::string instanceChargeType_;
				int cpu_;
				std::string instanceNetworkType_;
				std::vector<std::string> publicIpAddress_;
				std::vector<std::string> innerIpAddress_;
				std::string expiredTime_;
				std::vector<EipAddress> eipAddress_;
				std::string imageId_;
				std::string instanceType_;
				std::string hostName_;
				std::string vlanId_;
				std::string status_;
				std::string ioOptimized_;
				std::string zoneId_;
				std::string instanceId_;
				std::string clusterId_;
				std::string stoppedMode_;
				std::vector<VpcAttributes> vpcAttributes_;
				std::vector<std::string> securityGroupIds_;
				std::vector<LockReason> operationLocks_;
				std::string internetChargeType_;
				std::string instanceName_;
				int internetMaxBandwidthOut_;
				int internetMaxBandwidthIn_;
				std::string serialNumber_;
				std::string creationTime_;
				std::string regionId_;

			};
		}
	}
}
#endif // !ALIBABACLOUD_ECS_MODEL_DESCRIBEINSTANCEATTRIBUTERESULT_H_