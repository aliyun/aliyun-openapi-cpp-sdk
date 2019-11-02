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

#ifndef ALIBABACLOUD_DYVMSAPI_MODEL_GETRTCTOKENREQUEST_H_
#define ALIBABACLOUD_DYVMSAPI_MODEL_GETRTCTOKENREQUEST_H_

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
			class ALIBABACLOUD_DYVMSAPI_EXPORT GetRtcTokenRequest : public RpcServiceRequest
			{

			public:
				GetRtcTokenRequest();
				~GetRtcTokenRequest();

				long getResourceOwnerId()const;
				void setResourceOwnerId(long resourceOwnerId);
				std::string getUserId()const;
				void setUserId(const std::string& userId);
				std::string getAccessKeyId()const;
				void setAccessKeyId(const std::string& accessKeyId);
				std::string getResourceOwnerAccount()const;
				void setResourceOwnerAccount(const std::string& resourceOwnerAccount);
				long getOwnerId()const;
				void setOwnerId(long ownerId);
				std::string getDeviceId()const;
				void setDeviceId(const std::string& deviceId);
				bool getIsCustomAccount()const;
				void setIsCustomAccount(bool isCustomAccount);

            private:
				long resourceOwnerId_;
				std::string userId_;
				std::string accessKeyId_;
				std::string resourceOwnerAccount_;
				long ownerId_;
				std::string deviceId_;
				bool isCustomAccount_;

			};
		}
	}
}
#endif // !ALIBABACLOUD_DYVMSAPI_MODEL_GETRTCTOKENREQUEST_H_