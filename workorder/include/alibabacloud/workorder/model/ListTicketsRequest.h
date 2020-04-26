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

				std::string getProductCode()const;
				void setProductCode(const std::string& productCode);
				std::string getLanguage()const;
				void setLanguage(const std::string& language);
				std::string getSubUserId()const;
				void setSubUserId(const std::string& subUserId);
				long getCreatedBeforeTime()const;
				void setCreatedBeforeTime(long createdBeforeTime);
				int getPageSize()const;
				void setPageSize(int pageSize);
				std::string getIds()const;
				void setIds(const std::string& ids);
				std::string getTicketStatus()const;
				void setTicketStatus(const std::string& ticketStatus);
				int getPageStart()const;
				void setPageStart(int pageStart);
				long getCreatedAfterTime()const;
				void setCreatedAfterTime(long createdAfterTime);

            private:
				std::string productCode_;
				std::string language_;
				std::string subUserId_;
				long createdBeforeTime_;
				int pageSize_;
				std::string ids_;
				std::string ticketStatus_;
				int pageStart_;
				long createdAfterTime_;

			};
		}
	}
}
#endif // !ALIBABACLOUD_WORKORDER_MODEL_LISTTICKETSREQUEST_H_