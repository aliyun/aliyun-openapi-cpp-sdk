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

#ifndef ALIBABACLOUD_VPC_MODEL_UNASSOCIATEEIPADDRESSREQUEST_H_
#define ALIBABACLOUD_VPC_MODEL_UNASSOCIATEEIPADDRESSREQUEST_H_

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
			class ALIBABACLOUD_VPC_EXPORT UnassociateEipAddressRequest : public RpcServiceRequest
			{

			public:
				UnassociateEipAddressRequest();
				~UnassociateEipAddressRequest();

				std::string getPrivateIpAddress()const;
				void setPrivateIpAddress(const std::string& privateIpAddress);
				long getResourceOwnerId()const;
				void setResourceOwnerId(long resourceOwnerId);
				std::string getInstanceId()const;
				void setInstanceId(const std::string& instanceId);
				std::string getResourceOwnerAccount()const;
				void setResourceOwnerAccount(const std::string& resourceOwnerAccount);
				std::string getRegionId()const;
				void setRegionId(const std::string& regionId);
				std::string getOwnerAccount()const;
				void setOwnerAccount(const std::string& ownerAccount);
				std::string getInstanceType()const;
				void setInstanceType(const std::string& instanceType);
				bool getForce()const;
				void setForce(bool force);
				std::string getAllocationId()const;
				void setAllocationId(const std::string& allocationId);
				long getOwnerId()const;
				void setOwnerId(long ownerId);

            private:
				std::string privateIpAddress_;
				long resourceOwnerId_;
				std::string instanceId_;
				std::string resourceOwnerAccount_;
				std::string regionId_;
				std::string ownerAccount_;
				std::string instanceType_;
				bool force_;
				std::string allocationId_;
				long ownerId_;

			};
		}
	}
}
#endif // !ALIBABACLOUD_VPC_MODEL_UNASSOCIATEEIPADDRESSREQUEST_H_