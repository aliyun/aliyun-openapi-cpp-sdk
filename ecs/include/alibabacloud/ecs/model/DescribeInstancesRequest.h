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

#ifndef ALIBABACLOUD_ECS_MODEL_DESCRIBEINSTANCESREQUEST_H_
#define ALIBABACLOUD_ECS_MODEL_DESCRIBEINSTANCESREQUEST_H_

#include <string>
#include <vector>
#include <alibabacloud/core/RpcServiceRequest.h>
#include <alibabacloud/ecs/EcsExport.h>

namespace AlibabaCloud
{
	namespace Ecs
	{
		namespace Model
		{
			class ALIBABACLOUD_ECS_EXPORT DescribeInstancesRequest : public RpcServiceRequest
			{
				struct Tag
				{
					std::string value;
					std::string key;
				};

			public:
				DescribeInstancesRequest();
				~DescribeInstancesRequest();

				std::string getInnerIpAddresses()const;
				void setInnerIpAddresses(const std::string& innerIpAddresses);
				long getResourceOwnerId()const;
				void setResourceOwnerId(long resourceOwnerId);
				std::string getImageId()const;
				void setImageId(const std::string& imageId);
				std::string getPrivateIpAddresses()const;
				void setPrivateIpAddresses(const std::string& privateIpAddresses);
				std::string getHpcClusterId()const;
				void setHpcClusterId(const std::string& hpcClusterId);
				std::string getFilter2Value()const;
				void setFilter2Value(const std::string& filter2Value);
				std::string getFilter4Value()const;
				void setFilter4Value(const std::string& filter4Value);
				bool getIoOptimized()const;
				void setIoOptimized(bool ioOptimized);
				std::string getSecurityGroupId()const;
				void setSecurityGroupId(const std::string& securityGroupId);
				std::string getKeyPairName()const;
				void setKeyPairName(const std::string& keyPairName);
				std::string getFilter4Key()const;
				void setFilter4Key(const std::string& filter4Key);
				int getPageNumber()const;
				void setPageNumber(int pageNumber);
				std::string getSourceRegionId()const;
				void setSourceRegionId(const std::string& sourceRegionId);
				std::string getResourceGroupId()const;
				void setResourceGroupId(const std::string& resourceGroupId);
				std::string getLockReason()const;
				void setLockReason(const std::string& lockReason);
				std::string getFilter1Key()const;
				void setFilter1Key(const std::string& filter1Key);
				std::string getRegionId()const;
				void setRegionId(const std::string& regionId);
				std::string getRdmaIpAddresses()const;
				void setRdmaIpAddresses(const std::string& rdmaIpAddresses);
				bool getDeviceAvailable()const;
				void setDeviceAvailable(bool deviceAvailable);
				int getPageSize()const;
				void setPageSize(int pageSize);
				std::string getPublicIpAddresses()const;
				void setPublicIpAddresses(const std::string& publicIpAddresses);
				std::string getInstanceType()const;
				void setInstanceType(const std::string& instanceType);
				std::vector<Tag> getTag()const;
				void setTag(const std::vector<Tag>& tag);
				std::string getInstanceChargeType()const;
				void setInstanceChargeType(const std::string& instanceChargeType);
				std::string getFilter3Value()const;
				void setFilter3Value(const std::string& filter3Value);
				bool getDryRun()const;
				void setDryRun(bool dryRun);
				std::string getResourceOwnerAccount()const;
				void setResourceOwnerAccount(const std::string& resourceOwnerAccount);
				std::string getOwnerAccount()const;
				void setOwnerAccount(const std::string& ownerAccount);
				std::string getInstanceTypeFamily()const;
				void setInstanceTypeFamily(const std::string& instanceTypeFamily);
				std::string getFilter1Value()const;
				void setFilter1Value(const std::string& filter1Value);
				bool getNeedSaleCycle()const;
				void setNeedSaleCycle(bool needSaleCycle);
				std::string getFilter2Key()const;
				void setFilter2Key(const std::string& filter2Key);
				long getOwnerId()const;
				void setOwnerId(long ownerId);
				std::string getVSwitchId()const;
				void setVSwitchId(const std::string& vSwitchId);
				std::string getEipAddresses()const;
				void setEipAddresses(const std::string& eipAddresses);
				std::string getInstanceName()const;
				void setInstanceName(const std::string& instanceName);
				std::string getInstanceIds()const;
				void setInstanceIds(const std::string& instanceIds);
				std::string getInternetChargeType()const;
				void setInternetChargeType(const std::string& internetChargeType);
				std::string getVpcId()const;
				void setVpcId(const std::string& vpcId);
				std::string getZoneId()const;
				void setZoneId(const std::string& zoneId);
				std::string getFilter3Key()const;
				void setFilter3Key(const std::string& filter3Key);
				std::string getInstanceNetworkType()const;
				void setInstanceNetworkType(const std::string& instanceNetworkType);
				std::string getStatus()const;
				void setStatus(const std::string& status);

            private:
				std::string innerIpAddresses_;
				long resourceOwnerId_;
				std::string imageId_;
				std::string privateIpAddresses_;
				std::string hpcClusterId_;
				std::string filter2Value_;
				std::string filter4Value_;
				bool ioOptimized_;
				std::string securityGroupId_;
				std::string keyPairName_;
				std::string filter4Key_;
				int pageNumber_;
				std::string sourceRegionId_;
				std::string resourceGroupId_;
				std::string lockReason_;
				std::string filter1Key_;
				std::string regionId_;
				std::string rdmaIpAddresses_;
				bool deviceAvailable_;
				int pageSize_;
				std::string publicIpAddresses_;
				std::string instanceType_;
				std::vector<Tag> tag_;
				std::string instanceChargeType_;
				std::string filter3Value_;
				bool dryRun_;
				std::string resourceOwnerAccount_;
				std::string ownerAccount_;
				std::string instanceTypeFamily_;
				std::string filter1Value_;
				bool needSaleCycle_;
				std::string filter2Key_;
				long ownerId_;
				std::string vSwitchId_;
				std::string eipAddresses_;
				std::string instanceName_;
				std::string instanceIds_;
				std::string internetChargeType_;
				std::string vpcId_;
				std::string zoneId_;
				std::string filter3Key_;
				std::string instanceNetworkType_;
				std::string status_;

			};
		}
	}
}
#endif // !ALIBABACLOUD_ECS_MODEL_DESCRIBEINSTANCESREQUEST_H_