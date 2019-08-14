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

#ifndef ALIBABACLOUD_POLARDB_MODEL_CREATEDATABASEREQUEST_H_
#define ALIBABACLOUD_POLARDB_MODEL_CREATEDATABASEREQUEST_H_

#include <string>
#include <vector>
#include <alibabacloud/core/RpcServiceRequest.h>
#include <alibabacloud/polardb/PolardbExport.h>

namespace AlibabaCloud
{
	namespace Polardb
	{
		namespace Model
		{
			class ALIBABACLOUD_POLARDB_EXPORT CreateDatabaseRequest : public RpcServiceRequest
			{

			public:
				CreateDatabaseRequest();
				~CreateDatabaseRequest();

				long getResourceOwnerId()const;
				void setResourceOwnerId(long resourceOwnerId);
				std::string getDBName()const;
				void setDBName(const std::string& dBName);
				std::string getAccountName()const;
				void setAccountName(const std::string& accountName);
				std::string getResourceOwnerAccount()const;
				void setResourceOwnerAccount(const std::string& resourceOwnerAccount);
				std::string getDBClusterId()const;
				void setDBClusterId(const std::string& dBClusterId);
				std::string getOwnerAccount()const;
				void setOwnerAccount(const std::string& ownerAccount);
				std::string getDBDescription()const;
				void setDBDescription(const std::string& dBDescription);
				long getOwnerId()const;
				void setOwnerId(long ownerId);
				std::string getCharacterSetName()const;
				void setCharacterSetName(const std::string& characterSetName);
				std::string getAccessKeyId()const;
				void setAccessKeyId(const std::string& accessKeyId);
				std::string getAccountPrivilege()const;
				void setAccountPrivilege(const std::string& accountPrivilege);

            private:
				long resourceOwnerId_;
				std::string dBName_;
				std::string accountName_;
				std::string resourceOwnerAccount_;
				std::string dBClusterId_;
				std::string ownerAccount_;
				std::string dBDescription_;
				long ownerId_;
				std::string characterSetName_;
				std::string accessKeyId_;
				std::string accountPrivilege_;

			};
		}
	}
}
#endif // !ALIBABACLOUD_POLARDB_MODEL_CREATEDATABASEREQUEST_H_