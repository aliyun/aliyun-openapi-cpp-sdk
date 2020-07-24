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

#ifndef ALIBABACLOUD_CODEUP_MODEL_LISTREPOSITORYTREEREQUEST_H_
#define ALIBABACLOUD_CODEUP_MODEL_LISTREPOSITORYTREEREQUEST_H_

#include <string>
#include <vector>
#include <alibabacloud/core/RoaServiceRequest.h>
#include <alibabacloud/codeup/CodeupExport.h>

namespace AlibabaCloud
{
	namespace Codeup
	{
		namespace Model
		{
			class ALIBABACLOUD_CODEUP_EXPORT ListRepositoryTreeRequest : public RoaServiceRequest
			{

			public:
				ListRepositoryTreeRequest();
				~ListRepositoryTreeRequest();

				std::string getOrganizationId()const;
				void setOrganizationId(const std::string& organizationId);
				std::string getPath()const;
				void setPath(const std::string& path);
				std::string getSubUserId()const;
				void setSubUserId(const std::string& subUserId);
				std::string getAccessToken()const;
				void setAccessToken(const std::string& accessToken);
				std::string getType()const;
				void setType(const std::string& type);
				long getProjectId()const;
				void setProjectId(long projectId);
				std::string getRefName()const;
				void setRefName(const std::string& refName);

            private:
				std::string organizationId_;
				std::string path_;
				std::string subUserId_;
				std::string accessToken_;
				std::string type_;
				long projectId_;
				std::string refName_;

			};
		}
	}
}
#endif // !ALIBABACLOUD_CODEUP_MODEL_LISTREPOSITORYTREEREQUEST_H_