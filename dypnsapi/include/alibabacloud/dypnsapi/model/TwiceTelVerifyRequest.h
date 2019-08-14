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

#ifndef ALIBABACLOUD_DYPNSAPI_MODEL_TWICETELVERIFYREQUEST_H_
#define ALIBABACLOUD_DYPNSAPI_MODEL_TWICETELVERIFYREQUEST_H_

#include <string>
#include <vector>
#include <alibabacloud/core/RpcServiceRequest.h>
#include <alibabacloud/dypnsapi/DypnsapiExport.h>

namespace AlibabaCloud
{
	namespace Dypnsapi
	{
		namespace Model
		{
			class ALIBABACLOUD_DYPNSAPI_EXPORT TwiceTelVerifyRequest : public RpcServiceRequest
			{

			public:
				TwiceTelVerifyRequest();
				~TwiceTelVerifyRequest();

				long getResourceOwnerId()const;
				void setResourceOwnerId(long resourceOwnerId);
				std::string getResourceOwnerAccount()const;
				void setResourceOwnerAccount(const std::string& resourceOwnerAccount);
				std::string getPhoneNumber()const;
				void setPhoneNumber(const std::string& phoneNumber);
				long getOwnerId()const;
				void setOwnerId(long ownerId);
				std::string getAccessKeyId()const;
				void setAccessKeyId(const std::string& accessKeyId);
				std::string getSince()const;
				void setSince(const std::string& since);

            private:
				long resourceOwnerId_;
				std::string resourceOwnerAccount_;
				std::string phoneNumber_;
				long ownerId_;
				std::string accessKeyId_;
				std::string since_;

			};
		}
	}
}
#endif // !ALIBABACLOUD_DYPNSAPI_MODEL_TWICETELVERIFYREQUEST_H_