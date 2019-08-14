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

#ifndef ALIBABACLOUD_ECS_MODEL_MODIFYPREPAYINSTANCESPECREQUEST_H_
#define ALIBABACLOUD_ECS_MODEL_MODIFYPREPAYINSTANCESPECREQUEST_H_

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
			class ALIBABACLOUD_ECS_EXPORT ModifyPrepayInstanceSpecRequest : public RpcServiceRequest
			{

			public:
				ModifyPrepayInstanceSpecRequest();
				~ModifyPrepayInstanceSpecRequest();

				long getResourceOwnerId()const;
				void setResourceOwnerId(long resourceOwnerId);
				bool getAutoPay()const;
				void setAutoPay(bool autoPay);
				std::string getResourceOwnerAccount()const;
				void setResourceOwnerAccount(const std::string& resourceOwnerAccount);
				std::string getClientToken()const;
				void setClientToken(const std::string& clientToken);
				std::string getOwnerAccount()const;
				void setOwnerAccount(const std::string& ownerAccount);
				std::string getEndTime()const;
				void setEndTime(const std::string& endTime);
				long getOwnerId()const;
				void setOwnerId(long ownerId);
				std::string getOperatorType()const;
				void setOperatorType(const std::string& operatorType);
				std::string getSystemDiskCategory()const;
				void setSystemDiskCategory(const std::string& systemDiskCategory);
				std::string getRebootTime()const;
				void setRebootTime(const std::string& rebootTime);
				std::string getSourceRegionId()const;
				void setSourceRegionId(const std::string& sourceRegionId);
				std::string getInstanceId()const;
				void setInstanceId(const std::string& instanceId);
				std::string getRegionId()const;
				void setRegionId(const std::string& regionId);
				bool getMigrateAcrossZone()const;
				void setMigrateAcrossZone(bool migrateAcrossZone);
				std::string getInstanceType()const;
				void setInstanceType(const std::string& instanceType);

            private:
				long resourceOwnerId_;
				bool autoPay_;
				std::string resourceOwnerAccount_;
				std::string clientToken_;
				std::string ownerAccount_;
				std::string endTime_;
				long ownerId_;
				std::string operatorType_;
				std::string systemDiskCategory_;
				std::string rebootTime_;
				std::string sourceRegionId_;
				std::string instanceId_;
				std::string regionId_;
				bool migrateAcrossZone_;
				std::string instanceType_;

			};
		}
	}
}
#endif // !ALIBABACLOUD_ECS_MODEL_MODIFYPREPAYINSTANCESPECREQUEST_H_