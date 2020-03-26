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

#ifndef ALIBABACLOUD_DYVMSAPI_MODEL_STARTMICROOUTBOUNDREQUEST_H_
#define ALIBABACLOUD_DYVMSAPI_MODEL_STARTMICROOUTBOUNDREQUEST_H_

#include <string>
#include <vector>
#include <alibabacloud/core/RpcServiceRequest.h>
#include <alibabacloud/dyvmsapi/DyvmsapiExport.h>

namespace AlibabaCloud
{
	namespace Dyvmsapi
	{
		namespace Model
		{
			class ALIBABACLOUD_DYVMSAPI_EXPORT StartMicroOutboundRequest : public RpcServiceRequest
			{

			public:
				StartMicroOutboundRequest();
				~StartMicroOutboundRequest();

				long getResourceOwnerId()const;
				void setResourceOwnerId(long resourceOwnerId);
				std::string getAccountType()const;
				void setAccountType(const std::string& accountType);
				std::string getAccessKeyId()const;
				void setAccessKeyId(const std::string& accessKeyId);
				std::string getAccountId()const;
				void setAccountId(const std::string& accountId);
				std::string getAppName()const;
				void setAppName(const std::string& appName);
				std::string getCommandCode()const;
				void setCommandCode(const std::string& commandCode);
				std::string getCalledNumber()const;
				void setCalledNumber(const std::string& calledNumber);
				std::string getExtInfo()const;
				void setExtInfo(const std::string& extInfo);
				std::string getResourceOwnerAccount()const;
				void setResourceOwnerAccount(const std::string& resourceOwnerAccount);
				std::string getProdCode()const;
				void setProdCode(const std::string& prodCode);
				long getOwnerId()const;
				void setOwnerId(long ownerId);
				std::string getCallingNumber()const;
				void setCallingNumber(const std::string& callingNumber);

            private:
				long resourceOwnerId_;
				std::string accountType_;
				std::string accessKeyId_;
				std::string accountId_;
				std::string appName_;
				std::string commandCode_;
				std::string calledNumber_;
				std::string extInfo_;
				std::string resourceOwnerAccount_;
				std::string prodCode_;
				long ownerId_;
				std::string callingNumber_;

			};
		}
	}
}
#endif // !ALIBABACLOUD_DYVMSAPI_MODEL_STARTMICROOUTBOUNDREQUEST_H_