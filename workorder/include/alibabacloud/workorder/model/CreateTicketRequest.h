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

#ifndef ALIBABACLOUD_WORKORDER_MODEL_CREATETICKETREQUEST_H_
#define ALIBABACLOUD_WORKORDER_MODEL_CREATETICKETREQUEST_H_

#include <string>
#include <vector>
#include <alibabacloud/core/RpcServiceRequest.h>
#include <alibabacloud/workorder/WorkorderExport.h>

namespace AlibabaCloud
{
	namespace Workorder
	{
		namespace Model
		{
			class ALIBABACLOUD_WORKORDER_EXPORT CreateTicketRequest : public RpcServiceRequest
			{

			public:
				CreateTicketRequest();
				~CreateTicketRequest();

				std::string getProductCode()const;
				void setProductCode(const std::string& productCode);
				std::string getLanguage()const;
				void setLanguage(const std::string& language);
				std::string getTitle()const;
				void setTitle(const std::string& title);
				std::string getContent()const;
				void setContent(const std::string& content);
				std::string getNotifyTimeRange()const;
				void setNotifyTimeRange(const std::string& notifyTimeRange);
				std::string getPhone()const;
				void setPhone(const std::string& phone);
				std::string getCategory()const;
				void setCategory(const std::string& category);
				std::string getEmail()const;
				void setEmail(const std::string& email);
				std::string getSecretContent()const;
				void setSecretContent(const std::string& secretContent);

            private:
				std::string productCode_;
				std::string language_;
				std::string title_;
				std::string content_;
				std::string notifyTimeRange_;
				std::string phone_;
				std::string category_;
				std::string email_;
				std::string secretContent_;

			};
		}
	}
}
#endif // !ALIBABACLOUD_WORKORDER_MODEL_CREATETICKETREQUEST_H_