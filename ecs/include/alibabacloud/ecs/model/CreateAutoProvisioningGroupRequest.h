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

#ifndef ALIBABACLOUD_ECS_MODEL_CREATEAUTOPROVISIONINGGROUPREQUEST_H_
#define ALIBABACLOUD_ECS_MODEL_CREATEAUTOPROVISIONINGGROUPREQUEST_H_

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
			class ALIBABACLOUD_ECS_EXPORT CreateAutoProvisioningGroupRequest : public RpcServiceRequest
			{
				struct LaunchTemplateConfig
				{
					std::string instanceType;
					double maxPrice;
					std::string vSwitchId;
					double weightedCapacity;
					int priority;
				};

			public:
				CreateAutoProvisioningGroupRequest();
				~CreateAutoProvisioningGroupRequest();

				long getResourceOwnerId()const;
				void setResourceOwnerId(long resourceOwnerId);
				long getCallerParentId()const;
				void setCallerParentId(long callerParentId);
				std::string getAutoProvisioningGroupType()const;
				void setAutoProvisioningGroupType(const std::string& autoProvisioningGroupType);
				bool getProxy_original_security_transport()const;
				void setProxy_original_security_transport(bool proxy_original_security_transport);
				std::string getDescription()const;
				void setDescription(const std::string& description);
				std::string getProxy_original_source_ip()const;
				void setProxy_original_source_ip(const std::string& proxy_original_source_ip);
				bool getTerminateInstancesWithExpiration()const;
				void setTerminateInstancesWithExpiration(bool terminateInstancesWithExpiration);
				std::string getOwnerIdLoginEmail()const;
				void setOwnerIdLoginEmail(const std::string& ownerIdLoginEmail);
				std::string getCallerType()const;
				void setCallerType(const std::string& callerType);
				std::string getAccessKeyId()const;
				void setAccessKeyId(const std::string& accessKeyId);
				std::string getResourceGroupId()const;
				void setResourceGroupId(const std::string& resourceGroupId);
				std::string getSpotAllocationStrategy()const;
				void setSpotAllocationStrategy(const std::string& spotAllocationStrategy);
				std::string getSecurityToken()const;
				void setSecurityToken(const std::string& securityToken);
				std::string getRegionId()const;
				void setRegionId(const std::string& regionId);
				bool getEnable()const;
				void setEnable(bool enable);
				std::string getRequestContent()const;
				void setRequestContent(const std::string& requestContent);
				bool getTerminateInstances()const;
				void setTerminateInstances(bool terminateInstances);
				std::string getCallerBidEmail()const;
				void setCallerBidEmail(const std::string& callerBidEmail);
				std::string getPayAsYouGoAllocationStrategy()const;
				void setPayAsYouGoAllocationStrategy(const std::string& payAsYouGoAllocationStrategy);
				std::string getDefaultTargetCapacityType()const;
				void setDefaultTargetCapacityType(const std::string& defaultTargetCapacityType);
				std::string getExcessCapacityTerminationPolicy()const;
				void setExcessCapacityTerminationPolicy(const std::string& excessCapacityTerminationPolicy);
				std::vector<LaunchTemplateConfig> getLaunchTemplateConfig()const;
				void setLaunchTemplateConfig(const std::vector<LaunchTemplateConfig>& launchTemplateConfig);
				std::string getValidUntil()const;
				void setValidUntil(const std::string& validUntil);
				std::string getCallerUidEmail()const;
				void setCallerUidEmail(const std::string& callerUidEmail);
				long getCallerUid()const;
				void setCallerUid(long callerUid);
				std::string getApp_ip()const;
				void setApp_ip(const std::string& app_ip);
				std::string getSpotInstanceInterruptionBehavior()const;
				void setSpotInstanceInterruptionBehavior(const std::string& spotInstanceInterruptionBehavior);
				std::string getLaunchTemplateId()const;
				void setLaunchTemplateId(const std::string& launchTemplateId);
				std::string getResourceOwnerAccount()const;
				void setResourceOwnerAccount(const std::string& resourceOwnerAccount);
				std::string getOwnerAccount()const;
				void setOwnerAccount(const std::string& ownerAccount);
				int getSpotInstancePoolsToUseCount()const;
				void setSpotInstancePoolsToUseCount(int spotInstancePoolsToUseCount);
				std::string getCallerBid()const;
				void setCallerBid(const std::string& callerBid);
				long getOwnerId()const;
				void setOwnerId(long ownerId);
				std::string getLaunchTemplateVersion()const;
				void setLaunchTemplateVersion(const std::string& launchTemplateVersion);
				bool getProxy_trust_transport_info()const;
				void setProxy_trust_transport_info(bool proxy_trust_transport_info);
				bool getAk_mfa_present()const;
				void setAk_mfa_present(bool ak_mfa_present);
				bool getSecurity_transport()const;
				void setSecurity_transport(bool security_transport);
				std::string getPayAsYouGoTargetCapacity()const;
				void setPayAsYouGoTargetCapacity(const std::string& payAsYouGoTargetCapacity);
				std::string getRequestId()const;
				void setRequestId(const std::string& requestId);
				std::string getAkProxy()const;
				void setAkProxy(const std::string& akProxy);
				std::string getTotalTargetCapacity()const;
				void setTotalTargetCapacity(const std::string& totalTargetCapacity);
				std::string getSpotTargetCapacity()const;
				void setSpotTargetCapacity(const std::string& spotTargetCapacity);
				std::string getValidFrom()const;
				void setValidFrom(const std::string& validFrom);
				std::string getAutoProvisioningGroupName()const;
				void setAutoProvisioningGroupName(const std::string& autoProvisioningGroupName);
				float getMaxSpotPrice()const;
				void setMaxSpotPrice(float maxSpotPrice);

            private:
				long resourceOwnerId_;
				long callerParentId_;
				std::string autoProvisioningGroupType_;
				bool proxy_original_security_transport_;
				std::string description_;
				std::string proxy_original_source_ip_;
				bool terminateInstancesWithExpiration_;
				std::string ownerIdLoginEmail_;
				std::string callerType_;
				std::string accessKeyId_;
				std::string resourceGroupId_;
				std::string spotAllocationStrategy_;
				std::string securityToken_;
				std::string regionId_;
				bool enable_;
				std::string requestContent_;
				bool terminateInstances_;
				std::string callerBidEmail_;
				std::string payAsYouGoAllocationStrategy_;
				std::string defaultTargetCapacityType_;
				std::string excessCapacityTerminationPolicy_;
				std::vector<LaunchTemplateConfig> launchTemplateConfig_;
				std::string validUntil_;
				std::string callerUidEmail_;
				long callerUid_;
				std::string app_ip_;
				std::string spotInstanceInterruptionBehavior_;
				std::string launchTemplateId_;
				std::string resourceOwnerAccount_;
				std::string ownerAccount_;
				int spotInstancePoolsToUseCount_;
				std::string callerBid_;
				long ownerId_;
				std::string launchTemplateVersion_;
				bool proxy_trust_transport_info_;
				bool ak_mfa_present_;
				bool security_transport_;
				std::string payAsYouGoTargetCapacity_;
				std::string requestId_;
				std::string akProxy_;
				std::string totalTargetCapacity_;
				std::string spotTargetCapacity_;
				std::string validFrom_;
				std::string autoProvisioningGroupName_;
				float maxSpotPrice_;

			};
		}
	}
}
#endif // !ALIBABACLOUD_ECS_MODEL_CREATEAUTOPROVISIONINGGROUPREQUEST_H_