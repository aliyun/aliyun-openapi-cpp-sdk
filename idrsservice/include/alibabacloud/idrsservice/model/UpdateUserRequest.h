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

#ifndef ALIBABACLOUD_IDRSSERVICE_MODEL_UPDATEUSERREQUEST_H_
#define ALIBABACLOUD_IDRSSERVICE_MODEL_UPDATEUSERREQUEST_H_

#include <string>
#include <vector>
#include <alibabacloud/core/RpcServiceRequest.h>
#include <alibabacloud/idrsservice/IdrsserviceExport.h>

namespace AlibabaCloud
{
	namespace Idrsservice
	{
		namespace Model
		{
			class ALIBABACLOUD_IDRSSERVICE_EXPORT UpdateUserRequest : public RpcServiceRequest
			{

			public:
				UpdateUserRequest();
				~UpdateUserRequest();

				std::string getRole()const;
				void setRole(const std::string& role);
				std::string getPhoneNumber()const;
				void setPhoneNumber(const std::string& phoneNumber);
				std::string getName()const;
				void setName(const std::string& name);
				std::string getId()const;
				void setId(const std::string& id);
				std::string getEmail()const;
				void setEmail(const std::string& email);

            private:
				std::string role_;
				std::string phoneNumber_;
				std::string name_;
				std::string id_;
				std::string email_;

			};
		}
	}
}
#endif // !ALIBABACLOUD_IDRSSERVICE_MODEL_UPDATEUSERREQUEST_H_