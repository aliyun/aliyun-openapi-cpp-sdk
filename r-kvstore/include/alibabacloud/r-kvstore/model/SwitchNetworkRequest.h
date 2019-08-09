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

#ifndef ALIBABACLOUD_R_KVSTORE_MODEL_SWITCHNETWORKREQUEST_H_
#define ALIBABACLOUD_R_KVSTORE_MODEL_SWITCHNETWORKREQUEST_H_

#include <string>
#include <vector>
#include <alibabacloud/core/RpcServiceRequest.h>
#include <alibabacloud/r-kvstore/R_kvstoreExport.h>

namespace AlibabaCloud
{
	namespace R_kvstore
	{
		namespace Model
		{
			class ALIBABACLOUD_R_KVSTORE_EXPORT SwitchNetworkRequest : public RpcServiceRequest
			{

			public:
				SwitchNetworkRequest();
				~SwitchNetworkRequest();

				long getResourceOwnerId()const;
				void setResourceOwnerId(long resourceOwnerId);
				std::string getResourceOwnerAccount()const;
				void setResourceOwnerAccount(const std::string& resourceOwnerAccount);
				std::string getOwnerAccount()const;
				void setOwnerAccount(const std::string& ownerAccount);
				long getOwnerId()const;
				void setOwnerId(long ownerId);
				std::string getAccessKeyId()const;
				void setAccessKeyId(const std::string& accessKeyId);
				std::string getVSwitchId()const;
				void setVSwitchId(const std::string& vSwitchId);
				std::string getInstanceId()const;
				void setInstanceId(const std::string& instanceId);
				std::string getSecurityToken()const;
				void setSecurityToken(const std::string& securityToken);
				std::string getRegionId()const;
				void setRegionId(const std::string& regionId);
				std::string getTargetNetworkType()const;
				void setTargetNetworkType(const std::string& targetNetworkType);
				std::string getRetainClassic()const;
				void setRetainClassic(const std::string& retainClassic);
				std::string getClassicExpiredDays()const;
				void setClassicExpiredDays(const std::string& classicExpiredDays);
				std::string getVpcId()const;
				void setVpcId(const std::string& vpcId);

            private:
				long resourceOwnerId_;
				std::string resourceOwnerAccount_;
				std::string ownerAccount_;
				long ownerId_;
				std::string accessKeyId_;
				std::string vSwitchId_;
				std::string instanceId_;
				std::string securityToken_;
				std::string regionId_;
				std::string targetNetworkType_;
				std::string retainClassic_;
				std::string classicExpiredDays_;
				std::string vpcId_;

			};
		}
	}
}
#endif // !ALIBABACLOUD_R_KVSTORE_MODEL_SWITCHNETWORKREQUEST_H_