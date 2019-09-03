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
#include <alibabacloud/core/RpcServiceRequest.h>
#include <alibabacloud/rds/RdsExport.h>

namespace AlibabaCloud
{
	namespace Rds
	{
		namespace Model
		{
			class ALIBABACLOUD_RDS_EXPORT ModifyBackupPolicyRequest : public RpcServiceRequest
			{

			public:
				ModifyBackupPolicyRequest();
				~ModifyBackupPolicyRequest();

				long getResourceOwnerId()const;
				void setResourceOwnerId(long resourceOwnerId);
				std::string getLocalLogRetentionHours()const;
				void setLocalLogRetentionHours(const std::string& localLogRetentionHours);
				std::string getLogBackupFrequency()const;
				void setLogBackupFrequency(const std::string& logBackupFrequency);
				std::string getBackupLog()const;
				void setBackupLog(const std::string& backupLog);
				std::string getAccessKeyId()const;
				void setAccessKeyId(const std::string& accessKeyId);
				std::string getDuplicationContent()const;
				void setDuplicationContent(const std::string& duplicationContent);
				std::string getHighSpaceUsageProtection()const;
				void setHighSpaceUsageProtection(const std::string& highSpaceUsageProtection);
				std::string getDBInstanceId()const;
				void setDBInstanceId(const std::string& dBInstanceId);
				std::string getEnableBackupLog()const;
				void setEnableBackupLog(const std::string& enableBackupLog);
				std::string getBackupPolicyMode()const;
				void setBackupPolicyMode(const std::string& backupPolicyMode);
				std::string getPreferredBackupPeriod()const;
				void setPreferredBackupPeriod(const std::string& preferredBackupPeriod);
				std::string getResourceOwnerAccount()const;
				void setResourceOwnerAccount(const std::string& resourceOwnerAccount);
				std::string getOwnerAccount()const;
				void setOwnerAccount(const std::string& ownerAccount);
				std::string getCompressType()const;
				void setCompressType(const std::string& compressType);
				std::string getLocalLogRetentionSpace()const;
				void setLocalLogRetentionSpace(const std::string& localLogRetentionSpace);
				long getOwnerId()const;
				void setOwnerId(long ownerId);
				std::string getDuplication()const;
				void setDuplication(const std::string& duplication);
				std::string getPreferredBackupTime()const;
				void setPreferredBackupTime(const std::string& preferredBackupTime);
				std::string getBackupRetentionPeriod()const;
				void setBackupRetentionPeriod(const std::string& backupRetentionPeriod);
				std::string getDuplicationLocation()const;
				void setDuplicationLocation(const std::string& duplicationLocation);
				std::string getLogBackupRetentionPeriod()const;
				void setLogBackupRetentionPeriod(const std::string& logBackupRetentionPeriod);

            private:
				long resourceOwnerId_;
				std::string localLogRetentionHours_;
				std::string logBackupFrequency_;
				std::string backupLog_;
				std::string accessKeyId_;
				std::string duplicationContent_;
				std::string highSpaceUsageProtection_;
				std::string dBInstanceId_;
				std::string enableBackupLog_;
				std::string backupPolicyMode_;
				std::string preferredBackupPeriod_;
				std::string resourceOwnerAccount_;
				std::string ownerAccount_;
				std::string compressType_;
				std::string localLogRetentionSpace_;
				long ownerId_;
				std::string duplication_;
				std::string preferredBackupTime_;
				std::string backupRetentionPeriod_;
				std::string duplicationLocation_;
				std::string logBackupRetentionPeriod_;

			};
		}
	}
}
#endif // !ALIBABACLOUD_RDS_MODEL_MODIFYBACKUPPOLICYREQUEST_H_