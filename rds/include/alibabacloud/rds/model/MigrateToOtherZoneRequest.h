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

#ifndef ALIBABACLOUD_RDS_MODEL_MIGRATETOOTHERZONEREQUEST_H_
#define ALIBABACLOUD_RDS_MODEL_MIGRATETOOTHERZONEREQUEST_H_

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
			class ALIBABACLOUD_RDS_EXPORT MigrateToOtherZoneRequest : public RpcServiceRequest
			{

			public:
				MigrateToOtherZoneRequest();
				~MigrateToOtherZoneRequest();

				long getResourceOwnerId()const;
				void setResourceOwnerId(long resourceOwnerId);
				std::string getResourceOwnerAccount()const;
				void setResourceOwnerAccount(const std::string& resourceOwnerAccount);
				std::string getOwnerAccount()const;
				void setOwnerAccount(const std::string& ownerAccount);
				std::string getZoneIdSlave1()const;
				void setZoneIdSlave1(const std::string& zoneIdSlave1);
				std::string getZoneIdSlave2()const;
				void setZoneIdSlave2(const std::string& zoneIdSlave2);
				long getOwnerId()const;
				void setOwnerId(long ownerId);
				std::string getAccessKeyId()const;
				void setAccessKeyId(const std::string& accessKeyId);
				std::string getVSwitchId()const;
				void setVSwitchId(const std::string& vSwitchId);
				std::string getEffectiveTime()const;
				void setEffectiveTime(const std::string& effectiveTime);
				std::string getVPCId()const;
				void setVPCId(const std::string& vPCId);
				std::string getZoneId()const;
				void setZoneId(const std::string& zoneId);
				std::string getDBInstanceId()const;
				void setDBInstanceId(const std::string& dBInstanceId);
				std::string getCategory()const;
				void setCategory(const std::string& category);

            private:
				long resourceOwnerId_;
				std::string resourceOwnerAccount_;
				std::string ownerAccount_;
				std::string zoneIdSlave1_;
				std::string zoneIdSlave2_;
				long ownerId_;
				std::string accessKeyId_;
				std::string vSwitchId_;
				std::string effectiveTime_;
				std::string vPCId_;
				std::string zoneId_;
				std::string dBInstanceId_;
				std::string category_;

			};
		}
	}
}
#endif // !ALIBABACLOUD_RDS_MODEL_MIGRATETOOTHERZONEREQUEST_H_