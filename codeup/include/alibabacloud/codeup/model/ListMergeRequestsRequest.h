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

#ifndef ALIBABACLOUD_CODEUP_MODEL_LISTMERGEREQUESTSREQUEST_H_
#define ALIBABACLOUD_CODEUP_MODEL_LISTMERGEREQUESTSREQUEST_H_

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
			class ALIBABACLOUD_CODEUP_EXPORT ListMergeRequestsRequest : public RoaServiceRequest
			{

			public:
				ListMergeRequestsRequest();
				~ListMergeRequestsRequest();

				std::string getBeforeDate()const;
				void setBeforeDate(const std::string& beforeDate);
				std::string getAssigneeIdList()const;
				void setAssigneeIdList(const std::string& assigneeIdList);
				std::string getAccessToken()const;
				void setAccessToken(const std::string& accessToken);
				std::string getSubscriberCodeupIdList()const;
				void setSubscriberCodeupIdList(const std::string& subscriberCodeupIdList);
				std::string getAfterDate()const;
				void setAfterDate(const std::string& afterDate);
				std::string getOrganizationId()const;
				void setOrganizationId(const std::string& organizationId);
				std::string getGroupIdList()const;
				void setGroupIdList(const std::string& groupIdList);
				std::string getSearch()const;
				void setSearch(const std::string& search);
				std::string getAuthorCodeupIdList()const;
				void setAuthorCodeupIdList(const std::string& authorCodeupIdList);
				std::string getAuthorIdList()const;
				void setAuthorIdList(const std::string& authorIdList);
				long getPageSize()const;
				void setPageSize(long pageSize);
				std::string getProjectIdList()const;
				void setProjectIdList(const std::string& projectIdList);
				long getPage()const;
				void setPage(long page);
				std::string getAssigneeCodeupIdList()const;
				void setAssigneeCodeupIdList(const std::string& assigneeCodeupIdList);
				std::string getState()const;
				void setState(const std::string& state);
				std::string getOrder()const;
				void setOrder(const std::string& order);

            private:
				std::string beforeDate_;
				std::string assigneeIdList_;
				std::string accessToken_;
				std::string subscriberCodeupIdList_;
				std::string afterDate_;
				std::string organizationId_;
				std::string groupIdList_;
				std::string search_;
				std::string authorCodeupIdList_;
				std::string authorIdList_;
				long pageSize_;
				std::string projectIdList_;
				long page_;
				std::string assigneeCodeupIdList_;
				std::string state_;
				std::string order_;

			};
		}
	}
}
#endif // !ALIBABACLOUD_CODEUP_MODEL_LISTMERGEREQUESTSREQUEST_H_