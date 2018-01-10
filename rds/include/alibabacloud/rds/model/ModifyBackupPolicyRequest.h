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

#ifndef ALIBABACLOUD_RDS_MODEL_MODIFYBACKUPPOLICYREQUEST_H_
#define ALIBABACLOUD_RDS_MODEL_MODIFYBACKUPPOLICYREQUEST_H_

#include <string>
#include <vector>
#include <alibabacloud/rds/RdsRequest.h>

namespace AlibabaCloud
{
	namespace Rds
	{
		namespace Model
		{
			class ALIBABACLOUD_RDS_EXPORT ModifyBackupPolicyRequest : public RdsRequest
			{

			public:
				ModifyBackupPolicyRequest();
				~ModifyBackupPolicyRequest();

				std::string getPreferredBackupTime()const;
				void setPreferredBackupTime(const std::string& preferredBackupTime);
				std::string getPreferredBackupPeriod()const;
				void setPreferredBackupPeriod(const std::string& preferredBackupPeriod);
				std::string getBackupRetentionPeriod()const;
				void setBackupRetentionPeriod(const std::string& backupRetentionPeriod);
				long getResourceOwnerId()const;
				void setResourceOwnerId(long resourceOwnerId);
				std::string getResourceOwnerAccount()const;
				void setResourceOwnerAccount(const std::string& resourceOwnerAccount);
				std::string getOwnerAccount()const;
				void setOwnerAccount(const std::string& ownerAccount);
				std::string getDBInstanceId()const;
				void setDBInstanceId(const std::string& dBInstanceId);
				std::string getBackupLog()const;
				void setBackupLog(const std::string& backupLog);
				long getOwnerId()const;
				void setOwnerId(long ownerId);
				std::string getLogBackupRetentionPeriod()const;
				void setLogBackupRetentionPeriod(const std::string& logBackupRetentionPeriod);
				std::string getAccessKeyId()const;
				void setAccessKeyId(const std::string& accessKeyId);

            private:
				std::string preferredBackupTime_;
				std::string preferredBackupPeriod_;
				std::string backupRetentionPeriod_;
				long resourceOwnerId_;
				std::string resourceOwnerAccount_;
				std::string ownerAccount_;
				std::string dBInstanceId_;
				std::string backupLog_;
				long ownerId_;
				std::string logBackupRetentionPeriod_;
				std::string accessKeyId_;

			};
		}
	}
}
#endif // !ALIBABACLOUD_RDS_MODEL_MODIFYBACKUPPOLICYREQUEST_H_