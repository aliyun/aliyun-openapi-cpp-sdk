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

#ifndef ALIBABACLOUD_VPC_MODEL_CREATEPHYSICALCONNECTIONSETUPORDERREQUEST_H_
#define ALIBABACLOUD_VPC_MODEL_CREATEPHYSICALCONNECTIONSETUPORDERREQUEST_H_

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
			class ALIBABACLOUD_VPC_EXPORT CreatePhysicalConnectionSetupOrderRequest : public RpcServiceRequest
			{

			public:
				CreatePhysicalConnectionSetupOrderRequest();
				~CreatePhysicalConnectionSetupOrderRequest();

				std::string getAccessPointId()const;
				void setAccessPointId(const std::string& accessPointId);
				std::string getRedundantPhysicalConnectionId()const;
				void setRedundantPhysicalConnectionId(const std::string& redundantPhysicalConnectionId);
				long getResourceOwnerId()const;
				void setResourceOwnerId(long resourceOwnerId);
				std::string getPortType()const;
				void setPortType(const std::string& portType);
				bool getAutoPay()const;
				void setAutoPay(bool autoPay);
				std::string getRegionId()const;
				void setRegionId(const std::string& regionId);
				std::string getClientToken()const;
				void setClientToken(const std::string& clientToken);
				std::string getResourceOwnerAccount()const;
				void setResourceOwnerAccount(const std::string& resourceOwnerAccount);
				std::string getOwnerAccount()const;
				void setOwnerAccount(const std::string& ownerAccount);
				long getOwnerId()const;
				void setOwnerId(long ownerId);
				std::string getLineOperator()const;
				void setLineOperator(const std::string& lineOperator);

            private:
				std::string accessPointId_;
				std::string redundantPhysicalConnectionId_;
				long resourceOwnerId_;
				std::string portType_;
				bool autoPay_;
				std::string regionId_;
				std::string clientToken_;
				std::string resourceOwnerAccount_;
				std::string ownerAccount_;
				long ownerId_;
				std::string lineOperator_;

			};
		}
	}
}
#endif // !ALIBABACLOUD_VPC_MODEL_CREATEPHYSICALCONNECTIONSETUPORDERREQUEST_H_