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

#ifndef ALIBABACLOUD_ECS_MODEL_MODIFYINSTANCEAUTORENEWATTRIBUTEREQUEST_H_
#define ALIBABACLOUD_ECS_MODEL_MODIFYINSTANCEAUTORENEWATTRIBUTEREQUEST_H_

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
			class ALIBABACLOUD_ECS_EXPORT ModifyInstanceAutoRenewAttributeRequest : public RpcServiceRequest
			{

			public:
				ModifyInstanceAutoRenewAttributeRequest();
				~ModifyInstanceAutoRenewAttributeRequest();

				int getDuration()const;
				void setDuration(int duration);
				long getResourceOwnerId()const;
				void setResourceOwnerId(long resourceOwnerId);
				std::string getInstanceId()const;
				void setInstanceId(const std::string& instanceId);
				bool getAutoRenew()const;
				void setAutoRenew(bool autoRenew);
				std::string getResourceOwnerAccount()const;
				void setResourceOwnerAccount(const std::string& resourceOwnerAccount);
				std::string getRegionId()const;
				void setRegionId(const std::string& regionId);
				std::string getOwnerAccount()const;
				void setOwnerAccount(const std::string& ownerAccount);
				std::string getRenewalStatus()const;
				void setRenewalStatus(const std::string& renewalStatus);
				long getOwnerId()const;
				void setOwnerId(long ownerId);

            private:
				int duration_;
				long resourceOwnerId_;
				std::string instanceId_;
				bool autoRenew_;
				std::string resourceOwnerAccount_;
				std::string regionId_;
				std::string ownerAccount_;
				std::string renewalStatus_;
				long ownerId_;

			};
		}
	}
}
#endif // !ALIBABACLOUD_ECS_MODEL_MODIFYINSTANCEAUTORENEWATTRIBUTEREQUEST_H_