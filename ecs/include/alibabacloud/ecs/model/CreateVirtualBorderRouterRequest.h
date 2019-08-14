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

#ifndef ALIBABACLOUD_ECS_MODEL_CREATEVIRTUALBORDERROUTERREQUEST_H_
#define ALIBABACLOUD_ECS_MODEL_CREATEVIRTUALBORDERROUTERREQUEST_H_

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
			class ALIBABACLOUD_ECS_EXPORT CreateVirtualBorderRouterRequest : public RpcServiceRequest
			{

			public:
				CreateVirtualBorderRouterRequest();
				~CreateVirtualBorderRouterRequest();

				long getResourceOwnerId()const;
				void setResourceOwnerId(long resourceOwnerId);
				std::string getCircuitCode()const;
				void setCircuitCode(const std::string& circuitCode);
				int getVlanId()const;
				void setVlanId(int vlanId);
				std::string getClientToken()const;
				void setClientToken(const std::string& clientToken);
				std::string getResourceOwnerAccount()const;
				void setResourceOwnerAccount(const std::string& resourceOwnerAccount);
				std::string getOwnerAccount()const;
				void setOwnerAccount(const std::string& ownerAccount);
				std::string getDescription()const;
				void setDescription(const std::string& description);
				long getOwnerId()const;
				void setOwnerId(long ownerId);
				std::string getPeerGatewayIp()const;
				void setPeerGatewayIp(const std::string& peerGatewayIp);
				std::string getPeeringSubnetMask()const;
				void setPeeringSubnetMask(const std::string& peeringSubnetMask);
				std::string getRegionId()const;
				void setRegionId(const std::string& regionId);
				std::string getPhysicalConnectionId()const;
				void setPhysicalConnectionId(const std::string& physicalConnectionId);
				std::string getName()const;
				void setName(const std::string& name);
				std::string getLocalGatewayIp()const;
				void setLocalGatewayIp(const std::string& localGatewayIp);
				std::string getUserCidr()const;
				void setUserCidr(const std::string& userCidr);
				long getVbrOwnerId()const;
				void setVbrOwnerId(long vbrOwnerId);

            private:
				long resourceOwnerId_;
				std::string circuitCode_;
				int vlanId_;
				std::string clientToken_;
				std::string resourceOwnerAccount_;
				std::string ownerAccount_;
				std::string description_;
				long ownerId_;
				std::string peerGatewayIp_;
				std::string peeringSubnetMask_;
				std::string regionId_;
				std::string physicalConnectionId_;
				std::string name_;
				std::string localGatewayIp_;
				std::string userCidr_;
				long vbrOwnerId_;

			};
		}
	}
}
#endif // !ALIBABACLOUD_ECS_MODEL_CREATEVIRTUALBORDERROUTERREQUEST_H_