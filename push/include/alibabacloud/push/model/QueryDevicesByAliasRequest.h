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

#ifndef ALIBABACLOUD_PUSH_MODEL_QUERYDEVICESBYALIASREQUEST_H_
#define ALIBABACLOUD_PUSH_MODEL_QUERYDEVICESBYALIASREQUEST_H_

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
			class ALIBABACLOUD_PUSH_EXPORT QueryDevicesByAliasRequest : public RpcServiceRequest
			{

			public:
				QueryDevicesByAliasRequest();
				~QueryDevicesByAliasRequest();

				std::string getAlias()const;
				void setAlias(const std::string& alias);
				long getAppKey()const;
				void setAppKey(long appKey);
				std::string getAccessKeyId()const;
				void setAccessKeyId(const std::string& accessKeyId);

            private:
				std::string alias_;
				long appKey_;
				std::string accessKeyId_;

			};
		}
	}
}
#endif // !ALIBABACLOUD_PUSH_MODEL_QUERYDEVICESBYALIASREQUEST_H_