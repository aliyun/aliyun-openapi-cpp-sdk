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

#ifndef ALIBABACLOUD_RDS_MODEL_CREATEDBINSTANCEREQUEST_H_
#define ALIBABACLOUD_RDS_MODEL_CREATEDBINSTANCEREQUEST_H_

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
			class ALIBABACLOUD_RDS_EXPORT CreateDBInstanceRequest : public RpcServiceRequest
			{

			public:
				CreateDBInstanceRequest();
				~CreateDBInstanceRequest();

				long getResourceOwnerId()const;
				void setResourceOwnerId(long resourceOwnerId);
				int getDBInstanceStorage()const;
				void setDBInstanceStorage(int dBInstanceStorage);
				std::string getSystemDBCharset()const;
				void setSystemDBCharset(const std::string& systemDBCharset);
				std::string getEngineVersion()const;
				void setEngineVersion(const std::string& engineVersion);
				std::string getResourceGroupId()const;
				void setResourceGroupId(const std::string& resourceGroupId);
				std::string getTargetDedicatedHostIdForMaster()const;
				void setTargetDedicatedHostIdForMaster(const std::string& targetDedicatedHostIdForMaster);
				std::string getDBInstanceDescription()const;
				void setDBInstanceDescription(const std::string& dBInstanceDescription);
				std::string getBusinessInfo()const;
				void setBusinessInfo(const std::string& businessInfo);
				std::string getPeriod()const;
				void setPeriod(const std::string& period);
				std::string getEncryptionKey()const;
				void setEncryptionKey(const std::string& encryptionKey);
				long getOwnerId()const;
				void setOwnerId(long ownerId);
				std::string getDBInstanceClass()const;
				void setDBInstanceClass(const std::string& dBInstanceClass);
				std::string getSecurityIPList()const;
				void setSecurityIPList(const std::string& securityIPList);
				std::string getVSwitchId()const;
				void setVSwitchId(const std::string& vSwitchId);
				std::string getPrivateIpAddress()const;
				void setPrivateIpAddress(const std::string& privateIpAddress);
				std::string getTargetDedicatedHostIdForLog()const;
				void setTargetDedicatedHostIdForLog(const std::string& targetDedicatedHostIdForLog);
				std::string getAutoRenew()const;
				void setAutoRenew(const std::string& autoRenew);
				std::string getRoleARN()const;
				void setRoleARN(const std::string& roleARN);
				std::string getTunnelId()const;
				void setTunnelId(const std::string& tunnelId);
				std::string getZoneId()const;
				void setZoneId(const std::string& zoneId);
				std::string getInstanceNetworkType()const;
				void setInstanceNetworkType(const std::string& instanceNetworkType);
				std::string getConnectionMode()const;
				void setConnectionMode(const std::string& connectionMode);
				std::string getClientToken()const;
				void setClientToken(const std::string& clientToken);
				std::string getTargetDedicatedHostIdForSlave()const;
				void setTargetDedicatedHostIdForSlave(const std::string& targetDedicatedHostIdForSlave);
				std::string getZoneIdSlave1()const;
				void setZoneIdSlave1(const std::string& zoneIdSlave1);
				std::string getZoneIdSlave2()const;
				void setZoneIdSlave2(const std::string& zoneIdSlave2);
				std::string getAccessKeyId()const;
				void setAccessKeyId(const std::string& accessKeyId);
				std::string getRegionId()const;
				void setRegionId(const std::string& regionId);
				std::string getEngine()const;
				void setEngine(const std::string& engine);
				std::string getDBInstanceStorageType()const;
				void setDBInstanceStorageType(const std::string& dBInstanceStorageType);
				std::string getDedicatedHostGroupId()const;
				void setDedicatedHostGroupId(const std::string& dedicatedHostGroupId);
				std::string getDBInstanceNetType()const;
				void setDBInstanceNetType(const std::string& dBInstanceNetType);
				std::string getResourceOwnerAccount()const;
				void setResourceOwnerAccount(const std::string& resourceOwnerAccount);
				std::string getOwnerAccount()const;
				void setOwnerAccount(const std::string& ownerAccount);
				std::string getUsedTime()const;
				void setUsedTime(const std::string& usedTime);
				std::string getVPCId()const;
				void setVPCId(const std::string& vPCId);
				std::string getCategory()const;
				void setCategory(const std::string& category);
				std::string getPayType()const;
				void setPayType(const std::string& payType);

            private:
				long resourceOwnerId_;
				int dBInstanceStorage_;
				std::string systemDBCharset_;
				std::string engineVersion_;
				std::string resourceGroupId_;
				std::string targetDedicatedHostIdForMaster_;
				std::string dBInstanceDescription_;
				std::string businessInfo_;
				std::string period_;
				std::string encryptionKey_;
				long ownerId_;
				std::string dBInstanceClass_;
				std::string securityIPList_;
				std::string vSwitchId_;
				std::string privateIpAddress_;
				std::string targetDedicatedHostIdForLog_;
				std::string autoRenew_;
				std::string roleARN_;
				std::string tunnelId_;
				std::string zoneId_;
				std::string instanceNetworkType_;
				std::string connectionMode_;
				std::string clientToken_;
				std::string targetDedicatedHostIdForSlave_;
				std::string zoneIdSlave1_;
				std::string zoneIdSlave2_;
				std::string accessKeyId_;
				std::string regionId_;
				std::string engine_;
				std::string dBInstanceStorageType_;
				std::string dedicatedHostGroupId_;
				std::string dBInstanceNetType_;
				std::string resourceOwnerAccount_;
				std::string ownerAccount_;
				std::string usedTime_;
				std::string vPCId_;
				std::string category_;
				std::string payType_;

			};
		}
	}
}
#endif // !ALIBABACLOUD_RDS_MODEL_CREATEDBINSTANCEREQUEST_H_