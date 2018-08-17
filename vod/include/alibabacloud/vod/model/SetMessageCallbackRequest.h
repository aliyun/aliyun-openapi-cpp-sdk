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

#ifndef ALIBABACLOUD_VOD_MODEL_SETMESSAGECALLBACKREQUEST_H_
#define ALIBABACLOUD_VOD_MODEL_SETMESSAGECALLBACKREQUEST_H_

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
			class ALIBABACLOUD_VOD_EXPORT SetMessageCallbackRequest : public RpcServiceRequest
			{

			public:
				SetMessageCallbackRequest();
				~SetMessageCallbackRequest();

				std::string getCallbackType()const;
				void setCallbackType(const std::string& callbackType);
				std::string getAuthKey()const;
				void setAuthKey(const std::string& authKey);
				std::string getResourceOwnerId()const;
				void setResourceOwnerId(const std::string& resourceOwnerId);
				std::string getCallbackSwitch()const;
				void setCallbackSwitch(const std::string& callbackSwitch);
				std::string getResourceOwnerAccount()const;
				void setResourceOwnerAccount(const std::string& resourceOwnerAccount);
				std::string getOwnerAccount()const;
				void setOwnerAccount(const std::string& ownerAccount);
				std::string getEventTypeList()const;
				void setEventTypeList(const std::string& eventTypeList);
				std::string getAuthSwitch()const;
				void setAuthSwitch(const std::string& authSwitch);
				std::string getCallbackURL()const;
				void setCallbackURL(const std::string& callbackURL);
				std::string getOwnerId()const;
				void setOwnerId(const std::string& ownerId);
				std::string getAccessKeyId()const;
				void setAccessKeyId(const std::string& accessKeyId);

            private:
				std::string callbackType_;
				std::string authKey_;
				std::string resourceOwnerId_;
				std::string callbackSwitch_;
				std::string resourceOwnerAccount_;
				std::string ownerAccount_;
				std::string eventTypeList_;
				std::string authSwitch_;
				std::string callbackURL_;
				std::string ownerId_;
				std::string accessKeyId_;

			};
		}
	}
}
#endif // !ALIBABACLOUD_VOD_MODEL_SETMESSAGECALLBACKREQUEST_H_