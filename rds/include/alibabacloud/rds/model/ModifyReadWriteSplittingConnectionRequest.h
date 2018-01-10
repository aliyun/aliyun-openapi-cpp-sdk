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

#ifndef ALIBABACLOUD_RDS_MODEL_MODIFYREADWRITESPLITTINGCONNECTIONREQUEST_H_
#define ALIBABACLOUD_RDS_MODEL_MODIFYREADWRITESPLITTINGCONNECTIONREQUEST_H_

#include <string>
#include <vector>
#include <alibabacloud/rds/RdsRequest.h>

namespace AlibabaCloud
{
	namespace Rds
	{
		namespace Model
		{
			class ALIBABACLOUD_RDS_EXPORT ModifyReadWriteSplittingConnectionRequest : public RdsRequest
			{

			public:
				ModifyReadWriteSplittingConnectionRequest();
				~ModifyReadWriteSplittingConnectionRequest();

				long getResourceOwnerId()const;
				void setResourceOwnerId(long resourceOwnerId);
				std::string getConnectionStringPrefix()const;
				void setConnectionStringPrefix(const std::string& connectionStringPrefix);
				std::string getResourceOwnerAccount()const;
				void setResourceOwnerAccount(const std::string& resourceOwnerAccount);
				std::string getPort()const;
				void setPort(const std::string& port);
				std::string getDistributionType()const;
				void setDistributionType(const std::string& distributionType);
				std::string getOwnerAccount()const;
				void setOwnerAccount(const std::string& ownerAccount);
				std::string getWeight()const;
				void setWeight(const std::string& weight);
				std::string getDBInstanceId()const;
				void setDBInstanceId(const std::string& dBInstanceId);
				long getOwnerId()const;
				void setOwnerId(long ownerId);
				std::string getMaxDelayTime()const;
				void setMaxDelayTime(const std::string& maxDelayTime);
				std::string getAccessKeyId()const;
				void setAccessKeyId(const std::string& accessKeyId);

            private:
				long resourceOwnerId_;
				std::string connectionStringPrefix_;
				std::string resourceOwnerAccount_;
				std::string port_;
				std::string distributionType_;
				std::string ownerAccount_;
				std::string weight_;
				std::string dBInstanceId_;
				long ownerId_;
				std::string maxDelayTime_;
				std::string accessKeyId_;

			};
		}
	}
}
#endif // !ALIBABACLOUD_RDS_MODEL_MODIFYREADWRITESPLITTINGCONNECTIONREQUEST_H_