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

#ifndef ALIBABACLOUD_VPC_MODEL_MODIFYVIRTUALBORDERROUTERATTRIBUTEREQUEST_H_
#define ALIBABACLOUD_VPC_MODEL_MODIFYVIRTUALBORDERROUTERATTRIBUTEREQUEST_H_

#include <string>
#include <vector>
#include <alibabacloud/core/RpcServiceRequest.h>
#include <alibabacloud/vpc/VpcExport.h>

namespace AlibabaCloud
{
	namespace Vpc
	{
		namespace Model
		{
			class ALIBABACLOUD_VPC_EXPORT ModifyVirtualBorderRouterAttributeRequest : public RpcServiceRequest
			{

			public:
				ModifyVirtualBorderRouterAttributeRequest();
				~ModifyVirtualBorderRouterAttributeRequest();

				long getResourceOwnerId()const;
				void setResourceOwnerId(long resourceOwnerId);
				std::string getCircuitCode()const;
				void setCircuitCode(const std::string& circuitCode);
				std::string getAssociatedPhysicalConnections()const;
				void setAssociatedPhysicalConnections(const std::string& associatedPhysicalConnections);
				int getVlanId()const;
				void setVlanId(int vlanId);
				std::string getResourceOwnerAccount()const;
				void setResourceOwnerAccount(const std::string& resourceOwnerAccount);
				std::string getClientToken()const;
				void setClientToken(const std::string& clientToken);
				std::string getOwnerAccount()const;
				void setOwnerAccount(const std::string& ownerAccount);
				std::string getDescription()const;
				void setDescription(const std::string& description);
				std::string getVbrId()const;
				void setVbrId(const std::string& vbrId);
				long getOwnerId()const;
				void setOwnerId(long ownerId);
				long getMinRxInterval()const;
				void setMinRxInterval(long minRxInterval);
				std::string getPeerGatewayIp()const;
				void setPeerGatewayIp(const std::string& peerGatewayIp);
				long getDetectMultiplier()const;
				void setDetectMultiplier(long detectMultiplier);
				std::string getPeeringSubnetMask()const;
				void setPeeringSubnetMask(const std::string& peeringSubnetMask);
				std::string getRegionId()const;
				void setRegionId(const std::string& regionId);
				std::string getName()const;
				void setName(const std::string& name);
				std::string getLocalGatewayIp()const;
				void setLocalGatewayIp(const std::string& localGatewayIp);
				long getMinTxInterval()const;
				void setMinTxInterval(long minTxInterval);

            private:
				long resourceOwnerId_;
				std::string circuitCode_;
				std::string associatedPhysicalConnections_;
				int vlanId_;
				std::string resourceOwnerAccount_;
				std::string clientToken_;
				std::string ownerAccount_;
				std::string description_;
				std::string vbrId_;
				long ownerId_;
				long minRxInterval_;
				std::string peerGatewayIp_;
				long detectMultiplier_;
				std::string peeringSubnetMask_;
				std::string regionId_;
				std::string name_;
				std::string localGatewayIp_;
				long minTxInterval_;

			};
		}
	}
}
#endif // !ALIBABACLOUD_VPC_MODEL_MODIFYVIRTUALBORDERROUTERATTRIBUTEREQUEST_H_