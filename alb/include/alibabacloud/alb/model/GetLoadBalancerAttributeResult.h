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

#ifndef ALIBABACLOUD_ALB_MODEL_GETLOADBALANCERATTRIBUTERESULT_H_
#define ALIBABACLOUD_ALB_MODEL_GETLOADBALANCERATTRIBUTERESULT_H_

#include <string>
#include <vector>
#include <utility>
#include <alibabacloud/core/ServiceResult.h>
#include <alibabacloud/alb/AlbExport.h>

namespace AlibabaCloud
{
	namespace Alb
	{
		namespace Model
		{
			class ALIBABACLOUD_ALB_EXPORT GetLoadBalancerAttributeResult : public ServiceResult
			{
			public:
				struct AccessLogConfig
				{
					std::string logStore;
					std::string logProject;
				};
				struct DeletionProtectionConfig
				{
					bool enabled;
					std::string enabledTime;
				};
				struct LoadBalancerBillingConfig
				{
					int internetBandwidth;
					std::string payType;
					std::string internetChargeType;
				};
				struct ModificationProtectionConfig
				{
					std::string status;
					std::string reason;
				};
				struct LoadBalancerOperationLock
				{
					std::string lockReason;
					std::string lockType;
				};
				struct Tag
				{
					std::string value;
					std::string key;
				};
				struct ZoneMapping
				{
					struct LoadBalancerAddress
					{
						std::vector<std::string> ipv6LocalAddresses;
						std::string intranetAddress;
						std::string intranetAddressHcStatus;
						std::string address;
						std::vector<std::string> ipv4LocalAddresses;
						std::string allocationId;
						std::string ipv6AddressHcStatus;
						std::string eipType;
						std::string ipv6Address;
					};
					std::string status;
					std::string zoneId;
					std::string vSwitchId;
					std::string allocationId;
					std::string eipType;
					std::vector<ZoneMapping::LoadBalancerAddress> loadBalancerAddresses;
				};
				struct AssociatedResource
				{
					std::string status;
					std::string associatedResourceId;
					std::string associatedMode;
					std::string associatedResourceType;
					std::string policyId;
				};


				GetLoadBalancerAttributeResult();
				explicit GetLoadBalancerAttributeResult(const std::string &payload);
				~GetLoadBalancerAttributeResult();
				bool getServiceManagedEnabled()const;
				std::string getAddressIpVersion()const;
				std::string getLoadBalancerVersion()const;
				std::string getResourceGroupId()const;
				std::vector<std::string> getFeatureLabels()const;
				std::string getLoadBalancerId()const;
				std::vector<ZoneMapping> getZoneMappings()const;
				std::string getDNSName()const;
				std::string getIpv6AddressType()const;
				int getBandwidthCapacity()const;
				DeletionProtectionConfig getDeletionProtectionConfig()const;
				std::string getServiceManagedMode()const;
				std::string getSysSecurityGroupId()const;
				std::string getBandwidthPackageId()const;
				std::vector<Tag> getTags()const;
				bool getBackToOriginRouteEnabled()const;
				std::string getLoadBalancerEdition()const;
				LoadBalancerBillingConfig getLoadBalancerBillingConfig()const;
				std::vector<AssociatedResource> getAssociatedResources()const;
				std::string getCreateTime()const;
				ModificationProtectionConfig getModificationProtectionConfig()const;
				std::vector<std::string> getSecurityGroupIds()const;
				std::string getLoadBalancerName()const;
				AccessLogConfig getAccessLogConfig()const;
				bool getConfigManagedEnabled()const;
				std::string getLoadBalancerBussinessStatus()const;
				std::string getVpcId()const;
				std::string getRegionId()const;
				std::string getAddressAllocatedMode()const;
				std::string getAddressType()const;
				std::string getLoadBalancerStatus()const;
				std::vector<LoadBalancerOperationLock> getLoadBalancerOperationLocks()const;

			protected:
				void parse(const std::string &payload);
			private:
				bool serviceManagedEnabled_;
				std::string addressIpVersion_;
				std::string loadBalancerVersion_;
				std::string resourceGroupId_;
				std::vector<std::string> featureLabels_;
				std::string loadBalancerId_;
				std::vector<ZoneMapping> zoneMappings_;
				std::string dNSName_;
				std::string ipv6AddressType_;
				int bandwidthCapacity_;
				DeletionProtectionConfig deletionProtectionConfig_;
				std::string serviceManagedMode_;
				std::string sysSecurityGroupId_;
				std::string bandwidthPackageId_;
				std::vector<Tag> tags_;
				bool backToOriginRouteEnabled_;
				std::string loadBalancerEdition_;
				LoadBalancerBillingConfig loadBalancerBillingConfig_;
				std::vector<AssociatedResource> associatedResources_;
				std::string createTime_;
				ModificationProtectionConfig modificationProtectionConfig_;
				std::vector<std::string> securityGroupIds_;
				std::string loadBalancerName_;
				AccessLogConfig accessLogConfig_;
				bool configManagedEnabled_;
				std::string loadBalancerBussinessStatus_;
				std::string vpcId_;
				std::string regionId_;
				std::string addressAllocatedMode_;
				std::string addressType_;
				std::string loadBalancerStatus_;
				std::vector<LoadBalancerOperationLock> loadBalancerOperationLocks_;

			};
		}
	}
}
#endif // !ALIBABACLOUD_ALB_MODEL_GETLOADBALANCERATTRIBUTERESULT_H_