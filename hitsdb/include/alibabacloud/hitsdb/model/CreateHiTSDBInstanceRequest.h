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

#ifndef ALIBABACLOUD_HITSDB_MODEL_CREATEHITSDBINSTANCEREQUEST_H_
#define ALIBABACLOUD_HITSDB_MODEL_CREATEHITSDBINSTANCEREQUEST_H_

#include <string>
#include <vector>
#include <alibabacloud/core/RpcServiceRequest.h>
#include <alibabacloud/hitsdb/HitsdbExport.h>

namespace AlibabaCloud
{
	namespace Hitsdb
	{
		namespace Model
		{
			class ALIBABACLOUD_HITSDB_EXPORT CreateHiTSDBInstanceRequest : public RpcServiceRequest
			{

			public:
				CreateHiTSDBInstanceRequest();
				~CreateHiTSDBInstanceRequest();

				long getResourceOwnerId()const;
				void setResourceOwnerId(long resourceOwnerId);
				std::string getConnectionString()const;
				void setConnectionString(const std::string& connectionString);
				std::string getClientToken()const;
				void setClientToken(const std::string& clientToken);
				std::string getInstanceClass()const;
				void setInstanceClass(const std::string& instanceClass);
				std::string getAccessKeyId()const;
				void setAccessKeyId(const std::string& accessKeyId);
				std::string getDuration()const;
				void setDuration(const std::string& duration);
				std::string getSecurityToken()const;
				void setSecurityToken(const std::string& securityToken);
				std::string getRegionId()const;
				void setRegionId(const std::string& regionId);
				std::string getMaxSeriesPerDatabase()const;
				void setMaxSeriesPerDatabase(const std::string& maxSeriesPerDatabase);
				std::string getDiskCategory()const;
				void setDiskCategory(const std::string& diskCategory);
				std::string getMaxTimelineLimit()const;
				void setMaxTimelineLimit(const std::string& maxTimelineLimit);
				std::string getInstanceStorage()const;
				void setInstanceStorage(const std::string& instanceStorage);
				std::string getEngineType()const;
				void setEngineType(const std::string& engineType);
				std::string getResourceOwnerAccount()const;
				void setResourceOwnerAccount(const std::string& resourceOwnerAccount);
				std::string getOwnerAccount()const;
				void setOwnerAccount(const std::string& ownerAccount);
				std::string getInstanceAlias()const;
				void setInstanceAlias(const std::string& instanceAlias);
				std::string getMaxDatabaseLimit()const;
				void setMaxDatabaseLimit(const std::string& maxDatabaseLimit);
				long getOwnerId()const;
				void setOwnerId(long ownerId);
				std::string getVSwitchId()const;
				void setVSwitchId(const std::string& vSwitchId);
				std::string getInstanceName()const;
				void setInstanceName(const std::string& instanceName);
				std::string getInstanceTps()const;
				void setInstanceTps(const std::string& instanceTps);
				std::string getVPCId()const;
				void setVPCId(const std::string& vPCId);
				std::string getZoneId()const;
				void setZoneId(const std::string& zoneId);
				std::string getTSDBVersion()const;
				void setTSDBVersion(const std::string& tSDBVersion);
				std::string getPayType()const;
				void setPayType(const std::string& payType);
				std::string getPricingCycle()const;
				void setPricingCycle(const std::string& pricingCycle);

            private:
				long resourceOwnerId_;
				std::string connectionString_;
				std::string clientToken_;
				std::string instanceClass_;
				std::string accessKeyId_;
				std::string duration_;
				std::string securityToken_;
				std::string regionId_;
				std::string maxSeriesPerDatabase_;
				std::string diskCategory_;
				std::string maxTimelineLimit_;
				std::string instanceStorage_;
				std::string engineType_;
				std::string resourceOwnerAccount_;
				std::string ownerAccount_;
				std::string instanceAlias_;
				std::string maxDatabaseLimit_;
				long ownerId_;
				std::string vSwitchId_;
				std::string instanceName_;
				std::string instanceTps_;
				std::string vPCId_;
				std::string zoneId_;
				std::string tSDBVersion_;
				std::string payType_;
				std::string pricingCycle_;

			};
		}
	}
}
#endif // !ALIBABACLOUD_HITSDB_MODEL_CREATEHITSDBINSTANCEREQUEST_H_