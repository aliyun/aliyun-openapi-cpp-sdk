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

#ifndef ALIBABACLOUD_ECS_MODEL_REVOKESECURITYGROUPEGRESSREQUEST_H_
#define ALIBABACLOUD_ECS_MODEL_REVOKESECURITYGROUPEGRESSREQUEST_H_

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
			class ALIBABACLOUD_ECS_EXPORT RevokeSecurityGroupEgressRequest : public RpcServiceRequest
			{

			public:
				RevokeSecurityGroupEgressRequest();
				~RevokeSecurityGroupEgressRequest();

				std::string getNicType()const;
				void setNicType(const std::string& nicType);
				long getResourceOwnerId()const;
				void setResourceOwnerId(long resourceOwnerId);
				std::string getSourcePortRange()const;
				void setSourcePortRange(const std::string& sourcePortRange);
				std::string getClientToken()const;
				void setClientToken(const std::string& clientToken);
				std::string getSecurityGroupId()const;
				void setSecurityGroupId(const std::string& securityGroupId);
				std::string getDescription()const;
				void setDescription(const std::string& description);
				std::string getRegionId()const;
				void setRegionId(const std::string& regionId);
				std::string getIpv6DestCidrIp()const;
				void setIpv6DestCidrIp(const std::string& ipv6DestCidrIp);
				std::string getIpv6SourceCidrIp()const;
				void setIpv6SourceCidrIp(const std::string& ipv6SourceCidrIp);
				std::string getPolicy()const;
				void setPolicy(const std::string& policy);
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
				std::string getDestGroupId()const;
				void setDestGroupId(const std::string& destGroupId);
				long getOwnerId()const;
				void setOwnerId(long ownerId);
				std::string getDestGroupOwnerAccount()const;
				void setDestGroupOwnerAccount(const std::string& destGroupOwnerAccount);
				std::string getPriority()const;
				void setPriority(const std::string& priority);
				std::string getDestCidrIp()const;
				void setDestCidrIp(const std::string& destCidrIp);
				long getDestGroupOwnerId()const;
				void setDestGroupOwnerId(long destGroupOwnerId);

            private:
				std::string nicType_;
				long resourceOwnerId_;
				std::string sourcePortRange_;
				std::string clientToken_;
				std::string securityGroupId_;
				std::string description_;
				std::string regionId_;
				std::string ipv6DestCidrIp_;
				std::string ipv6SourceCidrIp_;
				std::string policy_;
				std::string portRange_;
				std::string resourceOwnerAccount_;
				std::string ipProtocol_;
				std::string ownerAccount_;
				std::string sourceCidrIp_;
				std::string destGroupId_;
				long ownerId_;
				std::string destGroupOwnerAccount_;
				std::string priority_;
				std::string destCidrIp_;
				long destGroupOwnerId_;

			};
		}
	}
}
#endif // !ALIBABACLOUD_ECS_MODEL_REVOKESECURITYGROUPEGRESSREQUEST_H_