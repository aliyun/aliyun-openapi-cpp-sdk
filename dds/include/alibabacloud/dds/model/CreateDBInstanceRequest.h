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

#ifndef ALIBABACLOUD_DDS_MODEL_CREATEDBINSTANCEREQUEST_H_
#define ALIBABACLOUD_DDS_MODEL_CREATEDBINSTANCEREQUEST_H_

#include <string>
#include <vector>
#include <alibabacloud/core/RpcServiceRequest.h>
#include <alibabacloud/dds/DdsExport.h>

namespace AlibabaCloud
{
	namespace Dds
	{
		namespace Model
		{
			class ALIBABACLOUD_DDS_EXPORT CreateDBInstanceRequest : public RpcServiceRequest
			{

			public:
				CreateDBInstanceRequest();
				~CreateDBInstanceRequest();

				long getResourceOwnerId()const;
				void setResourceOwnerId(long resourceOwnerId);
				int getDBInstanceStorage()const;
				void setDBInstanceStorage(int dBInstanceStorage);
				std::string getCouponNo()const;
				void setCouponNo(const std::string& couponNo);
				std::string getEngineVersion()const;
				void setEngineVersion(const std::string& engineVersion);
				std::string getNetworkType()const;
				void setNetworkType(const std::string& networkType);
				std::string getResourceGroupId()const;
				void setResourceGroupId(const std::string& resourceGroupId);
				std::string getSecurityToken()const;
				void setSecurityToken(const std::string& securityToken);
				std::string getDBInstanceDescription()const;
				void setDBInstanceDescription(const std::string& dBInstanceDescription);
				std::string getBusinessInfo()const;
				void setBusinessInfo(const std::string& businessInfo);
				int getPeriod()const;
				void setPeriod(int period);
				std::string getBackupId()const;
				void setBackupId(const std::string& backupId);
				long getOwnerId()const;
				void setOwnerId(long ownerId);
				std::string getDBInstanceClass()const;
				void setDBInstanceClass(const std::string& dBInstanceClass);
				std::string getSecurityIPList()const;
				void setSecurityIPList(const std::string& securityIPList);
				std::string getVSwitchId()const;
				void setVSwitchId(const std::string& vSwitchId);
				std::string getAutoRenew()const;
				void setAutoRenew(const std::string& autoRenew);
				std::string getZoneId()const;
				void setZoneId(const std::string& zoneId);
				std::string getClientToken()const;
				void setClientToken(const std::string& clientToken);
				std::string getReadonlyReplicas()const;
				void setReadonlyReplicas(const std::string& readonlyReplicas);
				std::string getReplicationFactor()const;
				void setReplicationFactor(const std::string& replicationFactor);
				std::string getAccessKeyId()const;
				void setAccessKeyId(const std::string& accessKeyId);
				std::string getStorageEngine()const;
				void setStorageEngine(const std::string& storageEngine);
				std::string getDatabaseNames()const;
				void setDatabaseNames(const std::string& databaseNames);
				std::string getRegionId()const;
				void setRegionId(const std::string& regionId);
				std::string getEngine()const;
				void setEngine(const std::string& engine);
				std::string getRestoreTime()const;
				void setRestoreTime(const std::string& restoreTime);
				std::string getResourceOwnerAccount()const;
				void setResourceOwnerAccount(const std::string& resourceOwnerAccount);
				std::string getSrcDBInstanceId()const;
				void setSrcDBInstanceId(const std::string& srcDBInstanceId);
				std::string getOwnerAccount()const;
				void setOwnerAccount(const std::string& ownerAccount);
				std::string getClusterId()const;
				void setClusterId(const std::string& clusterId);
				std::string getAccountPassword()const;
				void setAccountPassword(const std::string& accountPassword);
				std::string getVpcId()const;
				void setVpcId(const std::string& vpcId);
				std::string getChargeType()const;
				void setChargeType(const std::string& chargeType);

            private:
				long resourceOwnerId_;
				int dBInstanceStorage_;
				std::string couponNo_;
				std::string engineVersion_;
				std::string networkType_;
				std::string resourceGroupId_;
				std::string securityToken_;
				std::string dBInstanceDescription_;
				std::string businessInfo_;
				int period_;
				std::string backupId_;
				long ownerId_;
				std::string dBInstanceClass_;
				std::string securityIPList_;
				std::string vSwitchId_;
				std::string autoRenew_;
				std::string zoneId_;
				std::string clientToken_;
				std::string readonlyReplicas_;
				std::string replicationFactor_;
				std::string accessKeyId_;
				std::string storageEngine_;
				std::string databaseNames_;
				std::string regionId_;
				std::string engine_;
				std::string restoreTime_;
				std::string resourceOwnerAccount_;
				std::string srcDBInstanceId_;
				std::string ownerAccount_;
				std::string clusterId_;
				std::string accountPassword_;
				std::string vpcId_;
				std::string chargeType_;

			};
		}
	}
}
#endif // !ALIBABACLOUD_DDS_MODEL_CREATEDBINSTANCEREQUEST_H_