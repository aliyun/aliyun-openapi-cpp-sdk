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

#ifndef ALIBABACLOUD_DDS_MODEL_CREATENODEREQUEST_H_
#define ALIBABACLOUD_DDS_MODEL_CREATENODEREQUEST_H_

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
			class ALIBABACLOUD_DDS_EXPORT CreateNodeRequest : public RpcServiceRequest
			{

			public:
				CreateNodeRequest();
				~CreateNodeRequest();

				long getResourceOwnerId()const;
				void setResourceOwnerId(long resourceOwnerId);
				std::string getNodeType()const;
				void setNodeType(const std::string& nodeType);
				bool getAutoPay()const;
				void setAutoPay(bool autoPay);
				std::string getFromApp()const;
				void setFromApp(const std::string& fromApp);
				std::string getResourceOwnerAccount()const;
				void setResourceOwnerAccount(const std::string& resourceOwnerAccount);
				std::string getClientToken()const;
				void setClientToken(const std::string& clientToken);
				int getNodeStorage()const;
				void setNodeStorage(int nodeStorage);
				std::string getOwnerAccount()const;
				void setOwnerAccount(const std::string& ownerAccount);
				long getOwnerId()const;
				void setOwnerId(long ownerId);
				std::string getNodeClass()const;
				void setNodeClass(const std::string& nodeClass);
				std::string getAccessKeyId()const;
				void setAccessKeyId(const std::string& accessKeyId);
				std::string getSecurityToken()const;
				void setSecurityToken(const std::string& securityToken);
				std::string getRegionId()const;
				void setRegionId(const std::string& regionId);
				std::string getDBInstanceId()const;
				void setDBInstanceId(const std::string& dBInstanceId);

            private:
				long resourceOwnerId_;
				std::string nodeType_;
				bool autoPay_;
				std::string fromApp_;
				std::string resourceOwnerAccount_;
				std::string clientToken_;
				int nodeStorage_;
				std::string ownerAccount_;
				long ownerId_;
				std::string nodeClass_;
				std::string accessKeyId_;
				std::string securityToken_;
				std::string regionId_;
				std::string dBInstanceId_;

			};
		}
	}
}
#endif // !ALIBABACLOUD_DDS_MODEL_CREATENODEREQUEST_H_