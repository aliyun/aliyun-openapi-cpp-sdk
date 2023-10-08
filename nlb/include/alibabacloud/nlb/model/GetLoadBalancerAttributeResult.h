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

#ifndef ALIBABACLOUD_NLB_MODEL_GETLOADBALANCERATTRIBUTERESULT_H_
#define ALIBABACLOUD_NLB_MODEL_GETLOADBALANCERATTRIBUTERESULT_H_

#include <string>
#include <vector>
#include <utility>
#include <alibabacloud/core/ServiceResult.h>
#include <alibabacloud/nlb/NlbExport.h>

namespace AlibabaCloud
{
	namespace Nlb
	{
		namespace Model
		{
			class ALIBABACLOUD_NLB_EXPORT GetLoadBalancerAttributeResult : public ServiceResult
			{
			public:
				struct LoadBalancerBillingConfig
				{
					int internetBandwidth;
					std::string payType;
					std::string internetChargeType;
				};
				struct DeletionProtectionConfig
				{
					bool enabled;
					std::string enabledTime;
					std::string reason;
				};
				struct ModificationProtectionConfig
				{
					std::string status;
					std::string enabledTime;
					std::string reason;
				};
				struct OperationLock
				{
					std::string lockReason;
					std::string lockType;
				};
				struct ZoneMapping
				{
					struct LoadBalancerAddress
					{
						std::string eniId;
						std::string publicIPv4Address;
						std::string allocationId;
						std::string privateIPv4HcStatus;
						std::string privateIPv6HcStatus;
						std::string ipv6Address;
						std::string privateIPv4Address;
					};
					std::string status;
					std::string zoneId;
					std::string vSwitchId;
					std::string eipType;
					std::vector<ZoneMapping::LoadBalancerAddress> loadBalancerAddresses;
				};
				struct Tag
				{
					std::string tagKey;
					std::string tagValue;
				};


				GetLoadBalancerAttributeResult();
				explicit GetLoadBalancerAttributeResult(const std::string &payload);
				~GetLoadBalancerAttributeResult();
				std::string getAddressIpVersion()const;
				std::string getMessage()const;
				std::string getResourceGroupId()const;
				int getCps()const;
				std::string getLoadBalancerId()const;
				std::string getDynamicMessage()const;
				std::vector<ZoneMapping> getZoneMappings()const;
				std::string getDNSName()const;
				bool getSuccess()const;
				std::string getIpv6AddressType()const;
				bool getCrossZoneEnabled()const;
				std::string getLoadBalancerType()const;
				long getCapacityUnitCount()const;
				DeletionProtectionConfig getDeletionProtectionConfig()const;
				std::string getSysSecurityGroupId()const;
				int getHttpStatusCode()const;
				std::string getBandwidthPackageId()const;
				std::string getDynamicCode()const;
				std::vector<Tag> getTags()const;
				LoadBalancerBillingConfig getLoadBalancerBillingConfig()const;
				std::string getCreateTime()const;
				ModificationProtectionConfig getModificationProtectionConfig()const;
				std::vector<std::string> getSecurityGroupIds()const;
				std::string getCode()const;
				std::vector<OperationLock> getOperationLocks()const;
				std::string getLoadBalancerName()const;
				std::string getVpcId()const;
				bool getTrafficAffinityEnabled()const;
				std::string getRegionId()const;
				std::string getAddressType()const;
				std::string getLoadBalancerStatus()const;
				std::string getLoadBalancerBusinessStatus()const;

			protected:
				void parse(const std::string &payload);
			private:
				std::string addressIpVersion_;
				std::string message_;
				std::string resourceGroupId_;
				int cps_;
				std::string loadBalancerId_;
				std::string dynamicMessage_;
				std::vector<ZoneMapping> zoneMappings_;
				std::string dNSName_;
				bool success_;
				std::string ipv6AddressType_;
				bool crossZoneEnabled_;
				std::string loadBalancerType_;
				long capacityUnitCount_;
				DeletionProtectionConfig deletionProtectionConfig_;
				std::string sysSecurityGroupId_;
				int httpStatusCode_;
				std::string bandwidthPackageId_;
				std::string dynamicCode_;
				std::vector<Tag> tags_;
				LoadBalancerBillingConfig loadBalancerBillingConfig_;
				std::string createTime_;
				ModificationProtectionConfig modificationProtectionConfig_;
				std::vector<std::string> securityGroupIds_;
				std::string code_;
				std::vector<OperationLock> operationLocks_;
				std::string loadBalancerName_;
				std::string vpcId_;
				bool trafficAffinityEnabled_;
				std::string regionId_;
				std::string addressType_;
				std::string loadBalancerStatus_;
				std::string loadBalancerBusinessStatus_;

			};
		}
	}
}
#endif // !ALIBABACLOUD_NLB_MODEL_GETLOADBALANCERATTRIBUTERESULT_H_