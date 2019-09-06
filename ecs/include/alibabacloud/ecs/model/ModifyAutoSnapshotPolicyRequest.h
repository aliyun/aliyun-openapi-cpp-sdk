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

#ifndef ALIBABACLOUD_ECS_MODEL_MODIFYAUTOSNAPSHOTPOLICYREQUEST_H_
#define ALIBABACLOUD_ECS_MODEL_MODIFYAUTOSNAPSHOTPOLICYREQUEST_H_

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
			class ALIBABACLOUD_ECS_EXPORT ModifyAutoSnapshotPolicyRequest : public RpcServiceRequest
			{

			public:
				ModifyAutoSnapshotPolicyRequest();
				~ModifyAutoSnapshotPolicyRequest();

				bool getDataDiskPolicyEnabled()const;
				void setDataDiskPolicyEnabled(bool dataDiskPolicyEnabled);
				long getResourceOwnerId()const;
				void setResourceOwnerId(long resourceOwnerId);
				int getDataDiskPolicyRetentionDays()const;
				void setDataDiskPolicyRetentionDays(int dataDiskPolicyRetentionDays);
				bool getSystemDiskPolicyRetentionLastWeek()const;
				void setSystemDiskPolicyRetentionLastWeek(bool systemDiskPolicyRetentionLastWeek);
				int getSystemDiskPolicyRetentionDays()const;
				void setSystemDiskPolicyRetentionDays(int systemDiskPolicyRetentionDays);
				int getDataDiskPolicyTimePeriod()const;
				void setDataDiskPolicyTimePeriod(int dataDiskPolicyTimePeriod);
				std::string getResourceOwnerAccount()const;
				void setResourceOwnerAccount(const std::string& resourceOwnerAccount);
				std::string getOwnerAccount()const;
				void setOwnerAccount(const std::string& ownerAccount);
				int getSystemDiskPolicyTimePeriod()const;
				void setSystemDiskPolicyTimePeriod(int systemDiskPolicyTimePeriod);
				long getOwnerId()const;
				void setOwnerId(long ownerId);
				bool getDataDiskPolicyRetentionLastWeek()const;
				void setDataDiskPolicyRetentionLastWeek(bool dataDiskPolicyRetentionLastWeek);
				bool getSystemDiskPolicyEnabled()const;
				void setSystemDiskPolicyEnabled(bool systemDiskPolicyEnabled);

            private:
				bool dataDiskPolicyEnabled_;
				long resourceOwnerId_;
				int dataDiskPolicyRetentionDays_;
				bool systemDiskPolicyRetentionLastWeek_;
				int systemDiskPolicyRetentionDays_;
				int dataDiskPolicyTimePeriod_;
				std::string resourceOwnerAccount_;
				std::string ownerAccount_;
				int systemDiskPolicyTimePeriod_;
				long ownerId_;
				bool dataDiskPolicyRetentionLastWeek_;
				bool systemDiskPolicyEnabled_;

			};
		}
	}
}
#endif // !ALIBABACLOUD_ECS_MODEL_MODIFYAUTOSNAPSHOTPOLICYREQUEST_H_