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

#ifndef ALIBABACLOUD_DDS_MODEL_MODIFYDBINSTANCENETWORKTYPEREQUEST_H_
#define ALIBABACLOUD_DDS_MODEL_MODIFYDBINSTANCENETWORKTYPEREQUEST_H_

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
			class ALIBABACLOUD_DDS_EXPORT ModifyDBInstanceNetworkTypeRequest : public RpcServiceRequest
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
				std::string getNetworkType()const;
				void setNetworkType(const std::string& networkType);
				long getOwnerId()const;
				void setOwnerId(long ownerId);
				std::string getAccessKeyId()const;
				void setAccessKeyId(const std::string& accessKeyId);
				std::string getVSwitchId()const;
				void setVSwitchId(const std::string& vSwitchId);
				std::string getSecurityToken()const;
				void setSecurityToken(const std::string& securityToken);
				std::string getRegionId()const;
				void setRegionId(const std::string& regionId);
				std::string getRetainClassic()const;
				void setRetainClassic(const std::string& retainClassic);
				int getClassicExpiredDays()const;
				void setClassicExpiredDays(int classicExpiredDays);
				std::string getVpcId()const;
				void setVpcId(const std::string& vpcId);
				std::string getDBInstanceId()const;
				void setDBInstanceId(const std::string& dBInstanceId);

            private:
				long resourceOwnerId_;
				std::string resourceOwnerAccount_;
				std::string ownerAccount_;
				std::string networkType_;
				long ownerId_;
				std::string accessKeyId_;
				std::string vSwitchId_;
				std::string securityToken_;
				std::string regionId_;
				std::string retainClassic_;
				int classicExpiredDays_;
				std::string vpcId_;
				std::string dBInstanceId_;

			};
		}
	}
}
#endif // !ALIBABACLOUD_DDS_MODEL_MODIFYDBINSTANCENETWORKTYPEREQUEST_H_