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

#ifndef ALIBABACLOUD_VPC_MODEL_COMPLETEPHYSICALCONNECTIONLOAREQUEST_H_
#define ALIBABACLOUD_VPC_MODEL_COMPLETEPHYSICALCONNECTIONLOAREQUEST_H_

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
			class ALIBABACLOUD_VPC_EXPORT CompletePhysicalConnectionLOARequest : public RpcServiceRequest
			{

			public:
				CompletePhysicalConnectionLOARequest();
				~CompletePhysicalConnectionLOARequest();

				std::string getLineCode()const;
				void setLineCode(const std::string& lineCode);
				long getResourceOwnerId()const;
				void setResourceOwnerId(long resourceOwnerId);
				std::string getClientToken()const;
				void setClientToken(const std::string& clientToken);
				std::string getRegionId()const;
				void setRegionId(const std::string& regionId);
				std::string getLineLabel()const;
				void setLineLabel(const std::string& lineLabel);
				std::string getResourceOwnerAccount()const;
				void setResourceOwnerAccount(const std::string& resourceOwnerAccount);
				std::string getOwnerAccount()const;
				void setOwnerAccount(const std::string& ownerAccount);
				long getOwnerId()const;
				void setOwnerId(long ownerId);
				std::string getInstanceId()const;
				void setInstanceId(const std::string& instanceId);

            private:
				std::string lineCode_;
				long resourceOwnerId_;
				std::string clientToken_;
				std::string regionId_;
				std::string lineLabel_;
				std::string resourceOwnerAccount_;
				std::string ownerAccount_;
				long ownerId_;
				std::string instanceId_;

			};
		}
	}
}
#endif // !ALIBABACLOUD_VPC_MODEL_COMPLETEPHYSICALCONNECTIONLOAREQUEST_H_