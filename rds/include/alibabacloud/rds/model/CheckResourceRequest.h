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

#ifndef ALIBABACLOUD_RDS_MODEL_CHECKRESOURCEREQUEST_H_
#define ALIBABACLOUD_RDS_MODEL_CHECKRESOURCEREQUEST_H_

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
			class ALIBABACLOUD_RDS_EXPORT CheckResourceRequest : public RpcServiceRequest
			{

			public:
				CheckResourceRequest();
				~CheckResourceRequest();

				long getResourceOwnerId()const;
				void setResourceOwnerId(long resourceOwnerId);
				std::string getResourceOwnerAccount()const;
				void setResourceOwnerAccount(const std::string& resourceOwnerAccount);
				std::string getOwnerAccount()const;
				void setOwnerAccount(const std::string& ownerAccount);
				std::string getSpecifyCount()const;
				void setSpecifyCount(const std::string& specifyCount);
				std::string getEngineVersion()const;
				void setEngineVersion(const std::string& engineVersion);
				long getOwnerId()const;
				void setOwnerId(long ownerId);
				std::string getAccessKeyId()const;
				void setAccessKeyId(const std::string& accessKeyId);
				std::string getDBInstanceClass()const;
				void setDBInstanceClass(const std::string& dBInstanceClass);
				std::string getEngine()const;
				void setEngine(const std::string& engine);
				std::string getRegionId()const;
				void setRegionId(const std::string& regionId);
				std::string getZoneId()const;
				void setZoneId(const std::string& zoneId);
				std::string getDBInstanceUseType()const;
				void setDBInstanceUseType(const std::string& dBInstanceUseType);
				std::string getDBInstanceId()const;
				void setDBInstanceId(const std::string& dBInstanceId);

            private:
				long resourceOwnerId_;
				std::string resourceOwnerAccount_;
				std::string ownerAccount_;
				std::string specifyCount_;
				std::string engineVersion_;
				long ownerId_;
				std::string accessKeyId_;
				std::string dBInstanceClass_;
				std::string engine_;
				std::string regionId_;
				std::string zoneId_;
				std::string dBInstanceUseType_;
				std::string dBInstanceId_;

			};
		}
	}
}
#endif // !ALIBABACLOUD_RDS_MODEL_CHECKRESOURCEREQUEST_H_