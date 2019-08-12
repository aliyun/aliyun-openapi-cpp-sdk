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

#ifndef ALIBABACLOUD_ECS_MODEL_ALLOCATEDEDICATEDHOSTSREQUEST_H_
#define ALIBABACLOUD_ECS_MODEL_ALLOCATEDEDICATEDHOSTSREQUEST_H_

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
			class ALIBABACLOUD_ECS_EXPORT AllocateDedicatedHostsRequest : public RpcServiceRequest
			{
				struct Tag
				{
					std::string key;
					std::string value;
				};

			public:
				AllocateDedicatedHostsRequest();
				~AllocateDedicatedHostsRequest();

				bool getResourceOwnerId()const;
				void setResourceOwnerId(bool resourceOwnerId);
				std::string getClientToken()const;
				void setClientToken(const std::string& clientToken);
				bool getCallerParentId()const;
				void setCallerParentId(bool callerParentId);
				bool getProxy_original_security_transport()const;
				void setProxy_original_security_transport(bool proxy_original_security_transport);
				std::string getDescription()const;
				void setDescription(const std::string& description);
				std::string getProxy_original_source_ip()const;
				void setProxy_original_source_ip(const std::string& proxy_original_source_ip);
				std::string getOwnerIdLoginEmail()const;
				void setOwnerIdLoginEmail(const std::string& ownerIdLoginEmail);
				std::string getCallerType()const;
				void setCallerType(const std::string& callerType);
				std::string getAccessKeyId()const;
				void setAccessKeyId(const std::string& accessKeyId);
				std::string getSourceRegionId()const;
				void setSourceRegionId(const std::string& sourceRegionId);
				std::string getResourceGroupId()const;
				void setResourceGroupId(const std::string& resourceGroupId);
				std::string getSecurityToken()const;
				void setSecurityToken(const std::string& securityToken);
				std::string getRegionId()const;
				void setRegionId(const std::string& regionId);
				bool getEnable()const;
				void setEnable(bool enable);
				std::string getRequestContent()const;
				void setRequestContent(const std::string& requestContent);
				std::string getActionOnMaintenance()const;
				void setActionOnMaintenance(const std::string& actionOnMaintenance);
				std::string getCallerBidEmail()const;
				void setCallerBidEmail(const std::string& callerBidEmail);
				std::vector<Tag> getTag()const;
				void setTag(const std::vector<Tag>& tag);
				std::string getDedicatedHostType()const;
				void setDedicatedHostType(const std::string& dedicatedHostType);
				std::string getCallerUidEmail()const;
				void setCallerUidEmail(const std::string& callerUidEmail);
				bool getCallerUid()const;
				void setCallerUid(bool callerUid);
				std::string getApp_ip()const;
				void setApp_ip(const std::string& app_ip);
				int getAutoRenewPeriod()const;
				void setAutoRenewPeriod(int autoRenewPeriod);
				int getPeriod()const;
				void setPeriod(int period);
				int getQuantity()const;
				void setQuantity(int quantity);
				std::string getDedicatedHostName()const;
				void setDedicatedHostName(const std::string& dedicatedHostName);
				std::string getResourceOwnerAccount()const;
				void setResourceOwnerAccount(const std::string& resourceOwnerAccount);
				std::string getOwnerAccount()const;
				void setOwnerAccount(const std::string& ownerAccount);
				std::string getAutoReleaseTime()const;
				void setAutoReleaseTime(const std::string& autoReleaseTime);
				std::string getCallerBid()const;
				void setCallerBid(const std::string& callerBid);
				bool getOwnerId()const;
				void setOwnerId(bool ownerId);
				bool getProxy_trust_transport_info()const;
				void setProxy_trust_transport_info(bool proxy_trust_transport_info);
				bool getAk_mfa_present()const;
				void setAk_mfa_present(bool ak_mfa_present);
				bool getSecurity_transport()const;
				void setSecurity_transport(bool security_transport);
				std::string getPeriodUnit()const;
				void setPeriodUnit(const std::string& periodUnit);
				bool getAutoRenew()const;
				void setAutoRenew(bool autoRenew);
				std::string getRequestId()const;
				void setRequestId(const std::string& requestId);
				std::string getAkProxy()const;
				void setAkProxy(const std::string& akProxy);
				int getNetworkAttributesSlbUdpTimeout()const;
				void setNetworkAttributesSlbUdpTimeout(int networkAttributesSlbUdpTimeout);
				std::string getZoneId()const;
				void setZoneId(const std::string& zoneId);
				std::string getAutoPlacement()const;
				void setAutoPlacement(const std::string& autoPlacement);
				std::string getChargeType()const;
				void setChargeType(const std::string& chargeType);
				int getNetworkAttributesUdpTimeout()const;
				void setNetworkAttributesUdpTimeout(int networkAttributesUdpTimeout);

            private:
				bool resourceOwnerId_;
				std::string clientToken_;
				bool callerParentId_;
				bool proxy_original_security_transport_;
				std::string description_;
				std::string proxy_original_source_ip_;
				std::string ownerIdLoginEmail_;
				std::string callerType_;
				std::string accessKeyId_;
				std::string sourceRegionId_;
				std::string resourceGroupId_;
				std::string securityToken_;
				std::string regionId_;
				bool enable_;
				std::string requestContent_;
				std::string actionOnMaintenance_;
				std::string callerBidEmail_;
				std::vector<Tag> tag_;
				std::string dedicatedHostType_;
				std::string callerUidEmail_;
				bool callerUid_;
				std::string app_ip_;
				int autoRenewPeriod_;
				int period_;
				int quantity_;
				std::string dedicatedHostName_;
				std::string resourceOwnerAccount_;
				std::string ownerAccount_;
				std::string autoReleaseTime_;
				std::string callerBid_;
				bool ownerId_;
				bool proxy_trust_transport_info_;
				bool ak_mfa_present_;
				bool security_transport_;
				std::string periodUnit_;
				bool autoRenew_;
				std::string requestId_;
				std::string akProxy_;
				int networkAttributesSlbUdpTimeout_;
				std::string zoneId_;
				std::string autoPlacement_;
				std::string chargeType_;
				int networkAttributesUdpTimeout_;

			};
		}
	}
}
#endif // !ALIBABACLOUD_ECS_MODEL_ALLOCATEDEDICATEDHOSTSREQUEST_H_