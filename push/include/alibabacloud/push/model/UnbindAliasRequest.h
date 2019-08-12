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

#ifndef ALIBABACLOUD_PUSH_MODEL_UNBINDALIASREQUEST_H_
#define ALIBABACLOUD_PUSH_MODEL_UNBINDALIASREQUEST_H_

#include <string>
#include <vector>
#include <alibabacloud/core/RpcServiceRequest.h>
#include <alibabacloud/push/PushExport.h>

namespace AlibabaCloud
{
	namespace Push
	{
		namespace Model
		{
			class ALIBABACLOUD_PUSH_EXPORT UnbindAliasRequest : public RpcServiceRequest
			{

			public:
				UnbindAliasRequest();
				~UnbindAliasRequest();

				std::string getAliasName()const;
				void setAliasName(const std::string& aliasName);
				long getAppKey()const;
				void setAppKey(long appKey);
				std::string getDeviceId()const;
				void setDeviceId(const std::string& deviceId);
				std::string getAccessKeyId()const;
				void setAccessKeyId(const std::string& accessKeyId);
				bool getUnbindAll()const;
				void setUnbindAll(bool unbindAll);

            private:
				std::string aliasName_;
				long appKey_;
				std::string deviceId_;
				std::string accessKeyId_;
				bool unbindAll_;

			};
		}
	}
}
#endif // !ALIBABACLOUD_PUSH_MODEL_UNBINDALIASREQUEST_H_