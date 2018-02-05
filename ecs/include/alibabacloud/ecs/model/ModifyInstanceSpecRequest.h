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

#ifndef ALIBABACLOUD_ECS_MODEL_MODIFYINSTANCESPECREQUEST_H_
#define ALIBABACLOUD_ECS_MODEL_MODIFYINSTANCESPECREQUEST_H_

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
			class ALIBABACLOUD_ECS_EXPORT ModifyInstanceSpecRequest : public RpcServiceRequest
			{

			public:
				ModifyInstanceSpecRequest();
				~ModifyInstanceSpecRequest();

				long getResourceOwnerId()const;
				void setResourceOwnerId(long resourceOwnerId);
				std::string getResourceOwnerAccount()const;
				void setResourceOwnerAccount(const std::string& resourceOwnerAccount);
				std::string getClientToken()const;
				void setClientToken(const std::string& clientToken);
				bool getAllowMigrateAcrossZone()const;
				void setAllowMigrateAcrossZone(bool allowMigrateAcrossZone);
				std::string getOwnerAccount()const;
				void setOwnerAccount(const std::string& ownerAccount);
				int getInternetMaxBandwidthOut()const;
				void setInternetMaxBandwidthOut(int internetMaxBandwidthOut);
				long getOwnerId()const;
				void setOwnerId(long ownerId);
				int getTemporaryInternetMaxBandwidthOut()const;
				void setTemporaryInternetMaxBandwidthOut(int temporaryInternetMaxBandwidthOut);
				std::string getSystemDiskCategory()const;
				void setSystemDiskCategory(const std::string& systemDiskCategory);
				std::string getTemporaryStartTime()const;
				void setTemporaryStartTime(const std::string& temporaryStartTime);
				bool getAsync()const;
				void setAsync(bool async);
				std::string getInstanceId()const;
				void setInstanceId(const std::string& instanceId);
				std::string getInstanceType()const;
				void setInstanceType(const std::string& instanceType);
				std::string getTemporaryEndTime()const;
				void setTemporaryEndTime(const std::string& temporaryEndTime);
				int getInternetMaxBandwidthIn()const;
				void setInternetMaxBandwidthIn(int internetMaxBandwidthIn);

            private:
				long resourceOwnerId_;
				std::string resourceOwnerAccount_;
				std::string clientToken_;
				bool allowMigrateAcrossZone_;
				std::string ownerAccount_;
				int internetMaxBandwidthOut_;
				long ownerId_;
				int temporaryInternetMaxBandwidthOut_;
				std::string systemDiskCategory_;
				std::string temporaryStartTime_;
				bool async_;
				std::string instanceId_;
				std::string instanceType_;
				std::string temporaryEndTime_;
				int internetMaxBandwidthIn_;

			};
		}
	}
}
#endif // !ALIBABACLOUD_ECS_MODEL_MODIFYINSTANCESPECREQUEST_H_