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

#ifndef ALIBABACLOUD_CODEUP_MODEL_LISTREPOSITORYBRANCHESREQUEST_H_
#define ALIBABACLOUD_CODEUP_MODEL_LISTREPOSITORYBRANCHESREQUEST_H_

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
			class ALIBABACLOUD_CODEUP_EXPORT ListRepositoryBranchesRequest : public RoaServiceRequest
			{

			public:
				ListRepositoryBranchesRequest();
				~ListRepositoryBranchesRequest();

				std::string getOrganizationId()const;
				void setOrganizationId(const std::string& organizationId);
				std::string getSearch()const;
				void setSearch(const std::string& search);
				std::string getSubUserId()const;
				void setSubUserId(const std::string& subUserId);
				long getPageSize()const;
				void setPageSize(long pageSize);
				std::string getAccessToken()const;
				void setAccessToken(const std::string& accessToken);
				long getPage()const;
				void setPage(long page);
				long getProjectId()const;
				void setProjectId(long projectId);

            private:
				std::string organizationId_;
				std::string search_;
				std::string subUserId_;
				long pageSize_;
				std::string accessToken_;
				long page_;
				long projectId_;

			};
		}
	}
}
#endif // !ALIBABACLOUD_CODEUP_MODEL_LISTREPOSITORYBRANCHESREQUEST_H_