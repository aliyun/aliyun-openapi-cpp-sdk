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

#ifndef ALIBABACLOUD_R_KVSTORE_MODEL_RESTOREINSTANCEREQUEST_H_
#define ALIBABACLOUD_R_KVSTORE_MODEL_RESTOREINSTANCEREQUEST_H_

#include <string>
#include <vector>
#include <alibabacloud/core/RpcServiceRequest.h>
#include <alibabacloud/r-kvstore/R_kvstoreExport.h>

namespace AlibabaCloud
{
	namespace R_kvstore
	{
		namespace Model
		{
			class ALIBABACLOUD_R_KVSTORE_EXPORT RestoreInstanceRequest : public RpcServiceRequest
			{

			public:
				RestoreInstanceRequest();
				~RestoreInstanceRequest();

				long getResourceOwnerId()const;
				void setResourceOwnerId(long resourceOwnerId);
				std::string getAccessKeyId()const;
				void setAccessKeyId(const std::string& accessKeyId);
				std::string getSecurityToken()const;
				void setSecurityToken(const std::string& securityToken);
				std::string getRestoreTime()const;
				void setRestoreTime(const std::string& restoreTime);
				std::string getResourceOwnerAccount()const;
				void setResourceOwnerAccount(const std::string& resourceOwnerAccount);
				std::string getOwnerAccount()const;
				void setOwnerAccount(const std::string& ownerAccount);
				std::string getBackupId()const;
				void setBackupId(const std::string& backupId);
				long getOwnerId()const;
				void setOwnerId(long ownerId);
				std::string getRestoreType()const;
				void setRestoreType(const std::string& restoreType);
				std::string getInstanceId()const;
				void setInstanceId(const std::string& instanceId);

            private:
				long resourceOwnerId_;
				std::string accessKeyId_;
				std::string securityToken_;
				std::string restoreTime_;
				std::string resourceOwnerAccount_;
				std::string ownerAccount_;
				std::string backupId_;
				long ownerId_;
				std::string restoreType_;
				std::string instanceId_;

			};
		}
	}
}
#endif // !ALIBABACLOUD_R_KVSTORE_MODEL_RESTOREINSTANCEREQUEST_H_