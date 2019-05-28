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

#ifndef ALIBABACLOUD_RDS_MODEL_CREATEDBINSTANCEREPLICAREQUEST_H_
#define ALIBABACLOUD_RDS_MODEL_CREATEDBINSTANCEREPLICAREQUEST_H_

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
			class ALIBABACLOUD_RDS_EXPORT CreateDBInstanceReplicaRequest : public RpcServiceRequest
			{

			public:
				CreateDBInstanceReplicaRequest();
				~CreateDBInstanceReplicaRequest();

				std::string getConnectionMode()const;
				void setConnectionMode(const std::string& connectionMode);
				std::string getDomainMode()const;
				void setDomainMode(const std::string& domainMode);
				std::string getReplicaDescription()const;
				void setReplicaDescription(const std::string& replicaDescription);
				long getResourceOwnerId()const;
				void setResourceOwnerId(long resourceOwnerId);
				int getDBInstanceStorage()const;
				void setDBInstanceStorage(int dBInstanceStorage);
				std::string getSystemDBCharset()const;
				void setSystemDBCharset(const std::string& systemDBCharset);
				std::string getClientToken()const;
				void setClientToken(const std::string& clientToken);
				std::string getEngineVersion()const;
				void setEngineVersion(const std::string& engineVersion);
				std::string getAccessKeyId()const;
				void setAccessKeyId(const std::string& accessKeyId);
				std::string getRegionId()const;
				void setRegionId(const std::string& regionId);
				std::string getEngine()const;
				void setEngine(const std::string& engine);
				std::string getDBInstanceDescription()const;
				void setDBInstanceDescription(const std::string& dBInstanceDescription);
				std::string getDBInstanceNetType()const;
				void setDBInstanceNetType(const std::string& dBInstanceNetType);
				std::string getPeriod()const;
				void setPeriod(const std::string& period);
				std::string getResourceOwnerAccount()const;
				void setResourceOwnerAccount(const std::string& resourceOwnerAccount);
				std::string getOwnerAccount()const;
				void setOwnerAccount(const std::string& ownerAccount);
				long getOwnerId()const;
				void setOwnerId(long ownerId);
				std::string getUsedTime()const;
				void setUsedTime(const std::string& usedTime);
				std::string getDBInstanceClass()const;
				void setDBInstanceClass(const std::string& dBInstanceClass);
				std::string getSecurityIPList()const;
				void setSecurityIPList(const std::string& securityIPList);
				std::string getVSwitchId()const;
				void setVSwitchId(const std::string& vSwitchId);
				std::string getPrivateIpAddress()const;
				void setPrivateIpAddress(const std::string& privateIpAddress);
				std::string getSourceDBInstanceId()const;
				void setSourceDBInstanceId(const std::string& sourceDBInstanceId);
				std::string getReplicaMode()const;
				void setReplicaMode(const std::string& replicaMode);
				std::string getVPCId()const;
				void setVPCId(const std::string& vPCId);
				std::string getZoneId()const;
				void setZoneId(const std::string& zoneId);
				std::string getPayType()const;
				void setPayType(const std::string& payType);
				std::string getInstanceNetworkType()const;
				void setInstanceNetworkType(const std::string& instanceNetworkType);

            private:
				std::string connectionMode_;
				std::string domainMode_;
				std::string replicaDescription_;
				long resourceOwnerId_;
				int dBInstanceStorage_;
				std::string systemDBCharset_;
				std::string clientToken_;
				std::string engineVersion_;
				std::string accessKeyId_;
				std::string regionId_;
				std::string engine_;
				std::string dBInstanceDescription_;
				std::string dBInstanceNetType_;
				std::string period_;
				std::string resourceOwnerAccount_;
				std::string ownerAccount_;
				long ownerId_;
				std::string usedTime_;
				std::string dBInstanceClass_;
				std::string securityIPList_;
				std::string vSwitchId_;
				std::string privateIpAddress_;
				std::string sourceDBInstanceId_;
				std::string replicaMode_;
				std::string vPCId_;
				std::string zoneId_;
				std::string payType_;
				std::string instanceNetworkType_;

			};
		}
	}
}
#endif // !ALIBABACLOUD_RDS_MODEL_CREATEDBINSTANCEREPLICAREQUEST_H_