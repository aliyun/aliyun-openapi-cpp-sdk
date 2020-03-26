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

#ifndef ALIBABACLOUD_SMARTAG_MODEL_MODIFYSAGREMOTEACCESSREQUEST_H_
#define ALIBABACLOUD_SMARTAG_MODEL_MODIFYSAGREMOTEACCESSREQUEST_H_

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
			class ALIBABACLOUD_SMARTAG_EXPORT ModifySagRemoteAccessRequest : public RpcServiceRequest
			{

			public:
				ModifySagRemoteAccessRequest();
				~ModifySagRemoteAccessRequest();

				long getResourceOwnerId()const;
				void setResourceOwnerId(long resourceOwnerId);
				std::string getRemoteAccessIp()const;
				void setRemoteAccessIp(const std::string& remoteAccessIp);
				std::string getSerialNumber()const;
				void setSerialNumber(const std::string& serialNumber);
				std::string getResourceOwnerAccount()const;
				void setResourceOwnerAccount(const std::string& resourceOwnerAccount);
				std::string getOwnerAccount()const;
				void setOwnerAccount(const std::string& ownerAccount);
				long getOwnerId()const;
				void setOwnerId(long ownerId);
				std::string getSmartAGId()const;
				void setSmartAGId(const std::string& smartAGId);

            private:
				long resourceOwnerId_;
				std::string remoteAccessIp_;
				std::string serialNumber_;
				std::string resourceOwnerAccount_;
				std::string ownerAccount_;
				long ownerId_;
				std::string smartAGId_;

			};
		}
	}
}
#endif // !ALIBABACLOUD_SMARTAG_MODEL_MODIFYSAGREMOTEACCESSREQUEST_H_