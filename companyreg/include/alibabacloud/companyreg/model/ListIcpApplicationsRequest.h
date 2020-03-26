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

#ifndef ALIBABACLOUD_COMPANYREG_MODEL_LISTICPAPPLICATIONSREQUEST_H_
#define ALIBABACLOUD_COMPANYREG_MODEL_LISTICPAPPLICATIONSREQUEST_H_

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
			class ALIBABACLOUD_COMPANYREG_EXPORT ListIcpApplicationsRequest : public RpcServiceRequest
			{

			public:
				ListIcpApplicationsRequest();
				~ListIcpApplicationsRequest();

				std::string getIntentionBizId()const;
				void setIntentionBizId(const std::string& intentionBizId);
				int getType()const;
				void setType(int type);
				int getApplicationStatus()const;
				void setApplicationStatus(int applicationStatus);
				int getPageNumber()const;
				void setPageNumber(int pageNumber);
				std::string getCompanyName()const;
				void setCompanyName(const std::string& companyName);
				int getPageSize()const;
				void setPageSize(int pageSize);
				std::string getSortOrder()const;
				void setSortOrder(const std::string& sortOrder);
				std::string getSortField()const;
				void setSortField(const std::string& sortField);

            private:
				std::string intentionBizId_;
				int type_;
				int applicationStatus_;
				int pageNumber_;
				std::string companyName_;
				int pageSize_;
				std::string sortOrder_;
				std::string sortField_;

			};
		}
	}
}
#endif // !ALIBABACLOUD_COMPANYREG_MODEL_LISTICPAPPLICATIONSREQUEST_H_