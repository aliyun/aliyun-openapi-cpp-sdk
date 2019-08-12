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

#ifndef ALIBABACLOUD_RDS_MODEL_MODIFYDBINSTANCENETWORKTYPEREQUEST_H_
#define ALIBABACLOUD_RDS_MODEL_MODIFYDBINSTANCENETWORKTYPEREQUEST_H_

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
			class ALIBABACLOUD_RDS_EXPORT ModifyDBInstanceNetworkTypeRequest : public RpcServiceRequest
			{

			public:
				ModifyDBInstanceNetworkTypeRequest();
				~ModifyDBInstanceNetworkTypeRequest();

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
				std::string getPrivateIpAddress()const;
				void setPrivateIpAddress(const std::string& privateIpAddress);
				std::string getRetainClassic()const;
				void setRetainClassic(const std::string& retainClassic);
				std::string getClassicExpiredDays()const;
				void setClassicExpiredDays(const std::string& classicExpiredDays);
				std::string getVPCId()const;
				void setVPCId(const std::string& vPCId);
				std::string getDBInstanceId()const;
				void setDBInstanceId(const std::string& dBInstanceId);
				std::string getReadWriteSplittingPrivateIpAddress()const;
				void setReadWriteSplittingPrivateIpAddress(const std::string& readWriteSplittingPrivateIpAddress);
				std::string getInstanceNetworkType()const;
				void setInstanceNetworkType(const std::string& instanceNetworkType);
				int getReadWriteSplittingClassicExpiredDays()const;
				void setReadWriteSplittingClassicExpiredDays(int readWriteSplittingClassicExpiredDays);

            private:
				long resourceOwnerId_;
				std::string resourceOwnerAccount_;
				std::string ownerAccount_;
				long ownerId_;
				std::string accessKeyId_;
				std::string vSwitchId_;
				std::string privateIpAddress_;
				std::string retainClassic_;
				std::string classicExpiredDays_;
				std::string vPCId_;
				std::string dBInstanceId_;
				std::string readWriteSplittingPrivateIpAddress_;
				std::string instanceNetworkType_;
				int readWriteSplittingClassicExpiredDays_;

			};
		}
	}
}
#endif // !ALIBABACLOUD_RDS_MODEL_MODIFYDBINSTANCENETWORKTYPEREQUEST_H_