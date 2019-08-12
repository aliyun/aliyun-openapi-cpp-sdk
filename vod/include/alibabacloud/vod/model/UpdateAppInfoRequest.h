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

#ifndef ALIBABACLOUD_VOD_MODEL_UPDATEAPPINFOREQUEST_H_
#define ALIBABACLOUD_VOD_MODEL_UPDATEAPPINFOREQUEST_H_

#include <string>
#include <vector>
#include <alibabacloud/core/RpcServiceRequest.h>
#include <alibabacloud/vod/VodExport.h>

namespace AlibabaCloud
{
	namespace Vod
	{
		namespace Model
		{
			class ALIBABACLOUD_VOD_EXPORT UpdateAppInfoRequest : public RpcServiceRequest
			{

			public:
				UpdateAppInfoRequest();
				~UpdateAppInfoRequest();

				long getResourceOwnerId()const;
				void setResourceOwnerId(long resourceOwnerId);
				std::string getAppName()const;
				void setAppName(const std::string& appName);
				std::string getResourceOwnerAccount()const;
				void setResourceOwnerAccount(const std::string& resourceOwnerAccount);
				std::string getAppId()const;
				void setAppId(const std::string& appId);
				std::string getDescription()const;
				void setDescription(const std::string& description);
				long getResourceRealOwnerId()const;
				void setResourceRealOwnerId(long resourceRealOwnerId);
				long getOwnerId()const;
				void setOwnerId(long ownerId);
				std::string getAccessKeyId()const;
				void setAccessKeyId(const std::string& accessKeyId);
				std::string getStatus()const;
				void setStatus(const std::string& status);

            private:
				long resourceOwnerId_;
				std::string appName_;
				std::string resourceOwnerAccount_;
				std::string appId_;
				std::string description_;
				long resourceRealOwnerId_;
				long ownerId_;
				std::string accessKeyId_;
				std::string status_;

			};
		}
	}
}
#endif // !ALIBABACLOUD_VOD_MODEL_UPDATEAPPINFOREQUEST_H_