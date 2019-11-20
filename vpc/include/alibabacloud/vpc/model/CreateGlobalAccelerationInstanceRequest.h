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

#ifndef ALIBABACLOUD_VPC_MODEL_CREATEGLOBALACCELERATIONINSTANCEREQUEST_H_
#define ALIBABACLOUD_VPC_MODEL_CREATEGLOBALACCELERATIONINSTANCEREQUEST_H_

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
			class ALIBABACLOUD_VPC_EXPORT CreateGlobalAccelerationInstanceRequest : public RpcServiceRequest
			{

			public:
				CreateGlobalAccelerationInstanceRequest();
				~CreateGlobalAccelerationInstanceRequest();

				long getResourceOwnerId()const;
				void setResourceOwnerId(long resourceOwnerId);
				std::string getBandwidthType()const;
				void setBandwidthType(const std::string& bandwidthType);
				std::string getClientToken()const;
				void setClientToken(const std::string& clientToken);
				std::string getDescription()const;
				void setDescription(const std::string& description);
				std::string getRegionId()const;
				void setRegionId(const std::string& regionId);
				std::string getResourceOwnerAccount()const;
				void setResourceOwnerAccount(const std::string& resourceOwnerAccount);
				std::string getServiceLocation()const;
				void setServiceLocation(const std::string& serviceLocation);
				std::string getBandwidth()const;
				void setBandwidth(const std::string& bandwidth);
				std::string getOwnerAccount()const;
				void setOwnerAccount(const std::string& ownerAccount);
				long getOwnerId()const;
				void setOwnerId(long ownerId);
				std::string getName()const;
				void setName(const std::string& name);

            private:
				long resourceOwnerId_;
				std::string bandwidthType_;
				std::string clientToken_;
				std::string description_;
				std::string regionId_;
				std::string resourceOwnerAccount_;
				std::string serviceLocation_;
				std::string bandwidth_;
				std::string ownerAccount_;
				long ownerId_;
				std::string name_;

			};
		}
	}
}
#endif // !ALIBABACLOUD_VPC_MODEL_CREATEGLOBALACCELERATIONINSTANCEREQUEST_H_