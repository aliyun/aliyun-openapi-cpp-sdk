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

#ifndef ALIBABACLOUD_WORKORDER_MODEL_LISTTICKETSREQUEST_H_
#define ALIBABACLOUD_WORKORDER_MODEL_LISTTICKETSREQUEST_H_

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
			class ALIBABACLOUD_WORKORDER_EXPORT ListTicketsRequest : public RpcServiceRequest
			{

			public:
				ListTicketsRequest();
				~ListTicketsRequest();

				std::vector<std::string> getStatusList()const;
				void setStatusList(const std::vector<std::string>& statusList);
				long getStartDate()const;
				void setStartDate(long startDate);
				int getPageNumber()const;
				void setPageNumber(int pageNumber);
				long getEndDate()const;
				void setEndDate(long endDate);
				int getPageSize()const;
				void setPageSize(int pageSize);
				std::string getKeyword()const;
				void setKeyword(const std::string& keyword);
				std::string getTicketId()const;
				void setTicketId(const std::string& ticketId);

            private:
				std::vector<std::string> statusList_;
				long startDate_;
				int pageNumber_;
				long endDate_;
				int pageSize_;
				std::string keyword_;
				std::string ticketId_;

			};
		}
	}
}
#endif // !ALIBABACLOUD_WORKORDER_MODEL_LISTTICKETSREQUEST_H_