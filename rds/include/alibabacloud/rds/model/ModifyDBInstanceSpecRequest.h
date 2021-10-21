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

#ifndef ALIBABACLOUD_RDS_MODEL_MODIFYDBINSTANCESPECREQUEST_H_
#define ALIBABACLOUD_RDS_MODEL_MODIFYDBINSTANCESPECREQUEST_H_

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
			class ALIBABACLOUD_RDS_EXPORT ModifyDBInstanceSpecRequest : public RpcServiceRequest
			{

			public:
				ModifyDBInstanceSpecRequest();
				~ModifyDBInstanceSpecRequest();

				long getResourceOwnerId()const;
				void setResourceOwnerId(long resourceOwnerId);
				int getDBInstanceStorage()const;
				void setDBInstanceStorage(int dBInstanceStorage);
				std::string getClientToken()const;
				void setClientToken(const std::string& clientToken);
				std::string getEngineVersion()const;
				void setEngineVersion(const std::string& engineVersion);
				std::string getAccessKeyId()const;
				void setAccessKeyId(const std::string& accessKeyId);
				std::string getResourceGroupId()const;
				void setResourceGroupId(const std::string& resourceGroupId);
				std::string getEffectiveTime()const;
				void setEffectiveTime(const std::string& effectiveTime);
				std::string getDBInstanceId()const;
				void setDBInstanceId(const std::string& dBInstanceId);
				std::string getSwitchTime()const;
				void setSwitchTime(const std::string& switchTime);
				std::string getDBInstanceStorageType()const;
				void setDBInstanceStorageType(const std::string& dBInstanceStorageType);
				std::string getSourceBiz()const;
				void setSourceBiz(const std::string& sourceBiz);
				std::string getDedicatedHostGroupId()const;
				void setDedicatedHostGroupId(const std::string& dedicatedHostGroupId);
				std::string getDirection()const;
				void setDirection(const std::string& direction);
				std::string getResourceOwnerAccount()const;
				void setResourceOwnerAccount(const std::string& resourceOwnerAccount);
				std::string getOwnerAccount()const;
				void setOwnerAccount(const std::string& ownerAccount);
				long getOwnerId()const;
				void setOwnerId(long ownerId);
				long getUsedTime()const;
				void setUsedTime(long usedTime);
				std::string getDBInstanceClass()const;
				void setDBInstanceClass(const std::string& dBInstanceClass);
				std::string getZoneId()const;
				void setZoneId(const std::string& zoneId);
				std::string getPayType()const;
				void setPayType(const std::string& payType);

            private:
				long resourceOwnerId_;
				int dBInstanceStorage_;
				std::string clientToken_;
				std::string engineVersion_;
				std::string accessKeyId_;
				std::string resourceGroupId_;
				std::string effectiveTime_;
				std::string dBInstanceId_;
				std::string switchTime_;
				std::string dBInstanceStorageType_;
				std::string sourceBiz_;
				std::string dedicatedHostGroupId_;
				std::string direction_;
				std::string resourceOwnerAccount_;
				std::string ownerAccount_;
				long ownerId_;
				long usedTime_;
				std::string dBInstanceClass_;
				std::string zoneId_;
				std::string payType_;

			};
		}
	}
}
#endif // !ALIBABACLOUD_RDS_MODEL_MODIFYDBINSTANCESPECREQUEST_H_