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

#ifndef ALIBABACLOUD_POLARDB_MODEL_CREATEDBCLUSTERREQUEST_H_
#define ALIBABACLOUD_POLARDB_MODEL_CREATEDBCLUSTERREQUEST_H_

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
			class ALIBABACLOUD_POLARDB_EXPORT CreateDBClusterRequest : public RpcServiceRequest
			{

			public:
				CreateDBClusterRequest();
				~CreateDBClusterRequest();

				long getResourceOwnerId()const;
				void setResourceOwnerId(long resourceOwnerId);
				std::string getDBClusterDescription()const;
				void setDBClusterDescription(const std::string& dBClusterDescription);
				std::string getClientToken()const;
				void setClientToken(const std::string& clientToken);
				std::string getAccessKeyId()const;
				void setAccessKeyId(const std::string& accessKeyId);
				std::string getClusterNetworkType()const;
				void setClusterNetworkType(const std::string& clusterNetworkType);
				std::string getResourceGroupId()const;
				void setResourceGroupId(const std::string& resourceGroupId);
				std::string getDBNodeClass()const;
				void setDBNodeClass(const std::string& dBNodeClass);
				std::string getEngine()const;
				void setEngine(const std::string& engine);
				std::string getCreationOption()const;
				void setCreationOption(const std::string& creationOption);
				std::string getSourceResourceId()const;
				void setSourceResourceId(const std::string& sourceResourceId);
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
				std::string getVSwitchId()const;
				void setVSwitchId(const std::string& vSwitchId);
				bool getAutoRenew()const;
				void setAutoRenew(bool autoRenew);
				std::string getVPCId()const;
				void setVPCId(const std::string& vPCId);
				std::string getDBType()const;
				void setDBType(const std::string& dBType);
				std::string getZoneId()const;
				void setZoneId(const std::string& zoneId);
				std::string getDBVersion()const;
				void setDBVersion(const std::string& dBVersion);
				std::string getCloneDataPoint()const;
				void setCloneDataPoint(const std::string& cloneDataPoint);
				std::string getPayType()const;
				void setPayType(const std::string& payType);

            private:
				long resourceOwnerId_;
				std::string dBClusterDescription_;
				std::string clientToken_;
				std::string accessKeyId_;
				std::string clusterNetworkType_;
				std::string resourceGroupId_;
				std::string dBNodeClass_;
				std::string engine_;
				std::string creationOption_;
				std::string sourceResourceId_;
				std::string period_;
				std::string resourceOwnerAccount_;
				std::string ownerAccount_;
				long ownerId_;
				std::string usedTime_;
				std::string vSwitchId_;
				bool autoRenew_;
				std::string vPCId_;
				std::string dBType_;
				std::string zoneId_;
				std::string dBVersion_;
				std::string cloneDataPoint_;
				std::string payType_;

			};
		}
	}
}
#endif // !ALIBABACLOUD_POLARDB_MODEL_CREATEDBCLUSTERREQUEST_H_