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

#ifndef ALIBABACLOUD_RDS_MODEL_CREATEREADONLYDBINSTANCEREQUEST_H_
#define ALIBABACLOUD_RDS_MODEL_CREATEREADONLYDBINSTANCEREQUEST_H_

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
			class ALIBABACLOUD_RDS_EXPORT CreateReadOnlyDBInstanceRequest : public RpcServiceRequest
			{

			public:
				CreateReadOnlyDBInstanceRequest();
				~CreateReadOnlyDBInstanceRequest();

				long getResourceOwnerId()const;
				void setResourceOwnerId(long resourceOwnerId);
				int getDBInstanceStorage()const;
				void setDBInstanceStorage(int dBInstanceStorage);
				std::string getResourceOwnerAccount()const;
				void setResourceOwnerAccount(const std::string& resourceOwnerAccount);
				std::string getClientToken()const;
				void setClientToken(const std::string& clientToken);
				std::string getOwnerAccount()const;
				void setOwnerAccount(const std::string& ownerAccount);
				std::string getEngineVersion()const;
				void setEngineVersion(const std::string& engineVersion);
				long getOwnerId()const;
				void setOwnerId(long ownerId);
				std::string getAccessKeyId()const;
				void setAccessKeyId(const std::string& accessKeyId);
				std::string getDBInstanceClass()const;
				void setDBInstanceClass(const std::string& dBInstanceClass);
				std::string getVSwitchId()const;
				void setVSwitchId(const std::string& vSwitchId);
				std::string getPrivateIpAddress()const;
				void setPrivateIpAddress(const std::string& privateIpAddress);
				std::string getResourceGroupId()const;
				void setResourceGroupId(const std::string& resourceGroupId);
				std::string getRegionId()const;
				void setRegionId(const std::string& regionId);
				std::string getVPCId()const;
				void setVPCId(const std::string& vPCId);
				std::string getZoneId()const;
				void setZoneId(const std::string& zoneId);
				std::string getDBInstanceId()const;
				void setDBInstanceId(const std::string& dBInstanceId);
				std::string getDBInstanceDescription()const;
				void setDBInstanceDescription(const std::string& dBInstanceDescription);
				std::string getDBInstanceStorageType()const;
				void setDBInstanceStorageType(const std::string& dBInstanceStorageType);
				std::string getCategory()const;
				void setCategory(const std::string& category);
				std::string getPayType()const;
				void setPayType(const std::string& payType);
				std::string getInstanceNetworkType()const;
				void setInstanceNetworkType(const std::string& instanceNetworkType);

            private:
				long resourceOwnerId_;
				int dBInstanceStorage_;
				std::string resourceOwnerAccount_;
				std::string clientToken_;
				std::string ownerAccount_;
				std::string engineVersion_;
				long ownerId_;
				std::string accessKeyId_;
				std::string dBInstanceClass_;
				std::string vSwitchId_;
				std::string privateIpAddress_;
				std::string resourceGroupId_;
				std::string regionId_;
				std::string vPCId_;
				std::string zoneId_;
				std::string dBInstanceId_;
				std::string dBInstanceDescription_;
				std::string dBInstanceStorageType_;
				std::string category_;
				std::string payType_;
				std::string instanceNetworkType_;

			};
		}
	}
}
#endif // !ALIBABACLOUD_RDS_MODEL_CREATEREADONLYDBINSTANCEREQUEST_H_