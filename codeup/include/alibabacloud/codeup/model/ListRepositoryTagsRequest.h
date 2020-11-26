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

#ifndef ALIBABACLOUD_CODEUP_MODEL_LISTREPOSITORYTAGSREQUEST_H_
#define ALIBABACLOUD_CODEUP_MODEL_LISTREPOSITORYTAGSREQUEST_H_

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
			class ALIBABACLOUD_CODEUP_EXPORT ListRepositoryTagsRequest : public RoaServiceRequest
			{

			public:
				ListRepositoryTagsRequest();
				~ListRepositoryTagsRequest();

				std::string getAccessToken()const;
				void setAccessToken(const std::string& accessToken);
				bool getShowSignature()const;
				void setShowSignature(bool showSignature);
				std::string getSort()const;
				void setSort(const std::string& sort);
				std::string getOrganizationId()const;
				void setOrganizationId(const std::string& organizationId);
				std::string getSearch()const;
				void setSearch(const std::string& search);
				long getPageSize()const;
				void setPageSize(long pageSize);
				long getPage()const;
				void setPage(long page);
				long getProjectId()const;
				void setProjectId(long projectId);

            private:
				std::string accessToken_;
				bool showSignature_;
				std::string sort_;
				std::string organizationId_;
				std::string search_;
				long pageSize_;
				long page_;
				long projectId_;

			};
		}
	}
}
#endif // !ALIBABACLOUD_CODEUP_MODEL_LISTREPOSITORYTAGSREQUEST_H_