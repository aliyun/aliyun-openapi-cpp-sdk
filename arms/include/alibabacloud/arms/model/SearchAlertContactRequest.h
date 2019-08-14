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

#ifndef ALIBABACLOUD_ARMS_MODEL_SEARCHALERTCONTACTREQUEST_H_
#define ALIBABACLOUD_ARMS_MODEL_SEARCHALERTCONTACTREQUEST_H_

#include <string>
#include <vector>
#include <alibabacloud/core/RpcServiceRequest.h>
#include <alibabacloud/arms/ARMSExport.h>

namespace AlibabaCloud
{
	namespace ARMS
	{
		namespace Model
		{
			class ALIBABACLOUD_ARMS_EXPORT SearchAlertContactRequest : public RpcServiceRequest
			{

			public:
				SearchAlertContactRequest();
				~SearchAlertContactRequest();

				std::string getContactName()const;
				void setContactName(const std::string& contactName);
				std::string getPhone()const;
				void setPhone(const std::string& phone);
				std::string getRegionId()const;
				void setRegionId(const std::string& regionId);
				std::string getPageSize()const;
				void setPageSize(const std::string& pageSize);
				std::string getCurrentPage()const;
				void setCurrentPage(const std::string& currentPage);
				std::string getEmail()const;
				void setEmail(const std::string& email);

            private:
				std::string contactName_;
				std::string phone_;
				std::string regionId_;
				std::string pageSize_;
				std::string currentPage_;
				std::string email_;

			};
		}
	}
}
#endif // !ALIBABACLOUD_ARMS_MODEL_SEARCHALERTCONTACTREQUEST_H_