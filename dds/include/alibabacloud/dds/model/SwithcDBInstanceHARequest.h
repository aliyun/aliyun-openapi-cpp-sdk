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

#ifndef ALIBABACLOUD_DDS_MODEL_SWITHCDBINSTANCEHAREQUEST_H_
#define ALIBABACLOUD_DDS_MODEL_SWITHCDBINSTANCEHAREQUEST_H_

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
			class ALIBABACLOUD_DDS_EXPORT SwithcDBInstanceHARequest : public RpcServiceRequest
			{

			public:
				SwithcDBInstanceHARequest();
				~SwithcDBInstanceHARequest();

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
				int getTargetInstanceId()const;
				void setTargetInstanceId(int targetInstanceId);
				std::string getSecurityToken()const;
				void setSecurityToken(const std::string& securityToken);
				std::string getRegionId()const;
				void setRegionId(const std::string& regionId);
				int getSwitchType()const;
				void setSwitchType(int switchType);
				std::string getDBInstanceId()const;
				void setDBInstanceId(const std::string& dBInstanceId);
				int getSourceInstanceId()const;
				void setSourceInstanceId(int sourceInstanceId);
				std::string getNodeId()const;
				void setNodeId(const std::string& nodeId);

            private:
				long resourceOwnerId_;
				std::string resourceOwnerAccount_;
				std::string ownerAccount_;
				long ownerId_;
				std::string accessKeyId_;
				int targetInstanceId_;
				std::string securityToken_;
				std::string regionId_;
				int switchType_;
				std::string dBInstanceId_;
				int sourceInstanceId_;
				std::string nodeId_;

			};
		}
	}
}
#endif // !ALIBABACLOUD_DDS_MODEL_SWITHCDBINSTANCEHAREQUEST_H_