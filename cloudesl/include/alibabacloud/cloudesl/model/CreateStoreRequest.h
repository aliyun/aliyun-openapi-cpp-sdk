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

#ifndef ALIBABACLOUD_CLOUDESL_MODEL_CREATESTOREREQUEST_H_
#define ALIBABACLOUD_CLOUDESL_MODEL_CREATESTOREREQUEST_H_

#include <string>
#include <vector>
#include <alibabacloud/core/RpcServiceRequest.h>
#include <alibabacloud/cloudesl/CloudeslExport.h>

namespace AlibabaCloud
{
	namespace Cloudesl
	{
		namespace Model
		{
			class ALIBABACLOUD_CLOUDESL_EXPORT CreateStoreRequest : public RpcServiceRequest
			{

			public:
				CreateStoreRequest();
				~CreateStoreRequest();

				std::string getExtraParams()const;
				void setExtraParams(const std::string& extraParams);
				std::string getClientToken()const;
				void setClientToken(const std::string& clientToken);
				std::string getTimeZone()const;
				void setTimeZone(const std::string& timeZone);
				std::string getStoreName()const;
				void setStoreName(const std::string& storeName);
				std::string getParentId()const;
				void setParentId(const std::string& parentId);
				std::string getUserStoreCode()const;
				void setUserStoreCode(const std::string& userStoreCode);
				std::string getPhone()const;
				void setPhone(const std::string& phone);

            private:
				std::string extraParams_;
				std::string clientToken_;
				std::string timeZone_;
				std::string storeName_;
				std::string parentId_;
				std::string userStoreCode_;
				std::string phone_;

			};
		}
	}
}
#endif // !ALIBABACLOUD_CLOUDESL_MODEL_CREATESTOREREQUEST_H_