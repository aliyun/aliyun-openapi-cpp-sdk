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

#ifndef ALIBABACLOUD_COMPANYREG_MODEL_CREATEBOOKKEEPINGINTENTIONREQUEST_H_
#define ALIBABACLOUD_COMPANYREG_MODEL_CREATEBOOKKEEPINGINTENTIONREQUEST_H_

#include <string>
#include <vector>
#include <alibabacloud/core/RpcServiceRequest.h>
#include <alibabacloud/companyreg/CompanyregExport.h>

namespace AlibabaCloud
{
	namespace Companyreg
	{
		namespace Model
		{
			class ALIBABACLOUD_COMPANYREG_EXPORT CreateBookkeepingIntentionRequest : public RpcServiceRequest
			{

			public:
				CreateBookkeepingIntentionRequest();
				~CreateBookkeepingIntentionRequest();

				std::string getArea()const;
				void setArea(const std::string& area);
				std::string getMobile()const;
				void setMobile(const std::string& mobile);
				std::string getChannel()const;
				void setChannel(const std::string& channel);
				std::string getDescription()const;
				void setDescription(const std::string& description);
				std::string getToken()const;
				void setToken(const std::string& token);
				std::string getVerifyCode()const;
				void setVerifyCode(const std::string& verifyCode);
				std::string getUserName()const;
				void setUserName(const std::string& userName);

            private:
				std::string area_;
				std::string mobile_;
				std::string channel_;
				std::string description_;
				std::string token_;
				std::string verifyCode_;
				std::string userName_;

			};
		}
	}
}
#endif // !ALIBABACLOUD_COMPANYREG_MODEL_CREATEBOOKKEEPINGINTENTIONREQUEST_H_