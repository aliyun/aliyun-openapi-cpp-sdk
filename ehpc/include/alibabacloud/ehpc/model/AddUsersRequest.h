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

#ifndef ALIBABACLOUD_EHPC_MODEL_ADDUSERSREQUEST_H_
#define ALIBABACLOUD_EHPC_MODEL_ADDUSERSREQUEST_H_

#include <string>
#include <vector>
#include <alibabacloud/core/RpcServiceRequest.h>
#include <alibabacloud/ehpc/EHPCExport.h>

namespace AlibabaCloud
{
	namespace EHPC
	{
		namespace Model
		{
			class ALIBABACLOUD_EHPC_EXPORT AddUsersRequest : public RpcServiceRequest
			{
			public:
				struct User
				{
					std::string password;
					std::string name;
					std::string group;
				};

			public:
				AddUsersRequest();
				~AddUsersRequest();

				std::string getClusterId()const;
				void setClusterId(const std::string& clusterId);
				std::string getAccessKeyId()const;
				void setAccessKeyId(const std::string& accessKeyId);
				std::vector<User> getUser()const;
				void setUser(const std::vector<User>& user);

            private:
				std::string clusterId_;
				std::string accessKeyId_;
				std::vector<User> user_;

			};
		}
	}
}
#endif // !ALIBABACLOUD_EHPC_MODEL_ADDUSERSREQUEST_H_