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

#ifndef ALIBABACLOUD_ECS_MODEL_AUTHORIZESECURITYGROUPREQUEST_H_
#define ALIBABACLOUD_ECS_MODEL_AUTHORIZESECURITYGROUPREQUEST_H_

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
			class ALIBABACLOUD_ECS_EXPORT AuthorizeSecurityGroupRequest : public RpcServiceRequest
			{

			public:
				AuthorizeSecurityGroupRequest();
				~AuthorizeSecurityGroupRequest();

				std::string getNicType()const;
				void setNicType(const std::string& nicType);
				long getResourceOwnerId()const;
				void setResourceOwnerId(long resourceOwnerId);
				std::string getSourcePortRange()const;
				void setSourcePortRange(const std::string& sourcePortRange);
				std::string getClientToken()const;
				void setClientToken(const std::string& clientToken);
				long getCallerParentId()const;
				void setCallerParentId(long callerParentId);
				std::string getSecurityGroupId()const;
				void setSecurityGroupId(const std::string& securityGroupId);
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
				long getSourceGroupOwnerId()const;
				void setSourceGroupOwnerId(long sourceGroupOwnerId);
				std::string getSourceGroupOwnerAccount()const;
				void setSourceGroupOwnerAccount(const std::string& sourceGroupOwnerAccount);
				std::string getSecurityToken()const;
				void setSecurityToken(const std::string& securityToken);
				std::string getRegionId()const;
				void setRegionId(const std::string& regionId);
				bool getEnable()const;
				void setEnable(bool enable);
				std::string getRequestContent()const;
				void setRequestContent(const std::string& requestContent);
				std::string getCallerBidEmail()const;
				void setCallerBidEmail(const std::string& callerBidEmail);
				std::string getCallerUidEmail()const;
				void setCallerUidEmail(const std::string& callerUidEmail);
				long getCallerUid()const;
				void setCallerUid(long callerUid);
				std::string getIpv6SourceCidrIp()const;
				void setIpv6SourceCidrIp(const std::string& ipv6SourceCidrIp);
				std::string getIpv6DestCidrIp()const;
				void setIpv6DestCidrIp(const std::string& ipv6DestCidrIp);
				std::string getPolicy()const;
				void setPolicy(const std::string& policy);
				std::string getApp_ip()const;
				void setApp_ip(const std::string& app_ip);
				std::string getPortRange()const;
				void setPortRange(const std::string& portRange);
				std::string getResourceOwnerAccount()const;
				void setResourceOwnerAccount(const std::string& resourceOwnerAccount);
				std::string getIpProtocol()const;
				void setIpProtocol(const std::string& ipProtocol);
				std::string getOwnerAccount()const;
				void setOwnerAccount(const std::string& ownerAccount);
				std::string getSourceCidrIp()const;
				void setSourceCidrIp(const std::string& sourceCidrIp);
				std::string getCallerBid()const;
				void setCallerBid(const std::string& callerBid);
				long getOwnerId()const;
				void setOwnerId(long ownerId);
				std::string getPriority()const;
				void setPriority(const std::string& priority);
				std::string getDestCidrIp()const;
				void setDestCidrIp(const std::string& destCidrIp);
				bool getProxy_trust_transport_info()const;
				void setProxy_trust_transport_info(bool proxy_trust_transport_info);
				bool getAk_mfa_present()const;
				void setAk_mfa_present(bool ak_mfa_present);
				bool getSecurity_transport()const;
				void setSecurity_transport(bool security_transport);
				std::string getRequestId()const;
				void setRequestId(const std::string& requestId);
				std::string getSourceGroupId()const;
				void setSourceGroupId(const std::string& sourceGroupId);

            private:
				std::string nicType_;
				long resourceOwnerId_;
				std::string sourcePortRange_;
				std::string clientToken_;
				long callerParentId_;
				std::string securityGroupId_;
				bool proxy_original_security_transport_;
				std::string description_;
				std::string proxy_original_source_ip_;
				std::string ownerIdLoginEmail_;
				std::string callerType_;
				std::string accessKeyId_;
				std::string sourceRegionId_;
				long sourceGroupOwnerId_;
				std::string sourceGroupOwnerAccount_;
				std::string securityToken_;
				std::string regionId_;
				bool enable_;
				std::string requestContent_;
				std::string callerBidEmail_;
				std::string callerUidEmail_;
				long callerUid_;
				std::string ipv6SourceCidrIp_;
				std::string ipv6DestCidrIp_;
				std::string policy_;
				std::string app_ip_;
				std::string portRange_;
				std::string resourceOwnerAccount_;
				std::string ipProtocol_;
				std::string ownerAccount_;
				std::string sourceCidrIp_;
				std::string callerBid_;
				long ownerId_;
				std::string priority_;
				std::string destCidrIp_;
				bool proxy_trust_transport_info_;
				bool ak_mfa_present_;
				bool security_transport_;
				std::string requestId_;
				std::string sourceGroupId_;

			};
		}
	}
}
#endif // !ALIBABACLOUD_ECS_MODEL_AUTHORIZESECURITYGROUPREQUEST_H_