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

#ifndef ALIBABACLOUD_RDS_MODEL_CREATEDEDICATEDHOSTREQUEST_H_
#define ALIBABACLOUD_RDS_MODEL_CREATEDEDICATEDHOSTREQUEST_H_

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
			class ALIBABACLOUD_RDS_EXPORT CreateDedicatedHostRequest : public RpcServiceRequest
			{

			public:
				CreateDedicatedHostRequest();
				~CreateDedicatedHostRequest();

				long getResourceOwnerId()const;
				void setResourceOwnerId(long resourceOwnerId);
				std::string getClientToken()const;
				void setClientToken(const std::string& clientToken);
				std::string getAccessKeyId()const;
				void setAccessKeyId(const std::string& accessKeyId);
				std::string getHostName()const;
				void setHostName(const std::string& hostName);
				int getHostCount()const;
				void setHostCount(int hostCount);
				std::string getRegionId()const;
				void setRegionId(const std::string& regionId);
				std::string getDedicatedHostGroupId()const;
				void setDedicatedHostGroupId(const std::string& dedicatedHostGroupId);
				std::string getPeriod()const;
				void setPeriod(const std::string& period);
				std::string getHostClass()const;
				void setHostClass(const std::string& hostClass);
				std::string getResourceOwnerAccount()const;
				void setResourceOwnerAccount(const std::string& resourceOwnerAccount);
				long getOwnerId()const;
				void setOwnerId(long ownerId);
				std::string getUsedTime()const;
				void setUsedTime(const std::string& usedTime);
				std::string getVSwitchId()const;
				void setVSwitchId(const std::string& vSwitchId);
				std::string getAutoRenew()const;
				void setAutoRenew(const std::string& autoRenew);
				std::string getZoneId()const;
				void setZoneId(const std::string& zoneId);
				std::string getPayType()const;
				void setPayType(const std::string& payType);

            private:
				long resourceOwnerId_;
				std::string clientToken_;
				std::string accessKeyId_;
				std::string hostName_;
				int hostCount_;
				std::string regionId_;
				std::string dedicatedHostGroupId_;
				std::string period_;
				std::string hostClass_;
				std::string resourceOwnerAccount_;
				long ownerId_;
				std::string usedTime_;
				std::string vSwitchId_;
				std::string autoRenew_;
				std::string zoneId_;
				std::string payType_;

			};
		}
	}
}
#endif // !ALIBABACLOUD_RDS_MODEL_CREATEDEDICATEDHOSTREQUEST_H_