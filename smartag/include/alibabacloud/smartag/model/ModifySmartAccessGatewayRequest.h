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

#ifndef ALIBABACLOUD_SMARTAG_MODEL_MODIFYSMARTACCESSGATEWAYREQUEST_H_
#define ALIBABACLOUD_SMARTAG_MODEL_MODIFYSMARTACCESSGATEWAYREQUEST_H_

#include <string>
#include <vector>
#include <alibabacloud/core/RpcServiceRequest.h>
#include <alibabacloud/smartag/SmartagExport.h>

namespace AlibabaCloud
{
	namespace Smartag
	{
		namespace Model
		{
			class ALIBABACLOUD_SMARTAG_EXPORT ModifySmartAccessGatewayRequest : public RpcServiceRequest
			{

			public:
				ModifySmartAccessGatewayRequest();
				~ModifySmartAccessGatewayRequest();

				long getResourceOwnerId()const;
				void setResourceOwnerId(long resourceOwnerId);
				std::string getResourceOwnerAccount()const;
				void setResourceOwnerAccount(const std::string& resourceOwnerAccount);
				std::string getCity()const;
				void setCity(const std::string& city);
				std::string getRegionId()const;
				void setRegionId(const std::string& regionId);
				std::string getOwnerAccount()const;
				void setOwnerAccount(const std::string& ownerAccount);
				std::string getName()const;
				void setName(const std::string& name);
				std::string getCidrBlock()const;
				void setCidrBlock(const std::string& cidrBlock);
				std::string getSmartAGId()const;
				void setSmartAGId(const std::string& smartAGId);
				std::string getDescription()const;
				void setDescription(const std::string& description);
				long getOwnerId()const;
				void setOwnerId(long ownerId);
				int getSecurityLockThreshold()const;
				void setSecurityLockThreshold(int securityLockThreshold);

            private:
				long resourceOwnerId_;
				std::string resourceOwnerAccount_;
				std::string city_;
				std::string regionId_;
				std::string ownerAccount_;
				std::string name_;
				std::string cidrBlock_;
				std::string smartAGId_;
				std::string description_;
				long ownerId_;
				int securityLockThreshold_;

			};
		}
	}
}
#endif // !ALIBABACLOUD_SMARTAG_MODEL_MODIFYSMARTACCESSGATEWAYREQUEST_H_