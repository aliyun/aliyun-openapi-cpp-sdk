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

#ifndef ALIBABACLOUD_ECS_MODEL_MODIFYPHYSICALCONNECTIONATTRIBUTEREQUEST_H_
#define ALIBABACLOUD_ECS_MODEL_MODIFYPHYSICALCONNECTIONATTRIBUTEREQUEST_H_

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
			class ALIBABACLOUD_ECS_EXPORT ModifyPhysicalConnectionAttributeRequest : public RpcServiceRequest
			{

			public:
				ModifyPhysicalConnectionAttributeRequest();
				~ModifyPhysicalConnectionAttributeRequest();

				std::string getRedundantPhysicalConnectionId()const;
				void setRedundantPhysicalConnectionId(const std::string& redundantPhysicalConnectionId);
				std::string getPeerLocation()const;
				void setPeerLocation(const std::string& peerLocation);
				long getResourceOwnerId()const;
				void setResourceOwnerId(long resourceOwnerId);
				std::string getPortType()const;
				void setPortType(const std::string& portType);
				std::string getCircuitCode()const;
				void setCircuitCode(const std::string& circuitCode);
				int getBandwidth()const;
				void setBandwidth(int bandwidth);
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
				std::string getLineOperator()const;
				void setLineOperator(const std::string& lineOperator);
				std::string getRegionId()const;
				void setRegionId(const std::string& regionId);
				std::string getPhysicalConnectionId()const;
				void setPhysicalConnectionId(const std::string& physicalConnectionId);
				std::string getName()const;
				void setName(const std::string& name);
				std::string getUserCidr()const;
				void setUserCidr(const std::string& userCidr);

            private:
				std::string redundantPhysicalConnectionId_;
				std::string peerLocation_;
				long resourceOwnerId_;
				std::string portType_;
				std::string circuitCode_;
				int bandwidth_;
				std::string clientToken_;
				std::string resourceOwnerAccount_;
				std::string ownerAccount_;
				std::string description_;
				long ownerId_;
				std::string lineOperator_;
				std::string regionId_;
				std::string physicalConnectionId_;
				std::string name_;
				std::string userCidr_;

			};
		}
	}
}
#endif // !ALIBABACLOUD_ECS_MODEL_MODIFYPHYSICALCONNECTIONATTRIBUTEREQUEST_H_