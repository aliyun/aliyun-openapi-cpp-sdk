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

#ifndef ALIBABACLOUD_RDS_MODEL_RENEWINSTANCEREQUEST_H_
#define ALIBABACLOUD_RDS_MODEL_RENEWINSTANCEREQUEST_H_

#include <string>
#include <vector>
#include <alibabacloud/rds/RdsRequest.h>

namespace AlibabaCloud
{
	namespace Rds
	{
		namespace Model
		{
			class ALIBABACLOUD_RDS_EXPORT RenewInstanceRequest : public RdsRequest
			{

			public:
				RenewInstanceRequest();
				~RenewInstanceRequest();

				long getResourceOwnerId()const;
				void setResourceOwnerId(long resourceOwnerId);
				std::string getPeriod()const;
				void setPeriod(const std::string& period);
				std::string getAutoPay()const;
				void setAutoPay(const std::string& autoPay);
				std::string getResourceOwnerAccount()const;
				void setResourceOwnerAccount(const std::string& resourceOwnerAccount);
				std::string getClientToken()const;
				void setClientToken(const std::string& clientToken);
				std::string getDBInstanceId()const;
				void setDBInstanceId(const std::string& dBInstanceId);
				long getOwnerId()const;
				void setOwnerId(long ownerId);
				std::string getBusinessInfo()const;
				void setBusinessInfo(const std::string& businessInfo);
				std::string getAccessKeyId()const;
				void setAccessKeyId(const std::string& accessKeyId);

            private:
				long resourceOwnerId_;
				std::string period_;
				std::string autoPay_;
				std::string resourceOwnerAccount_;
				std::string clientToken_;
				std::string dBInstanceId_;
				long ownerId_;
				std::string businessInfo_;
				std::string accessKeyId_;

			};
		}
	}
}
#endif // !ALIBABACLOUD_RDS_MODEL_RENEWINSTANCEREQUEST_H_