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

#ifndef ALIBABACLOUD_RDS_MODEL_MODIFYDBINSTANCETDEREQUEST_H_
#define ALIBABACLOUD_RDS_MODEL_MODIFYDBINSTANCETDEREQUEST_H_

#include <string>
#include <vector>
#include <alibabacloud/core/RpcServiceRequest.h>
#include <alibabacloud/rds/RdsExport.h>

namespace AlibabaCloud
{
	namespace Rds
	{
		namespace Model
		{
			class ALIBABACLOUD_RDS_EXPORT ModifyDBInstanceTDERequest : public RpcServiceRequest
			{

			public:
				ModifyDBInstanceTDERequest();
				~ModifyDBInstanceTDERequest();

				long getResourceOwnerId()const;
				void setResourceOwnerId(long resourceOwnerId);
				std::string getDBName()const;
				void setDBName(const std::string& dBName);
				std::string getResourceOwnerAccount()const;
				void setResourceOwnerAccount(const std::string& resourceOwnerAccount);
				std::string getRoleArn()const;
				void setRoleArn(const std::string& roleArn);
				std::string getOwnerAccount()const;
				void setOwnerAccount(const std::string& ownerAccount);
				std::string getDBInstanceId()const;
				void setDBInstanceId(const std::string& dBInstanceId);
				std::string getEncryptionKey()const;
				void setEncryptionKey(const std::string& encryptionKey);
				long getOwnerId()const;
				void setOwnerId(long ownerId);
				std::string getTDEStatus()const;
				void setTDEStatus(const std::string& tDEStatus);
				std::string getAccessKeyId()const;
				void setAccessKeyId(const std::string& accessKeyId);

            private:
				long resourceOwnerId_;
				std::string dBName_;
				std::string resourceOwnerAccount_;
				std::string roleArn_;
				std::string ownerAccount_;
				std::string dBInstanceId_;
				std::string encryptionKey_;
				long ownerId_;
				std::string tDEStatus_;
				std::string accessKeyId_;

			};
		}
	}
}
#endif // !ALIBABACLOUD_RDS_MODEL_MODIFYDBINSTANCETDEREQUEST_H_