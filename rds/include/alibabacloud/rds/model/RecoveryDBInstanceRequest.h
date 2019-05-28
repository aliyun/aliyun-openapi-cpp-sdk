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

#ifndef ALIBABACLOUD_RDS_MODEL_RECOVERYDBINSTANCEREQUEST_H_
#define ALIBABACLOUD_RDS_MODEL_RECOVERYDBINSTANCEREQUEST_H_

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
			class ALIBABACLOUD_RDS_EXPORT RecoveryDBInstanceRequest : public RpcServiceRequest
			{

			public:
				RecoveryDBInstanceRequest();
				~RecoveryDBInstanceRequest();

				long getResourceOwnerId()const;
				void setResourceOwnerId(long resourceOwnerId);
				std::string getRestoreTime()const;
				void setRestoreTime(const std::string& restoreTime);
				std::string getPeriod()const;
				void setPeriod(const std::string& period);
				int getDBInstanceStorage()const;
				void setDBInstanceStorage(int dBInstanceStorage);
				std::string getResourceOwnerAccount()const;
				void setResourceOwnerAccount(const std::string& resourceOwnerAccount);
				std::string getClientToken()const;
				void setClientToken(const std::string& clientToken);
				std::string getBackupId()const;
				void setBackupId(const std::string& backupId);
				std::string getOwnerAccount()const;
				void setOwnerAccount(const std::string& ownerAccount);
				long getOwnerId()const;
				void setOwnerId(long ownerId);
				std::string getUsedTime()const;
				void setUsedTime(const std::string& usedTime);
				std::string getAccessKeyId()const;
				void setAccessKeyId(const std::string& accessKeyId);
				std::string getDBInstanceClass()const;
				void setDBInstanceClass(const std::string& dBInstanceClass);
				std::string getDbNames()const;
				void setDbNames(const std::string& dbNames);
				std::string getVSwitchId()const;
				void setVSwitchId(const std::string& vSwitchId);
				std::string getPrivateIpAddress()const;
				void setPrivateIpAddress(const std::string& privateIpAddress);
				std::string getResourceGroupId()const;
				void setResourceGroupId(const std::string& resourceGroupId);
				std::string getTargetDBInstanceId()const;
				void setTargetDBInstanceId(const std::string& targetDBInstanceId);
				std::string getVPCId()const;
				void setVPCId(const std::string& vPCId);
				std::string getDBInstanceDescription()const;
				void setDBInstanceDescription(const std::string& dBInstanceDescription);
				std::string getDBInstanceId()const;
				void setDBInstanceId(const std::string& dBInstanceId);
				std::string getPayType()const;
				void setPayType(const std::string& payType);
				std::string getInstanceNetworkType()const;
				void setInstanceNetworkType(const std::string& instanceNetworkType);

            private:
				long resourceOwnerId_;
				std::string restoreTime_;
				std::string period_;
				int dBInstanceStorage_;
				std::string resourceOwnerAccount_;
				std::string clientToken_;
				std::string backupId_;
				std::string ownerAccount_;
				long ownerId_;
				std::string usedTime_;
				std::string accessKeyId_;
				std::string dBInstanceClass_;
				std::string dbNames_;
				std::string vSwitchId_;
				std::string privateIpAddress_;
				std::string resourceGroupId_;
				std::string targetDBInstanceId_;
				std::string vPCId_;
				std::string dBInstanceDescription_;
				std::string dBInstanceId_;
				std::string payType_;
				std::string instanceNetworkType_;

			};
		}
	}
}
#endif // !ALIBABACLOUD_RDS_MODEL_RECOVERYDBINSTANCEREQUEST_H_