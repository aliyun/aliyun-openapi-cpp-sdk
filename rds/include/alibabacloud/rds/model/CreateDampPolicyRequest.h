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

#ifndef ALIBABACLOUD_RDS_MODEL_CREATEDAMPPOLICYREQUEST_H_
#define ALIBABACLOUD_RDS_MODEL_CREATEDAMPPOLICYREQUEST_H_

#include <string>
#include <vector>
#include <alibabacloud/rds/RdsRequest.h>

namespace AlibabaCloud
{
	namespace Rds
	{
		namespace Model
		{
			class ALIBABACLOUD_RDS_EXPORT CreateDampPolicyRequest : public RdsRequest
			{

			public:
				CreateDampPolicyRequest();
				~CreateDampPolicyRequest();

				long getResourceOwnerId()const;
				void setResourceOwnerId(long resourceOwnerId);
				std::string getResourceOwnerAccount()const;
				void setResourceOwnerAccount(const std::string& resourceOwnerAccount);
				std::string getOwnerAccount()const;
				void setOwnerAccount(const std::string& ownerAccount);
				long getOwnerId()const;
				void setOwnerId(long ownerId);
				int getPriority()const;
				void setPriority(int priority);
				std::string getAccessKeyId()const;
				void setAccessKeyId(const std::string& accessKeyId);
				std::string getTimeRules()const;
				void setTimeRules(const std::string& timeRules);
				std::string getActionRules()const;
				void setActionRules(const std::string& actionRules);
				std::string getSecurityToken()const;
				void setSecurityToken(const std::string& securityToken);
				std::string getRegionId()const;
				void setRegionId(const std::string& regionId);
				std::string getHandlers()const;
				void setHandlers(const std::string& handlers);
				std::string getDBInstanceId()const;
				void setDBInstanceId(const std::string& dBInstanceId);
				std::string getPolicyName()const;
				void setPolicyName(const std::string& policyName);
				std::string getSourceRules()const;
				void setSourceRules(const std::string& sourceRules);

            private:
				long resourceOwnerId_;
				std::string resourceOwnerAccount_;
				std::string ownerAccount_;
				long ownerId_;
				int priority_;
				std::string accessKeyId_;
				std::string timeRules_;
				std::string actionRules_;
				std::string securityToken_;
				std::string regionId_;
				std::string handlers_;
				std::string dBInstanceId_;
				std::string policyName_;
				std::string sourceRules_;

			};
		}
	}
}
#endif // !ALIBABACLOUD_RDS_MODEL_CREATEDAMPPOLICYREQUEST_H_