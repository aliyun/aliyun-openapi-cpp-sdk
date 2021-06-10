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

#ifndef ALIBABACLOUD_VPC_MODEL_RENEWINSTANCEREQUEST_H_
#define ALIBABACLOUD_VPC_MODEL_RENEWINSTANCEREQUEST_H_

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
			class ALIBABACLOUD_VPC_EXPORT RenewInstanceRequest : public RpcServiceRequest
			{

			public:
				RenewInstanceRequest();
				~RenewInstanceRequest();

				long getResourceOwnerId()const;
				void setResourceOwnerId(long resourceOwnerId);
				int getDuration()const;
				void setDuration(int duration);
				std::string getRegionId()const;
				void setRegionId(const std::string& regionId);
				std::string getInstanceType()const;
				void setInstanceType(const std::string& instanceType);
				std::string getResourceOwnerAccount()const;
				void setResourceOwnerAccount(const std::string& resourceOwnerAccount);
				long getOwnerId()const;
				void setOwnerId(long ownerId);
				std::string getInstanceId()const;
				void setInstanceId(const std::string& instanceId);
				std::string getPricingCycle()const;
				void setPricingCycle(const std::string& pricingCycle);

            private:
				long resourceOwnerId_;
				int duration_;
				std::string regionId_;
				std::string instanceType_;
				std::string resourceOwnerAccount_;
				long ownerId_;
				std::string instanceId_;
				std::string pricingCycle_;

			};
		}
	}
}
#endif // !ALIBABACLOUD_VPC_MODEL_RENEWINSTANCEREQUEST_H_