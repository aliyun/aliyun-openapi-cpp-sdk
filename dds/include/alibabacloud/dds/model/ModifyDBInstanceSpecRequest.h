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

#ifndef ALIBABACLOUD_DDS_MODEL_MODIFYDBINSTANCESPECREQUEST_H_
#define ALIBABACLOUD_DDS_MODEL_MODIFYDBINSTANCESPECREQUEST_H_

#include <string>
#include <vector>
#include <alibabacloud/core/RpcServiceRequest.h>
#include <alibabacloud/dds/DdsExport.h>

namespace AlibabaCloud
{
	namespace Dds
	{
		namespace Model
		{
			class ALIBABACLOUD_DDS_EXPORT ModifyDBInstanceSpecRequest : public RpcServiceRequest
			{

			public:
				ModifyDBInstanceSpecRequest();
				~ModifyDBInstanceSpecRequest();

				long getResourceOwnerId()const;
				void setResourceOwnerId(long resourceOwnerId);
				std::string getDBInstanceStorage()const;
				void setDBInstanceStorage(const std::string& dBInstanceStorage);
				bool getAutoPay()const;
				void setAutoPay(bool autoPay);
				std::string getFromApp()const;
				void setFromApp(const std::string& fromApp);
				std::string getResourceOwnerAccount()const;
				void setResourceOwnerAccount(const std::string& resourceOwnerAccount);
				std::string getOwnerAccount()const;
				void setOwnerAccount(const std::string& ownerAccount);
				std::string getReadonlyReplicas()const;
				void setReadonlyReplicas(const std::string& readonlyReplicas);
				std::string getCouponNo()const;
				void setCouponNo(const std::string& couponNo);
				long getOwnerId()const;
				void setOwnerId(long ownerId);
				std::string getReplicationFactor()const;
				void setReplicationFactor(const std::string& replicationFactor);
				std::string getAccessKeyId()const;
				void setAccessKeyId(const std::string& accessKeyId);
				std::string getDBInstanceClass()const;
				void setDBInstanceClass(const std::string& dBInstanceClass);
				std::string getSecurityToken()const;
				void setSecurityToken(const std::string& securityToken);
				std::string getRegionId()const;
				void setRegionId(const std::string& regionId);
				std::string getEffectiveTime()const;
				void setEffectiveTime(const std::string& effectiveTime);
				std::string getDBInstanceId()const;
				void setDBInstanceId(const std::string& dBInstanceId);
				std::string getBusinessInfo()const;
				void setBusinessInfo(const std::string& businessInfo);
				std::string getOrderType()const;
				void setOrderType(const std::string& orderType);

            private:
				long resourceOwnerId_;
				std::string dBInstanceStorage_;
				bool autoPay_;
				std::string fromApp_;
				std::string resourceOwnerAccount_;
				std::string ownerAccount_;
				std::string readonlyReplicas_;
				std::string couponNo_;
				long ownerId_;
				std::string replicationFactor_;
				std::string accessKeyId_;
				std::string dBInstanceClass_;
				std::string securityToken_;
				std::string regionId_;
				std::string effectiveTime_;
				std::string dBInstanceId_;
				std::string businessInfo_;
				std::string orderType_;

			};
		}
	}
}
#endif // !ALIBABACLOUD_DDS_MODEL_MODIFYDBINSTANCESPECREQUEST_H_