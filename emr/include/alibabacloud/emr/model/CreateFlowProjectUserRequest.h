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

#ifndef ALIBABACLOUD_EMR_MODEL_CREATEFLOWPROJECTUSERREQUEST_H_
#define ALIBABACLOUD_EMR_MODEL_CREATEFLOWPROJECTUSERREQUEST_H_

#include <string>
#include <vector>
#include <alibabacloud/core/RpcServiceRequest.h>
#include <alibabacloud/emr/EmrExport.h>

namespace AlibabaCloud
{
	namespace Emr
	{
		namespace Model
		{
			class ALIBABACLOUD_EMR_EXPORT CreateFlowProjectUserRequest : public RpcServiceRequest
			{
			public:
				struct User
				{
					std::string userId;
					std::string userName;
				};

			public:
				CreateFlowProjectUserRequest();
				~CreateFlowProjectUserRequest();

				std::string getRegionId()const;
				void setRegionId(const std::string& regionId);
				std::string getProjectId()const;
				void setProjectId(const std::string& projectId);
				std::vector<User> getUser()const;
				void setUser(const std::vector<User>& user);

            private:
				std::string regionId_;
				std::string projectId_;
				std::vector<User> user_;

			};
		}
	}
}
#endif // !ALIBABACLOUD_EMR_MODEL_CREATEFLOWPROJECTUSERREQUEST_H_