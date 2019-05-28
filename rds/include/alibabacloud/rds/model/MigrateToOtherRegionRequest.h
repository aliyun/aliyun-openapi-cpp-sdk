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

#ifndef ALIBABACLOUD_RDS_MODEL_MIGRATETOOTHERREGIONREQUEST_H_
#define ALIBABACLOUD_RDS_MODEL_MIGRATETOOTHERREGIONREQUEST_H_

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
			class ALIBABACLOUD_RDS_EXPORT MigrateToOtherRegionRequest : public RpcServiceRequest
			{

			public:
				MigrateToOtherRegionRequest();
				~MigrateToOtherRegionRequest();

				long getResourceOwnerId()const;
				void setResourceOwnerId(long resourceOwnerId);
				std::string getResourceOwnerAccount()const;
				void setResourceOwnerAccount(const std::string& resourceOwnerAccount);
				std::string getOwnerAccount()const;
				void setOwnerAccount(const std::string& ownerAccount);
				std::string getTargetVSwitchId()const;
				void setTargetVSwitchId(const std::string& targetVSwitchId);
				long getOwnerId()const;
				void setOwnerId(long ownerId);
				std::string getAccessKeyId()const;
				void setAccessKeyId(const std::string& accessKeyId);
				std::string getTargetVpcId()const;
				void setTargetVpcId(const std::string& targetVpcId);
				std::string getTargetZoneId()const;
				void setTargetZoneId(const std::string& targetZoneId);
				std::string getEffectiveTime()const;
				void setEffectiveTime(const std::string& effectiveTime);
				std::string getDBInstanceId()const;
				void setDBInstanceId(const std::string& dBInstanceId);
				std::string getTargetRegionId()const;
				void setTargetRegionId(const std::string& targetRegionId);
				std::string getSwitchTime()const;
				void setSwitchTime(const std::string& switchTime);

            private:
				long resourceOwnerId_;
				std::string resourceOwnerAccount_;
				std::string ownerAccount_;
				std::string targetVSwitchId_;
				long ownerId_;
				std::string accessKeyId_;
				std::string targetVpcId_;
				std::string targetZoneId_;
				std::string effectiveTime_;
				std::string dBInstanceId_;
				std::string targetRegionId_;
				std::string switchTime_;

			};
		}
	}
}
#endif // !ALIBABACLOUD_RDS_MODEL_MIGRATETOOTHERREGIONREQUEST_H_