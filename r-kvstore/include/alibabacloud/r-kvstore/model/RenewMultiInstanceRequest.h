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

#ifndef ALIBABACLOUD_R_KVSTORE_MODEL_RENEWMULTIINSTANCEREQUEST_H_
#define ALIBABACLOUD_R_KVSTORE_MODEL_RENEWMULTIINSTANCEREQUEST_H_

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
			class ALIBABACLOUD_R_KVSTORE_EXPORT RenewMultiInstanceRequest : public RpcServiceRequest
			{

			public:
				RenewMultiInstanceRequest();
				~RenewMultiInstanceRequest();

				long getResourceOwnerId()const;
				void setResourceOwnerId(long resourceOwnerId);
				long getPeriod()const;
				void setPeriod(long period);
				bool getAutoPay()const;
				void setAutoPay(bool autoPay);
				std::string getFromApp()const;
				void setFromApp(const std::string& fromApp);
				std::string getResourceOwnerAccount()const;
				void setResourceOwnerAccount(const std::string& resourceOwnerAccount);
				std::string getOwnerAccount()const;
				void setOwnerAccount(const std::string& ownerAccount);
				std::string getCouponNo()const;
				void setCouponNo(const std::string& couponNo);
				long getOwnerId()const;
				void setOwnerId(long ownerId);
				std::string getAccessKeyId()const;
				void setAccessKeyId(const std::string& accessKeyId);
				std::string getSecurityToken()const;
				void setSecurityToken(const std::string& securityToken);
				std::string getRegionId()const;
				void setRegionId(const std::string& regionId);
				std::string getInstanceIds()const;
				void setInstanceIds(const std::string& instanceIds);
				std::string getBusinessInfo()const;
				void setBusinessInfo(const std::string& businessInfo);

            private:
				long resourceOwnerId_;
				long period_;
				bool autoPay_;
				std::string fromApp_;
				std::string resourceOwnerAccount_;
				std::string ownerAccount_;
				std::string couponNo_;
				long ownerId_;
				std::string accessKeyId_;
				std::string securityToken_;
				std::string regionId_;
				std::string instanceIds_;
				std::string businessInfo_;

			};
		}
	}
}
#endif // !ALIBABACLOUD_R_KVSTORE_MODEL_RENEWMULTIINSTANCEREQUEST_H_